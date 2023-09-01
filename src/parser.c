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
#define STATE_COUNT 546
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 209
#define ALIAS_COUNT 1
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 47

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
  aux_sym__log_verbose_value_token2 = 76,
  aux_sym__log_verbose_quoted_token1 = 77,
  sym_ipqos = 78,
  sym_verbosity = 79,
  sym_cipher = 80,
  sym_kex = 81,
  sym_key_sig = 82,
  sym_protocol_version = 83,
  sym_sig = 84,
  aux_sym__file_token_token1 = 85,
  aux_sym__hosts_token_token1 = 86,
  aux_sym__hostname_token_token1 = 87,
  sym_token = 88,
  anon_sym_DOLLAR = 89,
  sym__var_name = 90,
  anon_sym_DOLLAR_LBRACE = 91,
  anon_sym_RBRACE = 92,
  aux_sym_string_token1 = 93,
  aux_sym_string_token2 = 94,
  anon_sym_yes = 95,
  anon_sym_no = 96,
  sym__number = 97,
  aux_sym_time_token1 = 98,
  aux_sym_time_token2 = 99,
  aux_sym_time_token3 = 100,
  aux_sym_time_token4 = 101,
  aux_sym_time_token5 = 102,
  sym_comment = 103,
  anon_sym_EQ = 104,
  sym__space = 105,
  sym__eol = 106,
  sym_config = 107,
  sym_host_declaration = 108,
  sym__declarations = 109,
  sym_parameter = 110,
  sym__add_keys_to_agent = 111,
  sym__address_family = 112,
  sym__batch_mode = 113,
  sym__bind_address = 114,
  sym__bind_interface = 115,
  sym__canonical_domains = 116,
  sym__canonicalize_fallback_local = 117,
  sym__canonicalize_hostname = 118,
  sym__canonicalize_max_dots = 119,
  sym__canonicalize_permitted_cnames = 120,
  sym__cnames_map = 121,
  sym__ca_signature_algorithms = 122,
  sym__certificate_file = 123,
  sym__check_host_ip = 124,
  sym__ciphers = 125,
  sym__clear_all_forwardings = 126,
  sym__compression = 127,
  sym__connection_attempts = 128,
  sym__connect_timeout = 129,
  sym__control_master = 130,
  sym__control_persist = 131,
  sym__control_path = 132,
  sym__enable_escape_command_line = 133,
  sym__enable_ssh_keysign = 134,
  sym__escape_char = 135,
  sym__exit_on_forward_failure = 136,
  sym__fingerprint_hash = 137,
  sym__fork_after_authentication = 138,
  sym__forward_agent = 139,
  sym__forward_x11 = 140,
  sym__forward_x11_timeout = 141,
  sym__forward_x11_trusted = 142,
  sym__global_known_hosts_file = 143,
  sym__gssapi_authentication = 144,
  sym__gssapi_delegate_credentials = 145,
  sym__hostbased_accepted_algorithms = 146,
  sym__hostbased_authentication = 147,
  sym__host_key_algorithms = 148,
  sym__host_key_alias = 149,
  sym__hostname = 150,
  sym__identities_only = 151,
  sym__identity_agent = 152,
  sym__identity_file = 153,
  sym__ignore_unknown = 154,
  sym__ipqos = 155,
  sym__kbd_interactive_authentication = 156,
  sym__kex_algorithms = 157,
  sym__known_hosts_command = 158,
  sym__local_command = 159,
  sym__local_forward = 160,
  sym__local_forward_value1 = 161,
  sym__local_forward_value2 = 162,
  sym__log_level = 163,
  sym__log_verbose = 164,
  sym__log_verbose_value = 165,
  sym__log_verbose_quoted = 166,
  sym__file_token = 167,
  sym__hosts_token = 168,
  sym__hostname_token = 169,
  sym__var_value = 170,
  sym_variable = 171,
  sym__file_string = 172,
  sym__hosts_string = 173,
  sym__hostname_string = 174,
  sym__token_string = 175,
  sym_string = 176,
  sym__file_pattern_vars = 177,
  sym_pattern = 178,
  sym__boolean = 179,
  sym_time = 180,
  sym__sep = 181,
  aux_sym_config_repeat1 = 182,
  aux_sym_host_declaration_repeat1 = 183,
  aux_sym__declarations_repeat1 = 184,
  aux_sym__canonical_domains_repeat1 = 185,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 186,
  aux_sym__cnames_map_repeat1 = 187,
  aux_sym__ca_signature_algorithms_repeat1 = 188,
  aux_sym__ciphers_repeat1 = 189,
  aux_sym__global_known_hosts_file_repeat1 = 190,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 191,
  aux_sym__ignore_unknown_repeat1 = 192,
  aux_sym__kex_algorithms_repeat1 = 193,
  aux_sym__log_verbose_repeat1 = 194,
  aux_sym__log_verbose_repeat2 = 195,
  aux_sym__log_verbose_value_repeat1 = 196,
  aux_sym__log_verbose_value_repeat2 = 197,
  aux_sym__log_verbose_quoted_repeat1 = 198,
  aux_sym__file_string_repeat1 = 199,
  aux_sym__file_string_repeat2 = 200,
  aux_sym__hosts_string_repeat1 = 201,
  aux_sym__hosts_string_repeat2 = 202,
  aux_sym__hostname_string_repeat1 = 203,
  aux_sym__hostname_string_repeat2 = 204,
  aux_sym__token_string_repeat1 = 205,
  aux_sym__token_string_repeat2 = 206,
  aux_sym__file_pattern_vars_repeat1 = 207,
  aux_sym__file_pattern_vars_repeat2 = 208,
  alias_sym_number = 209,
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
  [aux_sym__log_verbose_value_token2] = "_log_verbose_value_token2",
  [aux_sym__log_verbose_quoted_token1] = "_log_verbose_quoted_token1",
  [sym_ipqos] = "ipqos",
  [sym_verbosity] = "verbosity",
  [sym_cipher] = "cipher",
  [sym_kex] = "kex",
  [sym_key_sig] = "key_sig",
  [sym_protocol_version] = "protocol_version",
  [sym_sig] = "sig",
  [aux_sym__file_token_token1] = "token",
  [aux_sym__hosts_token_token1] = "token",
  [aux_sym__hostname_token_token1] = "token",
  [sym_token] = "token",
  [anon_sym_DOLLAR] = "variable",
  [sym__var_name] = "_var_name",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [sym__number] = "_number",
  [aux_sym_time_token1] = "time_token1",
  [aux_sym_time_token2] = "time_token2",
  [aux_sym_time_token3] = "time_token3",
  [aux_sym_time_token4] = "time_token4",
  [aux_sym_time_token5] = "time_token5",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
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
  [sym__file_token] = "_file_token",
  [sym__hosts_token] = "_hosts_token",
  [sym__hostname_token] = "_hostname_token",
  [sym__var_value] = "_var_value",
  [sym_variable] = "variable",
  [sym__file_string] = "_file_string",
  [sym__hosts_string] = "_hosts_string",
  [sym__hostname_string] = "_hostname_string",
  [sym__token_string] = "_token_string",
  [sym_string] = "string",
  [sym__file_pattern_vars] = "_file_pattern_vars",
  [sym_pattern] = "pattern",
  [sym__boolean] = "_boolean",
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
  [aux_sym__log_verbose_repeat1] = "_log_verbose_repeat1",
  [aux_sym__log_verbose_repeat2] = "_log_verbose_repeat2",
  [aux_sym__log_verbose_value_repeat1] = "_log_verbose_value_repeat1",
  [aux_sym__log_verbose_value_repeat2] = "_log_verbose_value_repeat2",
  [aux_sym__log_verbose_quoted_repeat1] = "_log_verbose_quoted_repeat1",
  [aux_sym__file_string_repeat1] = "_file_string_repeat1",
  [aux_sym__file_string_repeat2] = "_file_string_repeat2",
  [aux_sym__hosts_string_repeat1] = "_hosts_string_repeat1",
  [aux_sym__hosts_string_repeat2] = "_hosts_string_repeat2",
  [aux_sym__hostname_string_repeat1] = "_hostname_string_repeat1",
  [aux_sym__hostname_string_repeat2] = "_hostname_string_repeat2",
  [aux_sym__token_string_repeat1] = "_token_string_repeat1",
  [aux_sym__token_string_repeat2] = "_token_string_repeat2",
  [aux_sym__file_pattern_vars_repeat1] = "_file_pattern_vars_repeat1",
  [aux_sym__file_pattern_vars_repeat2] = "_file_pattern_vars_repeat2",
  [alias_sym_number] = "number",
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
  [aux_sym__log_verbose_value_token2] = aux_sym__log_verbose_value_token2,
  [aux_sym__log_verbose_quoted_token1] = aux_sym__log_verbose_quoted_token1,
  [sym_ipqos] = sym_ipqos,
  [sym_verbosity] = sym_verbosity,
  [sym_cipher] = sym_cipher,
  [sym_kex] = sym_kex,
  [sym_key_sig] = sym_key_sig,
  [sym_protocol_version] = sym_protocol_version,
  [sym_sig] = sym_sig,
  [aux_sym__file_token_token1] = sym_token,
  [aux_sym__hosts_token_token1] = sym_token,
  [aux_sym__hostname_token_token1] = sym_token,
  [sym_token] = sym_token,
  [anon_sym_DOLLAR] = sym_variable,
  [sym__var_name] = sym__var_name,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [sym__number] = sym__number,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [aux_sym_time_token2] = aux_sym_time_token2,
  [aux_sym_time_token3] = aux_sym_time_token3,
  [aux_sym_time_token4] = aux_sym_time_token4,
  [aux_sym_time_token5] = aux_sym_time_token5,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym__file_token] = sym__file_token,
  [sym__hosts_token] = sym__hosts_token,
  [sym__hostname_token] = sym__hostname_token,
  [sym__var_value] = sym__var_value,
  [sym_variable] = sym_variable,
  [sym__file_string] = sym__file_string,
  [sym__hosts_string] = sym__hosts_string,
  [sym__hostname_string] = sym__hostname_string,
  [sym__token_string] = sym__token_string,
  [sym_string] = sym_string,
  [sym__file_pattern_vars] = sym__file_pattern_vars,
  [sym_pattern] = sym_pattern,
  [sym__boolean] = sym__boolean,
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
  [aux_sym__log_verbose_repeat1] = aux_sym__log_verbose_repeat1,
  [aux_sym__log_verbose_repeat2] = aux_sym__log_verbose_repeat2,
  [aux_sym__log_verbose_value_repeat1] = aux_sym__log_verbose_value_repeat1,
  [aux_sym__log_verbose_value_repeat2] = aux_sym__log_verbose_value_repeat2,
  [aux_sym__log_verbose_quoted_repeat1] = aux_sym__log_verbose_quoted_repeat1,
  [aux_sym__file_string_repeat1] = aux_sym__file_string_repeat1,
  [aux_sym__file_string_repeat2] = aux_sym__file_string_repeat2,
  [aux_sym__hosts_string_repeat1] = aux_sym__hosts_string_repeat1,
  [aux_sym__hosts_string_repeat2] = aux_sym__hosts_string_repeat2,
  [aux_sym__hostname_string_repeat1] = aux_sym__hostname_string_repeat1,
  [aux_sym__hostname_string_repeat2] = aux_sym__hostname_string_repeat2,
  [aux_sym__token_string_repeat1] = aux_sym__token_string_repeat1,
  [aux_sym__token_string_repeat2] = aux_sym__token_string_repeat2,
  [aux_sym__file_pattern_vars_repeat1] = aux_sym__file_pattern_vars_repeat1,
  [aux_sym__file_pattern_vars_repeat2] = aux_sym__file_pattern_vars_repeat2,
  [alias_sym_number] = alias_sym_number,
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
  [aux_sym__log_verbose_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_quoted_token1] = {
    .visible = false,
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
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
  [anon_sym_EQ] = {
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
  [aux_sym__log_verbose_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_quoted_repeat1] = {
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
  [alias_sym_number] = {
    .visible = true,
    .named = true,
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
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 3},
  [4] = {.index = 9, .length = 5},
  [5] = {.index = 14, .length = 5},
  [6] = {.index = 19, .length = 2},
  [7] = {.index = 19, .length = 2},
  [8] = {.index = 21, .length = 1},
  [9] = {.index = 22, .length = 4},
  [11] = {.index = 26, .length = 3},
  [13] = {.index = 29, .length = 1},
  [14] = {.index = 30, .length = 5},
  [15] = {.index = 35, .length = 3},
  [16] = {.index = 38, .length = 7},
  [17] = {.index = 45, .length = 3},
  [18] = {.index = 48, .length = 1},
  [19] = {.index = 49, .length = 9},
  [20] = {.index = 58, .length = 1},
  [21] = {.index = 59, .length = 2},
  [22] = {.index = 61, .length = 4},
  [23] = {.index = 65, .length = 3},
  [24] = {.index = 68, .length = 6},
  [25] = {.index = 74, .length = 2},
  [27] = {.index = 48, .length = 1},
  [29] = {.index = 76, .length = 3},
  [30] = {.index = 76, .length = 3},
  [31] = {.index = 76, .length = 3},
  [32] = {.index = 76, .length = 3},
  [33] = {.index = 79, .length = 2},
  [34] = {.index = 81, .length = 7},
  [35] = {.index = 88, .length = 7},
  [36] = {.index = 95, .length = 3},
  [37] = {.index = 98, .length = 6},
  [38] = {.index = 104, .length = 2},
  [39] = {.index = 106, .length = 3},
  [40] = {.index = 109, .length = 3},
  [41] = {.index = 112, .length = 11},
  [42] = {.index = 123, .length = 4},
  [43] = {.index = 127, .length = 4},
  [44] = {.index = 131, .length = 2},
  [45] = {.index = 133, .length = 3},
  [46] = {.index = 133, .length = 3},
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
    {field_argument, 2},
    {field_keyword, 0},
  [21] =
    {field_keyword, 0},
  [22] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [26] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_name, 2, .inherited = true},
  [29] =
    {field_port, 0},
  [30] =
    {field_argument, 2},
    {field_file, 2, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
  [35] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [38] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [45] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [48] =
    {field_name, 1},
  [49] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [58] =
    {field_argument, 1},
  [59] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [61] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [65] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [68] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [74] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [76] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [79] =
    {field_bind_address, 0},
    {field_port, 2},
  [81] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_host, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
  [88] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [95] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [98] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [104] =
    {field_argument, 1},
    {field_argument, 2},
  [106] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [109] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [112] =
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
  [123] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [127] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [131] =
    {field_host, 0},
    {field_port, 2},
  [133] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [2] = alias_sym_number,
  },
  [10] = {
    [0] = sym_pattern,
  },
  [12] = {
    [0] = sym_string,
  },
  [13] = {
    [0] = alias_sym_number,
  },
  [18] = {
    [1] = sym_variable,
  },
  [26] = {
    [0] = sym_pattern,
    [1] = sym_pattern,
    [2] = sym_pattern,
  },
  [28] = {
    [0] = sym_string,
    [1] = sym_string,
    [2] = sym_string,
  },
  [30] = {
    [4] = alias_sym_number,
  },
  [31] = {
    [2] = alias_sym_number,
  },
  [32] = {
    [2] = alias_sym_number,
    [4] = alias_sym_number,
  },
  [33] = {
    [2] = alias_sym_number,
  },
  [44] = {
    [2] = alias_sym_number,
  },
  [46] = {
    [4] = alias_sym_number,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [46] = 32,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 30,
  [55] = 55,
  [56] = 56,
  [57] = 32,
  [58] = 31,
  [59] = 59,
  [60] = 60,
  [61] = 30,
  [62] = 31,
  [63] = 63,
  [64] = 64,
  [65] = 33,
  [66] = 66,
  [67] = 32,
  [68] = 68,
  [69] = 33,
  [70] = 70,
  [71] = 34,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 30,
  [80] = 34,
  [81] = 81,
  [82] = 31,
  [83] = 83,
  [84] = 32,
  [85] = 85,
  [86] = 31,
  [87] = 87,
  [88] = 88,
  [89] = 30,
  [90] = 63,
  [91] = 70,
  [92] = 92,
  [93] = 93,
  [94] = 70,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 32,
  [99] = 99,
  [100] = 31,
  [101] = 30,
  [102] = 102,
  [103] = 30,
  [104] = 104,
  [105] = 34,
  [106] = 33,
  [107] = 76,
  [108] = 108,
  [109] = 63,
  [110] = 30,
  [111] = 31,
  [112] = 112,
  [113] = 32,
  [114] = 96,
  [115] = 31,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 32,
  [123] = 76,
  [124] = 31,
  [125] = 30,
  [126] = 32,
  [127] = 127,
  [128] = 31,
  [129] = 33,
  [130] = 63,
  [131] = 32,
  [132] = 132,
  [133] = 34,
  [134] = 32,
  [135] = 135,
  [136] = 34,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 31,
  [142] = 142,
  [143] = 33,
  [144] = 144,
  [145] = 30,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 34,
  [153] = 33,
  [154] = 154,
  [155] = 139,
  [156] = 156,
  [157] = 34,
  [158] = 76,
  [159] = 30,
  [160] = 160,
  [161] = 33,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 30,
  [166] = 166,
  [167] = 31,
  [168] = 168,
  [169] = 169,
  [170] = 76,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 32,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 76,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 33,
  [191] = 191,
  [192] = 34,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 33,
  [201] = 33,
  [202] = 34,
  [203] = 203,
  [204] = 204,
  [205] = 34,
  [206] = 206,
  [207] = 207,
  [208] = 30,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 31,
  [213] = 213,
  [214] = 214,
  [215] = 32,
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
  [237] = 34,
  [238] = 238,
  [239] = 33,
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
  [259] = 34,
  [260] = 260,
  [261] = 33,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 32,
  [266] = 31,
  [267] = 30,
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
  [280] = 32,
  [281] = 31,
  [282] = 282,
  [283] = 30,
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
  [356] = 203,
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
  [487] = 34,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 33,
  [492] = 33,
  [493] = 34,
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
  [523] = 505,
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
  [535] = 504,
  [536] = 536,
  [537] = 504,
  [538] = 504,
  [539] = 504,
  [540] = 504,
  [541] = 505,
  [542] = 505,
  [543] = 505,
  [544] = 544,
  [545] = 505,
};

static inline bool aux_sym__file_token_token1_character_set_1(int32_t c) {
  return (c < 'k'
    ? (c < 'd'
      ? (c < 'L'
        ? c == 'C'
        : c <= 'L')
      : (c <= 'd' || c == 'i'))
    : (c <= 'l' || (c < 'r'
      ? (c < 'p'
        ? c == 'n'
        : c <= 'p')
      : (c <= 'r' || c == 'u'))));
}

static inline bool aux_sym__file_token_token1_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(1133);
      if (lookahead == '!') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1250);
      if (lookahead == '%') ADVANCE(1214);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '+') ADVANCE(1154);
      if (lookahead == ',') ADVANCE(1151);
      if (lookahead == '-') ADVANCE(1155);
      if (lookahead == '2') ADVANCE(1212);
      if (lookahead == ':') ADVANCE(1152);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == '^') ADVANCE(1159);
      if (lookahead == '}') ADVANCE(1256);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1212);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1212);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1212);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1212);
      if (lookahead != 0) ADVANCE(1212);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1279);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0) ADVANCE(1212);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1216);
      if (lookahead == '%') ADVANCE(1220);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0) ADVANCE(1212);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1216);
      if (lookahead == '%') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0) ADVANCE(1212);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1216);
      if (lookahead == '%') ADVANCE(1222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0) ADVANCE(1212);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1218);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0) ADVANCE(1212);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0) ADVANCE(1212);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == ',') ADVANCE(1151);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0) ADVANCE(1212);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0) ADVANCE(1212);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(1268);
      if (lookahead == 'a') ADVANCE(930);
      if (lookahead == 'c') ADVANCE(818);
      if (lookahead == 'n') ADVANCE(813);
      if (lookahead == 'y') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1271);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1272);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1274);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1270);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1269);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1250);
      if (lookahead == '%') ADVANCE(1220);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead == 'S') ADVANCE(1213);
      if (lookahead == 'n') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1250);
      if (lookahead == '%') ADVANCE(1220);
      if (lookahead == 'S') ADVANCE(1213);
      if (lookahead == 'n') ADVANCE(1215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1212);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1216);
      if (lookahead == '%') ADVANCE(1220);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1216);
      if (lookahead == '%') ADVANCE(1220);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1212);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1216);
      if (lookahead == '%') ADVANCE(1220);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1216);
      if (lookahead == '%') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1212);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1216);
      if (lookahead == '%') ADVANCE(1222);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1216);
      if (lookahead == '%') ADVANCE(1222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1212);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1227);
      if (lookahead == '%') ADVANCE(1230);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1227);
      if (lookahead == '%') ADVANCE(1230);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '$') ADVANCE(1227);
      if (lookahead == '%') ADVANCE(1232);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '%') ADVANCE(1218);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '%') ADVANCE(1218);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1212);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '%') ADVANCE(1229);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '%') ADVANCE(1223);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '%') ADVANCE(1223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1212);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '%') ADVANCE(1233);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == 'n') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == 'n') ADVANCE(1215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1212);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1212);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1210);
      if (lookahead == '$') ADVANCE(1217);
      if (lookahead == '%') ADVANCE(1221);
      if (lookahead == '*') ADVANCE(1170);
      if (lookahead == '0') ADVANCE(1224);
      if (lookahead == '=') ADVANCE(1277);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1224);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1210);
      if (lookahead == '$') ADVANCE(1217);
      if (lookahead == '%') ADVANCE(1221);
      if (lookahead == '*') ADVANCE(1170);
      if (lookahead == '0') ADVANCE(1224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1224);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1210);
      if (lookahead == '$') ADVANCE(1217);
      if (lookahead == '%') ADVANCE(1221);
      if (lookahead == '*') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1224);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1210);
      if (lookahead == '$') ADVANCE(1251);
      if (lookahead == '=') ADVANCE(1277);
      if (lookahead == 'n') ADVANCE(1258);
      if (lookahead == 'y') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1210);
      if (lookahead == '$') ADVANCE(1251);
      if (lookahead == 'n') ADVANCE(1258);
      if (lookahead == 'y') ADVANCE(1257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1261);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1210);
      if (lookahead == '=') ADVANCE(1277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1261);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(1228);
      if (lookahead == '%') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1234);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == ',') ADVANCE(1151);
      if (lookahead == ':') ADVANCE(1152);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == ':') ADVANCE(1152);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1225);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == ':') ADVANCE(1152);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1212);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == ':') ADVANCE(1152);
      if (lookahead == '?') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1226);
      END_STATE();
    case 46:
      if (lookahead == '+') ADVANCE(1154);
      if (lookahead == '-') ADVANCE(1155);
      if (lookahead == '3') ADVANCE(456);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead == '^') ADVANCE(1159);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == 'r') ADVANCE(1013);
      if (lookahead == 's') ADVANCE(686);
      if (lookahead == 'w') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(449);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(490);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(397);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(1103);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(954);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(396);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(874);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(792);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(955);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(538);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(489);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '1') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(961);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '@') ADVANCE(865);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(454);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(983);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(986);
      if (lookahead == '4') ADVANCE(69);
      if (lookahead == '6') ADVANCE(70);
      if (lookahead == '8') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(991);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(996);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(993);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(793);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(794);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(795);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(796);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(1004);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(1006);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(1007);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(1008);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(1009);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(807);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(1015);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(554);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(1018);
      END_STATE();
    case 87:
      if (lookahead == '.') ADVANCE(409);
      END_STATE();
    case 88:
      if (lookahead == '.') ADVANCE(410);
      END_STATE();
    case 89:
      if (lookahead == '.') ADVANCE(412);
      END_STATE();
    case 90:
      if (lookahead == '.') ADVANCE(838);
      END_STATE();
    case 91:
      if (lookahead == '.') ADVANCE(413);
      END_STATE();
    case 92:
      if (lookahead == '0') ADVANCE(1268);
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'c') ADVANCE(931);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'n') ADVANCE(847);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == 't') ADVANCE(589);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1269);
      END_STATE();
    case 93:
      if (lookahead == '0') ADVANCE(179);
      END_STATE();
    case 94:
      if (lookahead == '0') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == '0') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == '1') ADVANCE(1128);
      if (lookahead == '2') ADVANCE(1128);
      if (lookahead == '3') ADVANCE(1128);
      if (lookahead == '4') ADVANCE(1128);
      END_STATE();
    case 97:
      if (lookahead == '1') ADVANCE(1243);
      END_STATE();
    case 98:
      if (lookahead == '1') ADVANCE(199);
      END_STATE();
    case 99:
      if (lookahead == '1') ADVANCE(1183);
      END_STATE();
    case 100:
      if (lookahead == '1') ADVANCE(1239);
      END_STATE();
    case 101:
      if (lookahead == '1') ADVANCE(1239);
      if (lookahead == '2') ADVANCE(162);
      END_STATE();
    case 102:
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == '2') ADVANCE(165);
      END_STATE();
    case 103:
      if (lookahead == '1') ADVANCE(1242);
      END_STATE();
    case 104:
      if (lookahead == '1') ADVANCE(151);
      END_STATE();
    case 105:
      if (lookahead == '1') ADVANCE(1117);
      END_STATE();
    case 106:
      if (lookahead == '1') ADVANCE(195);
      END_STATE();
    case 107:
      if (lookahead == '1') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == '1') ADVANCE(196);
      END_STATE();
    case 109:
      if (lookahead == '1') ADVANCE(99);
      END_STATE();
    case 110:
      if (lookahead == '1') ADVANCE(197);
      END_STATE();
    case 111:
      if (lookahead == '1') ADVANCE(148);
      END_STATE();
    case 112:
      if (lookahead == '1') ADVANCE(198);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(118);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(120);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(200);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(205);
      END_STATE();
    case 117:
      if (lookahead == '2') ADVANCE(1243);
      END_STATE();
    case 118:
      if (lookahead == '2') ADVANCE(1239);
      END_STATE();
    case 119:
      if (lookahead == '2') ADVANCE(94);
      END_STATE();
    case 120:
      if (lookahead == '2') ADVANCE(1242);
      END_STATE();
    case 121:
      if (lookahead == '2') ADVANCE(156);
      END_STATE();
    case 122:
      if (lookahead == '2') ADVANCE(194);
      if (lookahead == '9') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == '2') ADVANCE(159);
      END_STATE();
    case 124:
      if (lookahead == '2') ADVANCE(158);
      if (lookahead == '3') ADVANCE(192);
      if (lookahead == '5') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == '2') ADVANCE(158);
      if (lookahead == '5') ADVANCE(107);
      END_STATE();
    case 126:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 127:
      if (lookahead == '2') ADVANCE(160);
      END_STATE();
    case 128:
      if (lookahead == '2') ADVANCE(57);
      END_STATE();
    case 129:
      if (lookahead == '2') ADVANCE(162);
      if (lookahead == '3') ADVANCE(191);
      if (lookahead == '5') ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == '2') ADVANCE(100);
      END_STATE();
    case 131:
      if (lookahead == '2') ADVANCE(164);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(97);
      END_STATE();
    case 133:
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == '3') ADVANCE(193);
      if (lookahead == '5') ADVANCE(137);
      END_STATE();
    case 134:
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == '5') ADVANCE(114);
      END_STATE();
    case 135:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(168);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(103);
      END_STATE();
    case 138:
      if (lookahead == '2') ADVANCE(161);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(174);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(175);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(177);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(75);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(76);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(178);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == '3') ADVANCE(93);
      END_STATE();
    case 152:
      if (lookahead == '4') ADVANCE(1243);
      END_STATE();
    case 153:
      if (lookahead == '4') ADVANCE(1239);
      END_STATE();
    case 154:
      if (lookahead == '4') ADVANCE(1242);
      END_STATE();
    case 155:
      if (lookahead == '5') ADVANCE(1179);
      END_STATE();
    case 156:
      if (lookahead == '5') ADVANCE(180);
      END_STATE();
    case 157:
      if (lookahead == '5') ADVANCE(98);
      END_STATE();
    case 158:
      if (lookahead == '5') ADVANCE(181);
      END_STATE();
    case 159:
      if (lookahead == '5') ADVANCE(157);
      END_STATE();
    case 160:
      if (lookahead == '5') ADVANCE(183);
      END_STATE();
    case 161:
      if (lookahead == '5') ADVANCE(163);
      END_STATE();
    case 162:
      if (lookahead == '5') ADVANCE(184);
      END_STATE();
    case 163:
      if (lookahead == '5') ADVANCE(106);
      END_STATE();
    case 164:
      if (lookahead == '5') ADVANCE(182);
      END_STATE();
    case 165:
      if (lookahead == '5') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == '5') ADVANCE(108);
      END_STATE();
    case 167:
      if (lookahead == '5') ADVANCE(185);
      END_STATE();
    case 168:
      if (lookahead == '5') ADVANCE(186);
      END_STATE();
    case 169:
      if (lookahead == '5') ADVANCE(111);
      END_STATE();
    case 170:
      if (lookahead == '5') ADVANCE(113);
      END_STATE();
    case 171:
      if (lookahead == '5') ADVANCE(110);
      END_STATE();
    case 172:
      if (lookahead == '5') ADVANCE(112);
      END_STATE();
    case 173:
      if (lookahead == '5') ADVANCE(166);
      END_STATE();
    case 174:
      if (lookahead == '5') ADVANCE(171);
      END_STATE();
    case 175:
      if (lookahead == '5') ADVANCE(172);
      END_STATE();
    case 176:
      if (lookahead == '5') ADVANCE(115);
      END_STATE();
    case 177:
      if (lookahead == '5') ADVANCE(176);
      END_STATE();
    case 178:
      if (lookahead == '5') ADVANCE(189);
      END_STATE();
    case 179:
      if (lookahead == '5') ADVANCE(204);
      END_STATE();
    case 180:
      if (lookahead == '6') ADVANCE(1180);
      END_STATE();
    case 181:
      if (lookahead == '6') ADVANCE(1243);
      END_STATE();
    case 182:
      if (lookahead == '6') ADVANCE(202);
      END_STATE();
    case 183:
      if (lookahead == '6') ADVANCE(1240);
      END_STATE();
    case 184:
      if (lookahead == '6') ADVANCE(1239);
      END_STATE();
    case 185:
      if (lookahead == '6') ADVANCE(1242);
      END_STATE();
    case 186:
      if (lookahead == '6') ADVANCE(65);
      END_STATE();
    case 187:
      if (lookahead == '6') ADVANCE(105);
      END_STATE();
    case 188:
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 189:
      if (lookahead == '6') ADVANCE(205);
      END_STATE();
    case 190:
      if (lookahead == '7') ADVANCE(187);
      END_STATE();
    case 191:
      if (lookahead == '8') ADVANCE(153);
      END_STATE();
    case 192:
      if (lookahead == '8') ADVANCE(152);
      END_STATE();
    case 193:
      if (lookahead == '8') ADVANCE(154);
      END_STATE();
    case 194:
      if (lookahead == '8') ADVANCE(50);
      END_STATE();
    case 195:
      if (lookahead == '9') ADVANCE(1243);
      END_STATE();
    case 196:
      if (lookahead == '9') ADVANCE(202);
      END_STATE();
    case 197:
      if (lookahead == '9') ADVANCE(1242);
      END_STATE();
    case 198:
      if (lookahead == '9') ADVANCE(65);
      END_STATE();
    case 199:
      if (lookahead == '9') ADVANCE(64);
      END_STATE();
    case 200:
      if (lookahead == '9') ADVANCE(67);
      END_STATE();
    case 201:
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead == '^') ADVANCE(1176);
      if (lookahead == 'n') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1174);
      END_STATE();
    case 202:
      if (lookahead == '@') ADVANCE(849);
      END_STATE();
    case 203:
      if (lookahead == '@') ADVANCE(862);
      END_STATE();
    case 204:
      if (lookahead == '@') ADVANCE(864);
      END_STATE();
    case 205:
      if (lookahead == '@') ADVANCE(865);
      END_STATE();
    case 206:
      if (lookahead == 'A') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead == 'h') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 207:
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(890);
      END_STATE();
    case 208:
      if (lookahead == 'A') ADVANCE(269);
      END_STATE();
    case 209:
      if (lookahead == 'A') ADVANCE(284);
      END_STATE();
    case 210:
      if (lookahead == 'A') ADVANCE(419);
      if (lookahead == 'K') ADVANCE(494);
      END_STATE();
    case 211:
      if (lookahead == 'A') ADVANCE(272);
      END_STATE();
    case 212:
      if (lookahead == 'A') ADVANCE(564);
      END_STATE();
    case 213:
      if (lookahead == 'A') ADVANCE(306);
      END_STATE();
    case 214:
      if (lookahead == 'A') ADVANCE(696);
      END_STATE();
    case 215:
      if (lookahead == 'A') ADVANCE(693);
      END_STATE();
    case 216:
      if (lookahead == 'A') ADVANCE(1061);
      END_STATE();
    case 217:
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(791);
      END_STATE();
    case 218:
      if (lookahead == 'A') ADVANCE(701);
      END_STATE();
    case 219:
      if (lookahead == 'A') ADVANCE(1092);
      if (lookahead == 'D') ADVANCE(530);
      END_STATE();
    case 220:
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'X') ADVANCE(109);
      END_STATE();
    case 221:
      if (lookahead == 'A') ADVANCE(719);
      END_STATE();
    case 222:
      if (lookahead == 'A') ADVANCE(579);
      if (lookahead == 'F') ADVANCE(657);
      END_STATE();
    case 223:
      if (lookahead == 'A') ADVANCE(720);
      END_STATE();
    case 224:
      if (lookahead == 'A') ADVANCE(581);
      END_STATE();
    case 225:
      if (lookahead == 'A') ADVANCE(1099);
      END_STATE();
    case 226:
      if (lookahead == 'A') ADVANCE(1100);
      END_STATE();
    case 227:
      if (lookahead == 'A') ADVANCE(1101);
      END_STATE();
    case 228:
      if (lookahead == 'B') ADVANCE(305);
      END_STATE();
    case 229:
      if (lookahead == 'B') ADVANCE(279);
      END_STATE();
    case 230:
      if (lookahead == 'C') ADVANCE(276);
      END_STATE();
    case 231:
      if (lookahead == 'C') ADVANCE(265);
      END_STATE();
    case 232:
      if (lookahead == 'C') ADVANCE(606);
      END_STATE();
    case 233:
      if (lookahead == 'C') ADVANCE(817);
      if (lookahead == 'F') ADVANCE(831);
      END_STATE();
    case 234:
      if (lookahead == 'C') ADVANCE(919);
      END_STATE();
    case 235:
      if (lookahead == 'C') ADVANCE(861);
      END_STATE();
    case 236:
      if (lookahead == 'C') ADVANCE(863);
      END_STATE();
    case 237:
      if (lookahead == 'D') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1127);
      END_STATE();
    case 238:
      if (lookahead == 'D') ADVANCE(851);
      END_STATE();
    case 239:
      if (lookahead == 'E') ADVANCE(228);
      END_STATE();
    case 240:
      if (lookahead == 'E') ADVANCE(1236);
      END_STATE();
    case 241:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 242:
      if (lookahead == 'E') ADVANCE(299);
      END_STATE();
    case 243:
      if (lookahead == 'E') ADVANCE(992);
      if (lookahead == 'S') ADVANCE(294);
      END_STATE();
    case 244:
      if (lookahead == 'E') ADVANCE(946);
      END_STATE();
    case 245:
      if (lookahead == 'F') ADVANCE(277);
      END_STATE();
    case 246:
      if (lookahead == 'F') ADVANCE(327);
      END_STATE();
    case 247:
      if (lookahead == 'F') ADVANCE(363);
      if (lookahead == 'H') ADVANCE(855);
      if (lookahead == 'M') ADVANCE(322);
      if (lookahead == 'P') ADVANCE(519);
      END_STATE();
    case 248:
      if (lookahead == 'F') ADVANCE(354);
      END_STATE();
    case 249:
      if (lookahead == 'F') ADVANCE(660);
      END_STATE();
    case 250:
      if (lookahead == 'F') ADVANCE(857);
      END_STATE();
    case 251:
      if (lookahead == 'F') ADVANCE(663);
      END_STATE();
    case 252:
      if (lookahead == 'F') ADVANCE(859);
      END_STATE();
    case 253:
      if (lookahead == 'G') ADVANCE(1237);
      END_STATE();
    case 254:
      if (lookahead == 'H') ADVANCE(310);
      END_STATE();
    case 255:
      if (lookahead == 'H') ADVANCE(267);
      END_STATE();
    case 256:
      if (lookahead == 'H') ADVANCE(309);
      END_STATE();
    case 257:
      if (lookahead == 'H') ADVANCE(357);
      END_STATE();
    case 258:
      if (lookahead == 'H') ADVANCE(840);
      END_STATE();
    case 259:
      if (lookahead == 'H') ADVANCE(848);
      END_STATE();
    case 260:
      if (lookahead == 'H') ADVANCE(854);
      END_STATE();
    case 261:
      if (lookahead == 'I') ADVANCE(219);
      END_STATE();
    case 262:
      if (lookahead == 'I') ADVANCE(283);
      END_STATE();
    case 263:
      if (lookahead == 'I') ADVANCE(242);
      END_STATE();
    case 264:
      if (lookahead == 'I') ADVANCE(770);
      END_STATE();
    case 265:
      if (lookahead == 'K') ADVANCE(1197);
      END_STATE();
    case 266:
      if (lookahead == 'K') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 267:
      if (lookahead == 'K') ADVANCE(526);
      END_STATE();
    case 268:
      if (lookahead == 'K') ADVANCE(802);
      END_STATE();
    case 269:
      if (lookahead == 'L') ADVANCE(1236);
      END_STATE();
    case 270:
      if (lookahead == 'L') ADVANCE(524);
      if (lookahead == 'V') ADVANCE(507);
      END_STATE();
    case 271:
      if (lookahead == 'L') ADVANCE(852);
      END_STATE();
    case 272:
      if (lookahead == 'M') ADVANCE(244);
      END_STATE();
    case 273:
      if (lookahead == 'M') ADVANCE(845);
      END_STATE();
    case 274:
      if (lookahead == 'M') ADVANCE(361);
      if (lookahead == 'P') ADVANCE(341);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(245);
      if (lookahead == 'P') ADVANCE(285);
      if (lookahead == 'd') ADVANCE(498);
      if (lookahead == 'g') ADVANCE(765);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(211);
      END_STATE();
    case 277:
      if (lookahead == 'O') ADVANCE(1236);
      END_STATE();
    case 278:
      if (lookahead == 'O') ADVANCE(288);
      END_STATE();
    case 279:
      if (lookahead == 'O') ADVANCE(296);
      END_STATE();
    case 280:
      if (lookahead == 'O') ADVANCE(231);
      END_STATE();
    case 281:
      if (lookahead == 'O') ADVANCE(756);
      END_STATE();
    case 282:
      if (lookahead == 'O') ADVANCE(773);
      END_STATE();
    case 283:
      if (lookahead == 'P') ADVANCE(1157);
      END_STATE();
    case 284:
      if (lookahead == 'P') ADVANCE(261);
      END_STATE();
    case 285:
      if (lookahead == 'Q') ADVANCE(816);
      END_STATE();
    case 286:
      if (lookahead == 'R') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead == 'x') ADVANCE(630);
      END_STATE();
    case 287:
      if (lookahead == 'R') ADVANCE(278);
      END_STATE();
    case 288:
      if (lookahead == 'R') ADVANCE(1236);
      END_STATE();
    case 289:
      if (lookahead == 'R') ADVANCE(229);
      END_STATE();
    case 290:
      if (lookahead == 'R') ADVANCE(516);
      END_STATE();
    case 291:
      if (lookahead == 'S') ADVANCE(1200);
      END_STATE();
    case 292:
      if (lookahead == 'S') ADVANCE(293);
      if (lookahead == 'l') ADVANCE(841);
      END_STATE();
    case 293:
      if (lookahead == 'S') ADVANCE(209);
      END_STATE();
    case 294:
      if (lookahead == 'S') ADVANCE(255);
      END_STATE();
    case 295:
      if (lookahead == 'S') ADVANCE(629);
      END_STATE();
    case 296:
      if (lookahead == 'S') ADVANCE(240);
      END_STATE();
    case 297:
      if (lookahead == 'S') ADVANCE(280);
      END_STATE();
    case 298:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 299:
      if (lookahead == 'T') ADVANCE(1236);
      END_STATE();
    case 300:
      if (lookahead == 'T') ADVANCE(256);
      END_STATE();
    case 301:
      if (lookahead == 'T') ADVANCE(1122);
      END_STATE();
    case 302:
      if (lookahead == 'T') ADVANCE(646);
      if (lookahead == 'i') ADVANCE(827);
      END_STATE();
    case 303:
      if (lookahead == 'T') ADVANCE(820);
      END_STATE();
    case 304:
      if (lookahead == 'U') ADVANCE(263);
      END_STATE();
    case 305:
      if (lookahead == 'U') ADVANCE(253);
      END_STATE();
    case 306:
      if (lookahead == 'U') ADVANCE(300);
      END_STATE();
    case 307:
      if (lookahead == 'U') ADVANCE(758);
      END_STATE();
    case 308:
      if (lookahead == '^') ADVANCE(1176);
      if (lookahead == 'n') ADVANCE(1175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1174);
      END_STATE();
    case 309:
      if (lookahead == '_') ADVANCE(297);
      END_STATE();
    case 310:
      if (lookahead == '_') ADVANCE(213);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(1030);
      if (lookahead == 'i') ADVANCE(760);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(731);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(1243);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(1242);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(873);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(1114);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(1090);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(1118);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(901);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(907);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(972);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(1035);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(1049);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(1039);
      if (lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(893);
      END_STATE();
    case 345:
      if (lookahead == 'a') ADVANCE(910);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(911);
      END_STATE();
    case 347:
      if (lookahead == 'a') ADVANCE(936);
      END_STATE();
    case 348:
      if (lookahead == 'a') ADVANCE(912);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(1071);
      END_STATE();
    case 350:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 351:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 352:
      if (lookahead == 'a') ADVANCE(875);
      END_STATE();
    case 353:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 355:
      if (lookahead == 'a') ADVANCE(738);
      END_STATE();
    case 356:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 357:
      if (lookahead == 'a') ADVANCE(962);
      END_STATE();
    case 358:
      if (lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 359:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 360:
      if (lookahead == 'a') ADVANCE(1052);
      END_STATE();
    case 361:
      if (lookahead == 'a') ADVANCE(1000);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 366:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(1074);
      END_STATE();
    case 369:
      if (lookahead == 'a') ADVANCE(1075);
      END_STATE();
    case 370:
      if (lookahead == 'a') ADVANCE(1076);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(1077);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 376:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 378:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 379:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 380:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 382:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 383:
      if (lookahead == 'a') ADVANCE(1102);
      END_STATE();
    case 384:
      if (lookahead == 'b') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(1115);
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 385:
      if (lookahead == 'b') ADVANCE(324);
      END_STATE();
    case 386:
      if (lookahead == 'b') ADVANCE(645);
      END_STATE();
    case 387:
      if (lookahead == 'b') ADVANCE(330);
      END_STATE();
    case 388:
      if (lookahead == 'b') ADVANCE(395);
      END_STATE();
    case 389:
      if (lookahead == 'b') ADVANCE(395);
      if (lookahead == 't') ADVANCE(895);
      END_STATE();
    case 390:
      if (lookahead == 'b') ADVANCE(331);
      END_STATE();
    case 391:
      if (lookahead == 'b') ADVANCE(846);
      END_STATE();
    case 392:
      if (lookahead == 'b') ADVANCE(705);
      END_STATE();
    case 393:
      if (lookahead == 'b') ADVANCE(990);
      END_STATE();
    case 394:
      if (lookahead == 'b') ADVANCE(383);
      END_STATE();
    case 395:
      if (lookahead == 'c') ADVANCE(1238);
      END_STATE();
    case 396:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 397:
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 'g') ADVANCE(407);
      END_STATE();
    case 398:
      if (lookahead == 'c') ADVANCE(680);
      END_STATE();
    case 399:
      if (lookahead == 'c') ADVANCE(582);
      END_STATE();
    case 400:
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead == 'f') ADVANCE(1235);
      END_STATE();
    case 401:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 402:
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == 'g') ADVANCE(270);
      END_STATE();
    case 403:
      if (lookahead == 'c') ADVANCE(682);
      END_STATE();
    case 404:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 405:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 406:
      if (lookahead == 'c') ADVANCE(1022);
      END_STATE();
    case 407:
      if (lookahead == 'c') ADVANCE(746);
      END_STATE();
    case 408:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 409:
      if (lookahead == 'c') ADVANCE(824);
      END_STATE();
    case 410:
      if (lookahead == 'c') ADVANCE(825);
      END_STATE();
    case 411:
      if (lookahead == 'c') ADVANCE(1044);
      END_STATE();
    case 412:
      if (lookahead == 'c') ADVANCE(826);
      END_STATE();
    case 413:
      if (lookahead == 'c') ADVANCE(828);
      END_STATE();
    case 414:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 415:
      if (lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 416:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 417:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 418:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 419:
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(1083);
      END_STATE();
    case 420:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 421:
      if (lookahead == 'c') ADVANCE(599);
      END_STATE();
    case 422:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 423:
      if (lookahead == 'c') ADVANCE(602);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 425:
      if (lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 426:
      if (lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 427:
      if (lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 428:
      if (lookahead == 'c') ADVANCE(461);
      END_STATE();
    case 429:
      if (lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 430:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 431:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 432:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 434:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 435:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 436:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 437:
      if (lookahead == 'd') ADVANCE(1205);
      END_STATE();
    case 438:
      if (lookahead == 'd') ADVANCE(1206);
      END_STATE();
    case 439:
      if (lookahead == 'd') ADVANCE(1185);
      END_STATE();
    case 440:
      if (lookahead == 'd') ADVANCE(1204);
      END_STATE();
    case 441:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 442:
      if (lookahead == 'd') ADVANCE(432);
      END_STATE();
    case 443:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 444:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 445:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 446:
      if (lookahead == 'd') ADVANCE(1010);
      END_STATE();
    case 447:
      if (lookahead == 'd') ADVANCE(473);
      END_STATE();
    case 448:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 449:
      if (lookahead == 'd') ADVANCE(964);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == 'r') ADVANCE(968);
      END_STATE();
    case 450:
      if (lookahead == 'd') ADVANCE(640);
      END_STATE();
    case 451:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 452:
      if (lookahead == 'd') ADVANCE(708);
      END_STATE();
    case 453:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 454:
      if (lookahead == 'd') ADVANCE(979);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 455:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 456:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 457:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 458:
      if (lookahead == 'd') ADVANCE(537);
      END_STATE();
    case 459:
      if (lookahead == 'd') ADVANCE(928);
      END_STATE();
    case 460:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 461:
      if (lookahead == 'd') ADVANCE(1011);
      END_STATE();
    case 462:
      if (lookahead == 'd') ADVANCE(1012);
      END_STATE();
    case 463:
      if (lookahead == 'd') ADVANCE(1016);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == 'o') ADVANCE(1107);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(1150);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(1194);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(1142);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(1208);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(1198);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(1156);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(1177);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(1186);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(1171);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 's') ADVANCE(980);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(1116);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(1121);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(1021);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(921);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(957);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(971);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 549:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 551:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 's') ADVANCE(1005);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 556:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 557:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 's') ADVANCE(679);
      if (lookahead == 'u') ADVANCE(1038);
      END_STATE();
    case 558:
      if (lookahead == 'f') ADVANCE(1235);
      END_STATE();
    case 559:
      if (lookahead == 'f') ADVANCE(633);
      END_STATE();
    case 560:
      if (lookahead == 'f') ADVANCE(636);
      END_STATE();
    case 561:
      if (lookahead == 'f') ADVANCE(329);
      END_STATE();
    case 562:
      if (lookahead == 'f') ADVANCE(560);
      END_STATE();
    case 563:
      if (lookahead == 'f') ADVANCE(649);
      END_STATE();
    case 564:
      if (lookahead == 'f') ADVANCE(1068);
      END_STATE();
    case 565:
      if (lookahead == 'g') ADVANCE(1239);
      END_STATE();
    case 566:
      if (lookahead == 'g') ADVANCE(590);
      END_STATE();
    case 567:
      if (lookahead == 'g') ADVANCE(771);
      END_STATE();
    case 568:
      if (lookahead == 'g') ADVANCE(750);
      END_STATE();
    case 569:
      if (lookahead == 'g') ADVANCE(487);
      END_STATE();
    case 570:
      if (lookahead == 'g') ADVANCE(943);
      END_STATE();
    case 571:
      if (lookahead == 'g') ADVANCE(542);
      END_STATE();
    case 572:
      if (lookahead == 'g') ADVANCE(830);
      END_STATE();
    case 573:
      if (lookahead == 'g') ADVANCE(504);
      END_STATE();
    case 574:
      if (lookahead == 'g') ADVANCE(915);
      END_STATE();
    case 575:
      if (lookahead == 'g') ADVANCE(360);
      END_STATE();
    case 576:
      if (lookahead == 'g') ADVANCE(533);
      END_STATE();
    case 577:
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 578:
      if (lookahead == 'g') ADVANCE(858);
      END_STATE();
    case 579:
      if (lookahead == 'g') ADVANCE(535);
      END_STATE();
    case 580:
      if (lookahead == 'g') ADVANCE(860);
      END_STATE();
    case 581:
      if (lookahead == 'g') ADVANCE(536);
      END_STATE();
    case 582:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 583:
      if (lookahead == 'h') ADVANCE(1168);
      END_STATE();
    case 584:
      if (lookahead == 'h') ADVANCE(1178);
      END_STATE();
    case 585:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 586:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 587:
      if (lookahead == 'h') ADVANCE(312);
      if (lookahead == 'k') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(1036);
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 588:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 589:
      if (lookahead == 'h') ADVANCE(905);
      END_STATE();
    case 590:
      if (lookahead == 'h') ADVANCE(879);
      END_STATE();
    case 591:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 592:
      if (lookahead == 'h') ADVANCE(733);
      END_STATE();
    case 593:
      if (lookahead == 'h') ADVANCE(503);
      END_STATE();
    case 594:
      if (lookahead == 'h') ADVANCE(786);
      END_STATE();
    case 595:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 596:
      if (lookahead == 'h') ADVANCE(529);
      END_STATE();
    case 597:
      if (lookahead == 'h') ADVANCE(359);
      END_STATE();
    case 598:
      if (lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 599:
      if (lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 600:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 601:
      if (lookahead == 'h') ADVANCE(367);
      END_STATE();
    case 602:
      if (lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 603:
      if (lookahead == 'h') ADVANCE(365);
      END_STATE();
    case 604:
      if (lookahead == 'h') ADVANCE(734);
      END_STATE();
    case 605:
      if (lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 606:
      if (lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 607:
      if (lookahead == 'h') ADVANCE(736);
      END_STATE();
    case 608:
      if (lookahead == 'h') ADVANCE(737);
      END_STATE();
    case 609:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 610:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 611:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 612:
      if (lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 613:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 614:
      if (lookahead == 'h') ADVANCE(534);
      END_STATE();
    case 615:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 616:
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 617:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 618:
      if (lookahead == 'h') ADVANCE(372);
      END_STATE();
    case 619:
      if (lookahead == 'h') ADVANCE(374);
      END_STATE();
    case 620:
      if (lookahead == 'h') ADVANCE(376);
      END_STATE();
    case 621:
      if (lookahead == 'h') ADVANCE(378);
      END_STATE();
    case 622:
      if (lookahead == 'h') ADVANCE(547);
      END_STATE();
    case 623:
      if (lookahead == 'h') ADVANCE(548);
      END_STATE();
    case 624:
      if (lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 625:
      if (lookahead == 'h') ADVANCE(550);
      END_STATE();
    case 626:
      if (lookahead == 'h') ADVANCE(381);
      END_STATE();
    case 627:
      if (lookahead == 'h') ADVANCE(808);
      END_STATE();
    case 628:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 629:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 630:
      if (lookahead == 'i') ADVANCE(1031);
      END_STATE();
    case 631:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 632:
      if (lookahead == 'i') ADVANCE(1023);
      END_STATE();
    case 633:
      if (lookahead == 'i') ADVANCE(896);
      END_STATE();
    case 634:
      if (lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 635:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 636:
      if (lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 637:
      if (lookahead == 'i') ADVANCE(778);
      END_STATE();
    case 638:
      if (lookahead == 'i') ADVANCE(1041);
      END_STATE();
    case 639:
      if (lookahead == 'i') ADVANCE(1032);
      END_STATE();
    case 640:
      if (lookahead == 'i') ADVANCE(764);
      END_STATE();
    case 641:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 642:
      if (lookahead == 'i') ADVANCE(784);
      END_STATE();
    case 643:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 644:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 645:
      if (lookahead == 'i') ADVANCE(716);
      END_STATE();
    case 646:
      if (lookahead == 'i') ADVANCE(735);
      END_STATE();
    case 647:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 648:
      if (lookahead == 'i') ADVANCE(1060);
      END_STATE();
    case 649:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 650:
      if (lookahead == 'i') ADVANCE(1106);
      END_STATE();
    case 651:
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 652:
      if (lookahead == 'i') ADVANCE(829);
      END_STATE();
    case 653:
      if (lookahead == 'i') ADVANCE(776);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(1064);
      END_STATE();
    case 655:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 656:
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(711);
      END_STATE();
    case 658:
      if (lookahead == 'i') ADVANCE(1066);
      END_STATE();
    case 659:
      if (lookahead == 'i') ADVANCE(974);
      END_STATE();
    case 660:
      if (lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 661:
      if (lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(975);
      END_STATE();
    case 663:
      if (lookahead == 'i') ADVANCE(713);
      END_STATE();
    case 664:
      if (lookahead == 'i') ADVANCE(835);
      END_STATE();
    case 665:
      if (lookahead == 'i') ADVANCE(836);
      END_STATE();
    case 666:
      if (lookahead == 'i') ADVANCE(837);
      END_STATE();
    case 667:
      if (lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(839);
      END_STATE();
    case 669:
      if (lookahead == 'i') ADVANCE(977);
      END_STATE();
    case 670:
      if (lookahead == 'i') ADVANCE(987);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(1069);
      END_STATE();
    case 672:
      if (lookahead == 'i') ADVANCE(742);
      if (lookahead == 'r') ADVANCE(1098);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(995);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 675:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(1014);
      END_STATE();
    case 679:
      if (lookahead == 'k') ADVANCE(1137);
      END_STATE();
    case 680:
      if (lookahead == 'k') ADVANCE(258);
      END_STATE();
    case 681:
      if (lookahead == 'k') ADVANCE(1166);
      END_STATE();
    case 682:
      if (lookahead == 'k') ADVANCE(271);
      END_STATE();
    case 683:
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(334);
      END_STATE();
    case 684:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 685:
      if (lookahead == 'k') ADVANCE(787);
      END_STATE();
    case 686:
      if (lookahead == 'k') ADVANCE(82);
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 687:
      if (lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 688:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 689:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 690:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 691:
      if (lookahead == 'l') ADVANCE(1207);
      END_STATE();
    case 692:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 693:
      if (lookahead == 'l') ADVANCE(577);
      END_STATE();
    case 694:
      if (lookahead == 'l') ADVANCE(1146);
      END_STATE();
    case 695:
      if (lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 696:
      if (lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 697:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 698:
      if (lookahead == 'l') ADVANCE(1119);
      END_STATE();
    case 699:
      if (lookahead == 'l') ADVANCE(1120);
      END_STATE();
    case 700:
      if (lookahead == 'l') ADVANCE(1124);
      END_STATE();
    case 701:
      if (lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 702:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 703:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 704:
      if (lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 705:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 706:
      if (lookahead == 'l') ADVANCE(714);
      END_STATE();
    case 707:
      if (lookahead == 'l') ADVANCE(631);
      END_STATE();
    case 708:
      if (lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 709:
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 710:
      if (lookahead == 'l') ADVANCE(945);
      END_STATE();
    case 711:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 712:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 713:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 714:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 715:
      if (lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 716:
      if (lookahead == 'l') ADVANCE(639);
      END_STATE();
    case 717:
      if (lookahead == 'l') ADVANCE(1097);
      END_STATE();
    case 718:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 719:
      if (lookahead == 'l') ADVANCE(578);
      END_STATE();
    case 720:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 721:
      if (lookahead == 'm') ADVANCE(1138);
      END_STATE();
    case 722:
      if (lookahead == 'm') ADVANCE(1243);
      END_STATE();
    case 723:
      if (lookahead == 'm') ADVANCE(1239);
      END_STATE();
    case 724:
      if (lookahead == 'm') ADVANCE(1238);
      END_STATE();
    case 725:
      if (lookahead == 'm') ADVANCE(1241);
      END_STATE();
    case 726:
      if (lookahead == 'm') ADVANCE(871);
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 727:
      if (lookahead == 'm') ADVANCE(729);
      END_STATE();
    case 728:
      if (lookahead == 'm') ADVANCE(634);
      END_STATE();
    case 729:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 730:
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 731:
      if (lookahead == 'm') ADVANCE(472);
      END_STATE();
    case 732:
      if (lookahead == 'm') ADVANCE(340);
      END_STATE();
    case 733:
      if (lookahead == 'm') ADVANCE(937);
      END_STATE();
    case 734:
      if (lookahead == 'm') ADVANCE(939);
      END_STATE();
    case 735:
      if (lookahead == 'm') ADVANCE(509);
      END_STATE();
    case 736:
      if (lookahead == 'm') ADVANCE(944);
      END_STATE();
    case 737:
      if (lookahead == 'm') ADVANCE(947);
      END_STATE();
    case 738:
      if (lookahead == 'm') ADVANCE(479);
      END_STATE();
    case 739:
      if (lookahead == 'm') ADVANCE(880);
      END_STATE();
    case 740:
      if (lookahead == 'm') ADVANCE(671);
      END_STATE();
    case 741:
      if (lookahead == 'm') ADVANCE(356);
      END_STATE();
    case 742:
      if (lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 743:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 744:
      if (lookahead == 'm') ADVANCE(741);
      END_STATE();
    case 745:
      if (lookahead == 'm') ADVANCE(743);
      END_STATE();
    case 746:
      if (lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 747:
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 748:
      if (lookahead == 'n') ADVANCE(1161);
      END_STATE();
    case 749:
      if (lookahead == 'n') ADVANCE(1199);
      END_STATE();
    case 750:
      if (lookahead == 'n') ADVANCE(1172);
      END_STATE();
    case 751:
      if (lookahead == 'n') ADVANCE(1187);
      END_STATE();
    case 752:
      if (lookahead == 'n') ADVANCE(1181);
      END_STATE();
    case 753:
      if (lookahead == 'n') ADVANCE(1191);
      END_STATE();
    case 754:
      if (lookahead == 'n') ADVANCE(1201);
      END_STATE();
    case 755:
      if (lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 756:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 757:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 758:
      if (lookahead == 'n') ADVANCE(685);
      END_STATE();
    case 759:
      if (lookahead == 'n') ADVANCE(499);
      END_STATE();
    case 760:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 761:
      if (lookahead == 'n') ADVANCE(821);
      END_STATE();
    case 762:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 763:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 764:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 765:
      if (lookahead == 'n') ADVANCE(822);
      END_STATE();
    case 766:
      if (lookahead == 'n') ADVANCE(1057);
      END_STATE();
    case 767:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 768:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 769:
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead == 't') ADVANCE(908);
      END_STATE();
    case 770:
      if (lookahead == 'n') ADVANCE(1065);
      END_STATE();
    case 771:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 772:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 773:
      if (lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 774:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 775:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 776:
      if (lookahead == 'n') ADVANCE(1033);
      END_STATE();
    case 777:
      if (lookahead == 'n') ADVANCE(1024);
      END_STATE();
    case 778:
      if (lookahead == 'n') ADVANCE(938);
      END_STATE();
    case 779:
      if (lookahead == 'n') ADVANCE(1073);
      END_STATE();
    case 780:
      if (lookahead == 'n') ADVANCE(1025);
      END_STATE();
    case 781:
      if (lookahead == 'n') ADVANCE(1026);
      END_STATE();
    case 782:
      if (lookahead == 'n') ADVANCE(988);
      END_STATE();
    case 783:
      if (lookahead == 'n') ADVANCE(1046);
      END_STATE();
    case 784:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 785:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 786:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 787:
      if (lookahead == 'n') ADVANCE(843);
      END_STATE();
    case 788:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 789:
      if (lookahead == 'n') ADVANCE(1017);
      END_STATE();
    case 790:
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 791:
      if (lookahead == 'n') ADVANCE(1067);
      END_STATE();
    case 792:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 793:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 794:
      if (lookahead == 'n') ADVANCE(669);
      END_STATE();
    case 795:
      if (lookahead == 'n') ADVANCE(670);
      END_STATE();
    case 796:
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 797:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 798:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 799:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 800:
      if (lookahead == 'n') ADVANCE(999);
      END_STATE();
    case 801:
      if (lookahead == 'n') ADVANCE(1002);
      END_STATE();
    case 802:
      if (lookahead == 'n') ADVANCE(866);
      END_STATE();
    case 803:
      if (lookahead == 'n') ADVANCE(1078);
      END_STATE();
    case 804:
      if (lookahead == 'n') ADVANCE(1079);
      END_STATE();
    case 805:
      if (lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 806:
      if (lookahead == 'n') ADVANCE(1081);
      END_STATE();
    case 807:
      if (lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 808:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 809:
      if (lookahead == 'o') ADVANCE(956);
      END_STATE();
    case 810:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 811:
      if (lookahead == 'o') ADVANCE(1266);
      END_STATE();
    case 812:
      if (lookahead == 'o') ADVANCE(1165);
      END_STATE();
    case 813:
      if (lookahead == 'o') ADVANCE(1265);
      END_STATE();
    case 814:
      if (lookahead == 'o') ADVANCE(1108);
      END_STATE();
    case 815:
      if (lookahead == 'o') ADVANCE(1089);
      END_STATE();
    case 816:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 817:
      if (lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 818:
      if (lookahead == 'o') ADVANCE(757);
      END_STATE();
    case 819:
      if (lookahead == 'o') ADVANCE(757);
      if (lookahead == 's') ADVANCE(1129);
      if (lookahead == 'u') ADVANCE(891);
      END_STATE();
    case 820:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 821:
      if (lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 822:
      if (lookahead == 'o') ADVANCE(913);
      END_STATE();
    case 823:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 824:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 825:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 826:
      if (lookahead == 'o') ADVANCE(724);
      END_STATE();
    case 827:
      if (lookahead == 'o') ADVANCE(768);
      END_STATE();
    case 828:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 829:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 830:
      if (lookahead == 'o') ADVANCE(922);
      END_STATE();
    case 831:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 832:
      if (lookahead == 'o') ADVANCE(789);
      END_STATE();
    case 833:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 834:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 835:
      if (lookahead == 'o') ADVANCE(752);
      END_STATE();
    case 836:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 837:
      if (lookahead == 'o') ADVANCE(754);
      END_STATE();
    case 838:
      if (lookahead == 'o') ADVANCE(903);
      END_STATE();
    case 839:
      if (lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 840:
      if (lookahead == 'o') ADVANCE(967);
      END_STATE();
    case 841:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 842:
      if (lookahead == 'o') ADVANCE(1091);
      END_STATE();
    case 843:
      if (lookahead == 'o') ADVANCE(1109);
      END_STATE();
    case 844:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 845:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 846:
      if (lookahead == 'o') ADVANCE(973);
      END_STATE();
    case 847:
      if (lookahead == 'o') ADVANCE(762);
      END_STATE();
    case 848:
      if (lookahead == 'o') ADVANCE(970);
      END_STATE();
    case 849:
      if (lookahead == 'o') ADVANCE(877);
      END_STATE();
    case 850:
      if (lookahead == 'o') ADVANCE(1094);
      END_STATE();
    case 851:
      if (lookahead == 'o') ADVANCE(1050);
      END_STATE();
    case 852:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 853:
      if (lookahead == 'o') ADVANCE(1095);
      END_STATE();
    case 854:
      if (lookahead == 'o') ADVANCE(984);
      END_STATE();
    case 855:
      if (lookahead == 'o') ADVANCE(976);
      END_STATE();
    case 856:
      if (lookahead == 'o') ADVANCE(924);
      END_STATE();
    case 857:
      if (lookahead == 'o') ADVANCE(927);
      END_STATE();
    case 858:
      if (lookahead == 'o') ADVANCE(925);
      END_STATE();
    case 859:
      if (lookahead == 'o') ADVANCE(929);
      END_STATE();
    case 860:
      if (lookahead == 'o') ADVANCE(926);
      END_STATE();
    case 861:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 862:
      if (lookahead == 'o') ADVANCE(886);
      END_STATE();
    case 863:
      if (lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 864:
      if (lookahead == 'o') ADVANCE(887);
      END_STATE();
    case 865:
      if (lookahead == 'o') ADVANCE(888);
      END_STATE();
    case 866:
      if (lookahead == 'o') ADVANCE(1113);
      END_STATE();
    case 867:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 868:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 869:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 870:
      if (lookahead == 'p') ADVANCE(593);
      END_STATE();
    case 871:
      if (lookahead == 'p') ADVANCE(923);
      END_STATE();
    case 872:
      if (lookahead == 'p') ADVANCE(909);
      END_STATE();
    case 873:
      if (lookahead == 'p') ADVANCE(471);
      END_STATE();
    case 874:
      if (lookahead == 'p') ADVANCE(833);
      END_STATE();
    case 875:
      if (lookahead == 'p') ADVANCE(546);
      END_STATE();
    case 876:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 877:
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 878:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 879:
      if (lookahead == 'p') ADVANCE(1093);
      END_STATE();
    case 880:
      if (lookahead == 'p') ADVANCE(1048);
      END_STATE();
    case 881:
      if (lookahead == 'p') ADVANCE(832);
      END_STATE();
    case 882:
      if (lookahead == 'p') ADVANCE(1054);
      END_STATE();
    case 883:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 884:
      if (lookahead == 'p') ADVANCE(520);
      END_STATE();
    case 885:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 886:
      if (lookahead == 'p') ADVANCE(541);
      END_STATE();
    case 887:
      if (lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 888:
      if (lookahead == 'p') ADVANCE(544);
      END_STATE();
    case 889:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 890:
      if (lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 891:
      if (lookahead == 'r') ADVANCE(1104);
      END_STATE();
    case 892:
      if (lookahead == 'r') ADVANCE(1088);
      END_STATE();
    case 893:
      if (lookahead == 'r') ADVANCE(1173);
      END_STATE();
    case 894:
      if (lookahead == 'r') ADVANCE(1164);
      END_STATE();
    case 895:
      if (lookahead == 'r') ADVANCE(1238);
      END_STATE();
    case 896:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 897:
      if (lookahead == 'r') ADVANCE(1110);
      END_STATE();
    case 898:
      if (lookahead == 'r') ADVANCE(1056);
      END_STATE();
    case 899:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 900:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 901:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 902:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 903:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 904:
      if (lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 905:
      if (lookahead == 'r') ADVANCE(815);
      END_STATE();
    case 906:
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 907:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 908:
      if (lookahead == 'r') ADVANCE(823);
      END_STATE();
    case 909:
      if (lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 910:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 911:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 912:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 913:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 914:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 915:
      if (lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 916:
      if (lookahead == 'r') ADVANCE(965);
      END_STATE();
    case 917:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 918:
      if (lookahead == 'r') ADVANCE(1043);
      END_STATE();
    case 919:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 920:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 921:
      if (lookahead == 'r') ADVANCE(872);
      END_STATE();
    case 922:
      if (lookahead == 'r') ADVANCE(638);
      END_STATE();
    case 923:
      if (lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 924:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 925:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 926:
      if (lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 927:
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 928:
      if (lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 929:
      if (lookahead == 'r') ADVANCE(1112);
      END_STATE();
    case 930:
      if (lookahead == 's') ADVANCE(679);
      if (lookahead == 'u') ADVANCE(1038);
      END_STATE();
    case 931:
      if (lookahead == 's') ADVANCE(1129);
      END_STATE();
    case 932:
      if (lookahead == 's') ADVANCE(1263);
      END_STATE();
    case 933:
      if (lookahead == 's') ADVANCE(1158);
      END_STATE();
    case 934:
      if (lookahead == 's') ADVANCE(1243);
      END_STATE();
    case 935:
      if (lookahead == 's') ADVANCE(1143);
      END_STATE();
    case 936:
      if (lookahead == 's') ADVANCE(1193);
      END_STATE();
    case 937:
      if (lookahead == 's') ADVANCE(1203);
      END_STATE();
    case 938:
      if (lookahead == 's') ADVANCE(1145);
      END_STATE();
    case 939:
      if (lookahead == 's') ADVANCE(1192);
      END_STATE();
    case 940:
      if (lookahead == 's') ADVANCE(1190);
      END_STATE();
    case 941:
      if (lookahead == 's') ADVANCE(1162);
      END_STATE();
    case 942:
      if (lookahead == 's') ADVANCE(1148);
      END_STATE();
    case 943:
      if (lookahead == 's') ADVANCE(1160);
      END_STATE();
    case 944:
      if (lookahead == 's') ADVANCE(1153);
      END_STATE();
    case 945:
      if (lookahead == 's') ADVANCE(1188);
      END_STATE();
    case 946:
      if (lookahead == 's') ADVANCE(1149);
      END_STATE();
    case 947:
      if (lookahead == 's') ADVANCE(1189);
      END_STATE();
    case 948:
      if (lookahead == 's') ADVANCE(1242);
      END_STATE();
    case 949:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 950:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 951:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 952:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 953:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 954:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 955:
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 956:
      if (lookahead == 's') ADVANCE(1020);
      END_STATE();
    case 957:
      if (lookahead == 's') ADVANCE(881);
      END_STATE();
    case 958:
      if (lookahead == 's') ADVANCE(652);
      END_STATE();
    case 959:
      if (lookahead == 's') ADVANCE(952);
      END_STATE();
    case 960:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 961:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 962:
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 963:
      if (lookahead == 's') ADVANCE(585);
      END_STATE();
    case 964:
      if (lookahead == 's') ADVANCE(934);
      END_STATE();
    case 965:
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 966:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 967:
      if (lookahead == 's') ADVANCE(1034);
      END_STATE();
    case 968:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 969:
      if (lookahead == 's') ADVANCE(958);
      END_STATE();
    case 970:
      if (lookahead == 's') ADVANCE(1045);
      END_STATE();
    case 971:
      if (lookahead == 's') ADVANCE(935);
      END_STATE();
    case 972:
      if (lookahead == 's') ADVANCE(506);
      END_STATE();
    case 973:
      if (lookahead == 's') ADVANCE(474);
      END_STATE();
    case 974:
      if (lookahead == 's') ADVANCE(1028);
      END_STATE();
    case 975:
      if (lookahead == 's') ADVANCE(1040);
      END_STATE();
    case 976:
      if (lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 977:
      if (lookahead == 's') ADVANCE(1042);
      END_STATE();
    case 978:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 979:
      if (lookahead == 's') ADVANCE(948);
      END_STATE();
    case 980:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 981:
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 982:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 983:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 984:
      if (lookahead == 's') ADVANCE(1047);
      END_STATE();
    case 985:
      if (lookahead == 's') ADVANCE(1059);
      END_STATE();
    case 986:
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 987:
      if (lookahead == 's') ADVANCE(1063);
      END_STATE();
    case 988:
      if (lookahead == 's') ADVANCE(963);
      END_STATE();
    case 989:
      if (lookahead == 's') ADVANCE(1053);
      END_STATE();
    case 990:
      if (lookahead == 's') ADVANCE(966);
      END_STATE();
    case 991:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 992:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 993:
      if (lookahead == 's') ADVANCE(605);
      END_STATE();
    case 994:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 995:
      if (lookahead == 's') ADVANCE(1072);
      END_STATE();
    case 996:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 997:
      if (lookahead == 's') ADVANCE(994);
      END_STATE();
    case 998:
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 999:
      if (lookahead == 's') ADVANCE(998);
      END_STATE();
    case 1000:
      if (lookahead == 's') ADVANCE(1070);
      END_STATE();
    case 1001:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 1002:
      if (lookahead == 's') ADVANCE(1001);
      END_STATE();
    case 1003:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 1004:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 1005:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 1006:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 1007:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 1008:
      if (lookahead == 's') ADVANCE(620);
      END_STATE();
    case 1009:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 1010:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 1011:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 1012:
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 1013:
      if (lookahead == 's') ADVANCE(380);
      END_STATE();
    case 1014:
      if (lookahead == 's') ADVANCE(1086);
      END_STATE();
    case 1015:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 1016:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 1017:
      if (lookahead == 's') ADVANCE(553);
      END_STATE();
    case 1018:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 1019:
      if (lookahead == 't') ADVANCE(1235);
      END_STATE();
    case 1020:
      if (lookahead == 't') ADVANCE(1134);
      END_STATE();
    case 1021:
      if (lookahead == 't') ADVANCE(1140);
      END_STATE();
    case 1022:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 1023:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 1024:
      if (lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 1025:
      if (lookahead == 't') ADVANCE(1196);
      END_STATE();
    case 1026:
      if (lookahead == 't') ADVANCE(1136);
      END_STATE();
    case 1027:
      if (lookahead == 't') ADVANCE(1163);
      END_STATE();
    case 1028:
      if (lookahead == 't') ADVANCE(1167);
      END_STATE();
    case 1029:
      if (lookahead == 't') ADVANCE(1184);
      END_STATE();
    case 1030:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 1031:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 1032:
      if (lookahead == 't') ADVANCE(1118);
      END_STATE();
    case 1033:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 1034:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 1035:
      if (lookahead == 't') ADVANCE(1096);
      END_STATE();
    case 1036:
      if (lookahead == 't') ADVANCE(892);
      END_STATE();
    case 1037:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 1038:
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 1039:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 1040:
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 1041:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 1042:
      if (lookahead == 't') ADVANCE(883);
      END_STATE();
    case 1043:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 1044:
      if (lookahead == 't') ADVANCE(650);
      END_STATE();
    case 1045:
      if (lookahead == 't') ADVANCE(949);
      END_STATE();
    case 1046:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 1047:
      if (lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 1048:
      if (lookahead == 't') ADVANCE(941);
      END_STATE();
    case 1049:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 1050:
      if (lookahead == 't') ADVANCE(942);
      END_STATE();
    case 1051:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 1052:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 1053:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 1054:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 1055:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 1056:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 1057:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 1058:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 1059:
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 1060:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 1061:
      if (lookahead == 't') ADVANCE(1051);
      END_STATE();
    case 1062:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 1063:
      if (lookahead == 't') ADVANCE(878);
      END_STATE();
    case 1064:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 1065:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 1066:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 1067:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 1068:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 1069:
      if (lookahead == 't') ADVANCE(1055);
      END_STATE();
    case 1070:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 1071:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 1072:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 1073:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 1074:
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 1075:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 1076:
      if (lookahead == 't') ADVANCE(666);
      END_STATE();
    case 1077:
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 1078:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 1079:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 1080:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 1081:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 1082:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 1083:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 1084:
      if (lookahead == 't') ADVANCE(624);
      END_STATE();
    case 1085:
      if (lookahead == 't') ADVANCE(625);
      END_STATE();
    case 1086:
      if (lookahead == 't') ADVANCE(889);
      END_STATE();
    case 1087:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 1088:
      if (lookahead == 'u') ADVANCE(867);
      END_STATE();
    case 1089:
      if (lookahead == 'u') ADVANCE(566);
      END_STATE();
    case 1090:
      if (lookahead == 'u') ADVANCE(1037);
      END_STATE();
    case 1091:
      if (lookahead == 'u') ADVANCE(869);
      END_STATE();
    case 1092:
      if (lookahead == 'u') ADVANCE(1062);
      END_STATE();
    case 1093:
      if (lookahead == 'u') ADVANCE(1019);
      END_STATE();
    case 1094:
      if (lookahead == 'u') ADVANCE(1027);
      END_STATE();
    case 1095:
      if (lookahead == 'u') ADVANCE(1029);
      END_STATE();
    case 1096:
      if (lookahead == 'u') ADVANCE(917);
      END_STATE();
    case 1097:
      if (lookahead == 'u') ADVANCE(920);
      END_STATE();
    case 1098:
      if (lookahead == 'u') ADVANCE(989);
      END_STATE();
    case 1099:
      if (lookahead == 'u') ADVANCE(1082);
      END_STATE();
    case 1100:
      if (lookahead == 'u') ADVANCE(1084);
      END_STATE();
    case 1101:
      if (lookahead == 'u') ADVANCE(1085);
      END_STATE();
    case 1102:
      if (lookahead == 'u') ADVANCE(1087);
      END_STATE();
    case 1103:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 1104:
      if (lookahead == 'v') ADVANCE(525);
      END_STATE();
    case 1105:
      if (lookahead == 'v') ADVANCE(505);
      END_STATE();
    case 1106:
      if (lookahead == 'v') ADVANCE(551);
      END_STATE();
    case 1107:
      if (lookahead == 'w') ADVANCE(445);
      END_STATE();
    case 1108:
      if (lookahead == 'w') ADVANCE(797);
      END_STATE();
    case 1109:
      if (lookahead == 'w') ADVANCE(749);
      END_STATE();
    case 1110:
      if (lookahead == 'w') ADVANCE(345);
      END_STATE();
    case 1111:
      if (lookahead == 'w') ADVANCE(346);
      END_STATE();
    case 1112:
      if (lookahead == 'w') ADVANCE(348);
      END_STATE();
    case 1113:
      if (lookahead == 'w') ADVANCE(799);
      END_STATE();
    case 1114:
      if (lookahead == 'x') ADVANCE(238);
      END_STATE();
    case 1115:
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 1116:
      if (lookahead == 'x') ADVANCE(421);
      END_STATE();
    case 1117:
      if (lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 1118:
      if (lookahead == 'y') ADVANCE(1235);
      END_STATE();
    case 1119:
      if (lookahead == 'y') ADVANCE(1139);
      END_STATE();
    case 1120:
      if (lookahead == 'y') ADVANCE(1195);
      END_STATE();
    case 1121:
      if (lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 1122:
      if (lookahead == 'y') ADVANCE(884);
      END_STATE();
    case 1123:
      if (lookahead == 'y') ADVANCE(951);
      END_STATE();
    case 1124:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 1125:
      if (lookahead == 'y') ADVANCE(981);
      END_STATE();
    case 1126:
      if (lookahead == 'y') ADVANCE(215);
      END_STATE();
    case 1127:
      if (lookahead == 'z') ADVANCE(475);
      END_STATE();
    case 1128:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1235);
      END_STATE();
    case 1129:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1235);
      END_STATE();
    case 1130:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1252);
      END_STATE();
    case 1131:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1262);
      END_STATE();
    case 1132:
      if (eof) ADVANCE(1133);
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '#') ADVANCE(1275);
      if (lookahead == '*') ADVANCE(1169);
      if (lookahead == '+') ADVANCE(1154);
      if (lookahead == ',') ADVANCE(1151);
      if (lookahead == '-') ADVANCE(1155);
      if (lookahead == '0') ADVANCE(1268);
      if (lookahead == ':') ADVANCE(1152);
      if (lookahead == '=') ADVANCE(1276);
      if (lookahead == 'A') ADVANCE(442);
      if (lookahead == 'B') ADVANCE(311);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == 'D') ADVANCE(239);
      if (lookahead == 'E') ADVANCE(286);
      if (lookahead == 'F') ADVANCE(207);
      if (lookahead == 'G') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(809);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == 'K') ADVANCE(384);
      if (lookahead == 'L') ADVANCE(810);
      if (lookahead == 'Q') ADVANCE(304);
      if (lookahead == 'V') ADVANCE(241);
      if (lookahead == '^') ADVANCE(1159);
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == 'c') ADVANCE(819);
      if (lookahead == 'd') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'm') ADVANCE(431);
      if (lookahead == 'n') ADVANCE(811);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == 'w') ADVANCE(467);
      if (lookahead == 'y') ADVANCE(483);
      if (lookahead == '}') ADVANCE(1256);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1269);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'K') ADVANCE(484);
      if (lookahead == 'b') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1141);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(953);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(762);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1174);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T') ADVANCE(672);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (lookahead == 'S') ADVANCE(254);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (lookahead == 'T') ADVANCE(1249);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1244);
      if (lookahead == 'H' ||
          lookahead == 'I' ||
          lookahead == 'K' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(1247);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1244);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (lookahead == 'o') ADVANCE(762);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (lookahead == '{') ADVANCE(1253);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (lookahead == '{') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1248);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(1244);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1247);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1249);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token2);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1253);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1262);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1248);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(1244);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1262);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1247);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1249);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1262);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1236);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(707);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(417);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1262);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(1253);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1252);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1262);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1262);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1269);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1275);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1261);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1278);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1132},
  [2] = {.lex_state = 1132},
  [3] = {.lex_state = 1132},
  [4] = {.lex_state = 1132},
  [5] = {.lex_state = 1132},
  [6] = {.lex_state = 1132},
  [7] = {.lex_state = 1132},
  [8] = {.lex_state = 1132},
  [9] = {.lex_state = 1132},
  [10] = {.lex_state = 1132},
  [11] = {.lex_state = 1132},
  [12] = {.lex_state = 1132},
  [13] = {.lex_state = 1132},
  [14] = {.lex_state = 1132},
  [15] = {.lex_state = 1132},
  [16] = {.lex_state = 1132},
  [17] = {.lex_state = 1132},
  [18] = {.lex_state = 1132},
  [19] = {.lex_state = 1132},
  [20] = {.lex_state = 1132},
  [21] = {.lex_state = 1132},
  [22] = {.lex_state = 1132},
  [23] = {.lex_state = 1132},
  [24] = {.lex_state = 1132},
  [25] = {.lex_state = 1132},
  [26] = {.lex_state = 1132},
  [27] = {.lex_state = 1132},
  [28] = {.lex_state = 1132},
  [29] = {.lex_state = 1132},
  [30] = {.lex_state = 1132},
  [31] = {.lex_state = 1132},
  [32] = {.lex_state = 1132},
  [33] = {.lex_state = 1132},
  [34] = {.lex_state = 1132},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 36},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 35},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 41},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 32},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 38},
  [90] = {.lex_state = 42},
  [91] = {.lex_state = 42},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 32},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 32},
  [98] = {.lex_state = 46},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 46},
  [101] = {.lex_state = 46},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 31},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 32},
  [118] = {.lex_state = 32},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 32},
  [122] = {.lex_state = 38},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 44},
  [131] = {.lex_state = 32},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 31},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 33},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 44},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 33},
  [141] = {.lex_state = 16},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 46},
  [144] = {.lex_state = 33},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 43},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 43},
  [150] = {.lex_state = 45},
  [151] = {.lex_state = 43},
  [152] = {.lex_state = 46},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 45},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 38},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 38},
  [162] = {.lex_state = 1132},
  [163] = {.lex_state = 1132},
  [164] = {.lex_state = 1132},
  [165] = {.lex_state = 24},
  [166] = {.lex_state = 22},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 28},
  [169] = {.lex_state = 1132},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 33},
  [172] = {.lex_state = 1132},
  [173] = {.lex_state = 46},
  [174] = {.lex_state = 1132},
  [175] = {.lex_state = 1132},
  [176] = {.lex_state = 24},
  [177] = {.lex_state = 46},
  [178] = {.lex_state = 1132},
  [179] = {.lex_state = 43},
  [180] = {.lex_state = 21},
  [181] = {.lex_state = 1132},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 1132},
  [184] = {.lex_state = 1132},
  [185] = {.lex_state = 1132},
  [186] = {.lex_state = 1132},
  [187] = {.lex_state = 1132},
  [188] = {.lex_state = 1132},
  [189] = {.lex_state = 1132},
  [190] = {.lex_state = 17},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 17},
  [193] = {.lex_state = 46},
  [194] = {.lex_state = 1132},
  [195] = {.lex_state = 1132},
  [196] = {.lex_state = 1132},
  [197] = {.lex_state = 1132},
  [198] = {.lex_state = 1132},
  [199] = {.lex_state = 1132},
  [200] = {.lex_state = 32},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 32},
  [203] = {.lex_state = 1132},
  [204] = {.lex_state = 1132},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 1132},
  [207] = {.lex_state = 1132},
  [208] = {.lex_state = 27},
  [209] = {.lex_state = 1132},
  [210] = {.lex_state = 1132},
  [211] = {.lex_state = 1132},
  [212] = {.lex_state = 26},
  [213] = {.lex_state = 25},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 27},
  [216] = {.lex_state = 1132},
  [217] = {.lex_state = 1132},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 28},
  [220] = {.lex_state = 43},
  [221] = {.lex_state = 1132},
  [222] = {.lex_state = 1132},
  [223] = {.lex_state = 1132},
  [224] = {.lex_state = 1132},
  [225] = {.lex_state = 1132},
  [226] = {.lex_state = 38},
  [227] = {.lex_state = 38},
  [228] = {.lex_state = 1132},
  [229] = {.lex_state = 1132},
  [230] = {.lex_state = 1132},
  [231] = {.lex_state = 1132},
  [232] = {.lex_state = 1132},
  [233] = {.lex_state = 1132},
  [234] = {.lex_state = 1132},
  [235] = {.lex_state = 1132},
  [236] = {.lex_state = 1132},
  [237] = {.lex_state = 27},
  [238] = {.lex_state = 1132},
  [239] = {.lex_state = 27},
  [240] = {.lex_state = 1132},
  [241] = {.lex_state = 1132},
  [242] = {.lex_state = 1132},
  [243] = {.lex_state = 1132},
  [244] = {.lex_state = 1132},
  [245] = {.lex_state = 1132},
  [246] = {.lex_state = 1132},
  [247] = {.lex_state = 1132},
  [248] = {.lex_state = 1132},
  [249] = {.lex_state = 1132},
  [250] = {.lex_state = 1132},
  [251] = {.lex_state = 1132},
  [252] = {.lex_state = 28},
  [253] = {.lex_state = 1132},
  [254] = {.lex_state = 1132},
  [255] = {.lex_state = 1132},
  [256] = {.lex_state = 1132},
  [257] = {.lex_state = 1132},
  [258] = {.lex_state = 1132},
  [259] = {.lex_state = 24},
  [260] = {.lex_state = 1132},
  [261] = {.lex_state = 24},
  [262] = {.lex_state = 1132},
  [263] = {.lex_state = 1132},
  [264] = {.lex_state = 1132},
  [265] = {.lex_state = 40},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 40},
  [268] = {.lex_state = 1132},
  [269] = {.lex_state = 1132},
  [270] = {.lex_state = 1132},
  [271] = {.lex_state = 1132},
  [272] = {.lex_state = 1132},
  [273] = {.lex_state = 1132},
  [274] = {.lex_state = 1132},
  [275] = {.lex_state = 1132},
  [276] = {.lex_state = 1132},
  [277] = {.lex_state = 1132},
  [278] = {.lex_state = 1132},
  [279] = {.lex_state = 1132},
  [280] = {.lex_state = 308},
  [281] = {.lex_state = 201},
  [282] = {.lex_state = 1132},
  [283] = {.lex_state = 308},
  [284] = {.lex_state = 1132},
  [285] = {.lex_state = 1132},
  [286] = {.lex_state = 1132},
  [287] = {.lex_state = 1132},
  [288] = {.lex_state = 1132},
  [289] = {.lex_state = 1132},
  [290] = {.lex_state = 1132},
  [291] = {.lex_state = 1132},
  [292] = {.lex_state = 1132},
  [293] = {.lex_state = 1132},
  [294] = {.lex_state = 1132},
  [295] = {.lex_state = 40},
  [296] = {.lex_state = 1132},
  [297] = {.lex_state = 1132},
  [298] = {.lex_state = 1132},
  [299] = {.lex_state = 1132},
  [300] = {.lex_state = 1132},
  [301] = {.lex_state = 1132},
  [302] = {.lex_state = 25},
  [303] = {.lex_state = 1132},
  [304] = {.lex_state = 1132},
  [305] = {.lex_state = 1132},
  [306] = {.lex_state = 1132},
  [307] = {.lex_state = 1132},
  [308] = {.lex_state = 1132},
  [309] = {.lex_state = 1132},
  [310] = {.lex_state = 92},
  [311] = {.lex_state = 92},
  [312] = {.lex_state = 1132},
  [313] = {.lex_state = 1132},
  [314] = {.lex_state = 1132},
  [315] = {.lex_state = 1132},
  [316] = {.lex_state = 1132},
  [317] = {.lex_state = 10},
  [318] = {.lex_state = 28},
  [319] = {.lex_state = 1132},
  [320] = {.lex_state = 38},
  [321] = {.lex_state = 1132},
  [322] = {.lex_state = 92},
  [323] = {.lex_state = 1132},
  [324] = {.lex_state = 38},
  [325] = {.lex_state = 40},
  [326] = {.lex_state = 38},
  [327] = {.lex_state = 38},
  [328] = {.lex_state = 38},
  [329] = {.lex_state = 40},
  [330] = {.lex_state = 38},
  [331] = {.lex_state = 1132},
  [332] = {.lex_state = 1132},
  [333] = {.lex_state = 38},
  [334] = {.lex_state = 38},
  [335] = {.lex_state = 1132},
  [336] = {.lex_state = 1132},
  [337] = {.lex_state = 1132},
  [338] = {.lex_state = 1132},
  [339] = {.lex_state = 38},
  [340] = {.lex_state = 38},
  [341] = {.lex_state = 1132},
  [342] = {.lex_state = 1132},
  [343] = {.lex_state = 1132},
  [344] = {.lex_state = 1132},
  [345] = {.lex_state = 38},
  [346] = {.lex_state = 10},
  [347] = {.lex_state = 1132},
  [348] = {.lex_state = 1132},
  [349] = {.lex_state = 1132},
  [350] = {.lex_state = 1132},
  [351] = {.lex_state = 38},
  [352] = {.lex_state = 1132},
  [353] = {.lex_state = 38},
  [354] = {.lex_state = 38},
  [355] = {.lex_state = 1132},
  [356] = {.lex_state = 1132},
  [357] = {.lex_state = 1132},
  [358] = {.lex_state = 38},
  [359] = {.lex_state = 1132},
  [360] = {.lex_state = 1132},
  [361] = {.lex_state = 1132},
  [362] = {.lex_state = 1132},
  [363] = {.lex_state = 1132},
  [364] = {.lex_state = 1132},
  [365] = {.lex_state = 1132},
  [366] = {.lex_state = 1132},
  [367] = {.lex_state = 1132},
  [368] = {.lex_state = 1132},
  [369] = {.lex_state = 1132},
  [370] = {.lex_state = 10},
  [371] = {.lex_state = 1132},
  [372] = {.lex_state = 1132},
  [373] = {.lex_state = 1132},
  [374] = {.lex_state = 1132},
  [375] = {.lex_state = 1132},
  [376] = {.lex_state = 1132},
  [377] = {.lex_state = 1132},
  [378] = {.lex_state = 1132},
  [379] = {.lex_state = 1132},
  [380] = {.lex_state = 1132},
  [381] = {.lex_state = 1132},
  [382] = {.lex_state = 1132},
  [383] = {.lex_state = 1132},
  [384] = {.lex_state = 1132},
  [385] = {.lex_state = 1132},
  [386] = {.lex_state = 1132},
  [387] = {.lex_state = 1132},
  [388] = {.lex_state = 1132},
  [389] = {.lex_state = 1132},
  [390] = {.lex_state = 1132},
  [391] = {.lex_state = 1132},
  [392] = {.lex_state = 1132},
  [393] = {.lex_state = 1132},
  [394] = {.lex_state = 1132},
  [395] = {.lex_state = 1132},
  [396] = {.lex_state = 1132},
  [397] = {.lex_state = 308},
  [398] = {.lex_state = 1132},
  [399] = {.lex_state = 1132},
  [400] = {.lex_state = 1132},
  [401] = {.lex_state = 1132},
  [402] = {.lex_state = 1132},
  [403] = {.lex_state = 1132},
  [404] = {.lex_state = 1132},
  [405] = {.lex_state = 1132},
  [406] = {.lex_state = 1132},
  [407] = {.lex_state = 1132},
  [408] = {.lex_state = 1132},
  [409] = {.lex_state = 1132},
  [410] = {.lex_state = 1132},
  [411] = {.lex_state = 1132},
  [412] = {.lex_state = 1132},
  [413] = {.lex_state = 1132},
  [414] = {.lex_state = 1132},
  [415] = {.lex_state = 1132},
  [416] = {.lex_state = 1132},
  [417] = {.lex_state = 1132},
  [418] = {.lex_state = 1132},
  [419] = {.lex_state = 1132},
  [420] = {.lex_state = 1132},
  [421] = {.lex_state = 1132},
  [422] = {.lex_state = 1132},
  [423] = {.lex_state = 1132},
  [424] = {.lex_state = 1132},
  [425] = {.lex_state = 1132},
  [426] = {.lex_state = 1132},
  [427] = {.lex_state = 1132},
  [428] = {.lex_state = 1132},
  [429] = {.lex_state = 1132},
  [430] = {.lex_state = 1132},
  [431] = {.lex_state = 1132},
  [432] = {.lex_state = 1132},
  [433] = {.lex_state = 10},
  [434] = {.lex_state = 1132},
  [435] = {.lex_state = 1132},
  [436] = {.lex_state = 1132},
  [437] = {.lex_state = 1132},
  [438] = {.lex_state = 1132},
  [439] = {.lex_state = 1132},
  [440] = {.lex_state = 1132},
  [441] = {.lex_state = 1132},
  [442] = {.lex_state = 1132},
  [443] = {.lex_state = 1132},
  [444] = {.lex_state = 1132},
  [445] = {.lex_state = 1132},
  [446] = {.lex_state = 1132},
  [447] = {.lex_state = 10},
  [448] = {.lex_state = 1132},
  [449] = {.lex_state = 1132},
  [450] = {.lex_state = 1132},
  [451] = {.lex_state = 1132},
  [452] = {.lex_state = 1132},
  [453] = {.lex_state = 1132},
  [454] = {.lex_state = 1132},
  [455] = {.lex_state = 1132},
  [456] = {.lex_state = 1132},
  [457] = {.lex_state = 1132},
  [458] = {.lex_state = 1132},
  [459] = {.lex_state = 1132},
  [460] = {.lex_state = 1132},
  [461] = {.lex_state = 1132},
  [462] = {.lex_state = 1132},
  [463] = {.lex_state = 1132},
  [464] = {.lex_state = 1132},
  [465] = {.lex_state = 1132},
  [466] = {.lex_state = 1132},
  [467] = {.lex_state = 1132},
  [468] = {.lex_state = 1132},
  [469] = {.lex_state = 1132},
  [470] = {.lex_state = 1132},
  [471] = {.lex_state = 1132},
  [472] = {.lex_state = 1132},
  [473] = {.lex_state = 1132},
  [474] = {.lex_state = 1132},
  [475] = {.lex_state = 1132},
  [476] = {.lex_state = 1132},
  [477] = {.lex_state = 1132},
  [478] = {.lex_state = 1132},
  [479] = {.lex_state = 1132},
  [480] = {.lex_state = 1132},
  [481] = {.lex_state = 1132},
  [482] = {.lex_state = 1132},
  [483] = {.lex_state = 1132},
  [484] = {.lex_state = 1132},
  [485] = {.lex_state = 1132},
  [486] = {.lex_state = 1132},
  [487] = {.lex_state = 40},
  [488] = {.lex_state = 1132},
  [489] = {.lex_state = 1132},
  [490] = {.lex_state = 1132},
  [491] = {.lex_state = 308},
  [492] = {.lex_state = 40},
  [493] = {.lex_state = 308},
  [494] = {.lex_state = 1132},
  [495] = {.lex_state = 1132},
  [496] = {.lex_state = 1132},
  [497] = {.lex_state = 1132},
  [498] = {.lex_state = 1132},
  [499] = {.lex_state = 1132},
  [500] = {.lex_state = 1132},
  [501] = {.lex_state = 1132},
  [502] = {.lex_state = 1132},
  [503] = {.lex_state = 46},
  [504] = {.lex_state = 1132},
  [505] = {.lex_state = 1130},
  [506] = {.lex_state = 1132},
  [507] = {.lex_state = 46},
  [508] = {.lex_state = 1132},
  [509] = {.lex_state = 1131},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 46},
  [512] = {.lex_state = 1132},
  [513] = {.lex_state = 1132},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 1132},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 1132},
  [518] = {.lex_state = 10},
  [519] = {.lex_state = 10},
  [520] = {.lex_state = 1132},
  [521] = {.lex_state = 1132},
  [522] = {.lex_state = 10},
  [523] = {.lex_state = 1130},
  [524] = {.lex_state = 1132},
  [525] = {.lex_state = 1132},
  [526] = {.lex_state = 1132},
  [527] = {.lex_state = 46},
  [528] = {.lex_state = 1132},
  [529] = {.lex_state = 46},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 1132},
  [532] = {.lex_state = 1130},
  [533] = {.lex_state = 1132},
  [534] = {.lex_state = 10},
  [535] = {.lex_state = 1132},
  [536] = {.lex_state = 1132},
  [537] = {.lex_state = 1132},
  [538] = {.lex_state = 1132},
  [539] = {.lex_state = 1132},
  [540] = {.lex_state = 1132},
  [541] = {.lex_state = 1130},
  [542] = {.lex_state = 1130},
  [543] = {.lex_state = 1130},
  [544] = {.lex_state = 1132},
  [545] = {.lex_state = 1130},
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
    [aux_sym__log_verbose_value_token2] = ACTIONS(1),
    [aux_sym__log_verbose_quoted_token1] = ACTIONS(1),
    [sym_protocol_version] = ACTIONS(1),
    [aux_sym__file_token_token1] = ACTIONS(1),
    [aux_sym__hosts_token_token1] = ACTIONS(1),
    [aux_sym__hostname_token_token1] = ACTIONS(1),
    [sym_token] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(516),
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(468),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(109),
    [sym__space] = ACTIONS(111),
    [sym__eol] = ACTIONS(113),
  },
  [2] = {
    [sym_host_declaration] = STATE(3),
    [sym_parameter] = STATE(468),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(115),
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
    [sym_comment] = ACTIONS(109),
    [sym__space] = ACTIONS(111),
    [sym__eol] = ACTIONS(117),
  },
  [3] = {
    [sym_host_declaration] = STATE(3),
    [sym_parameter] = STATE(468),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(119),
    [aux_sym_host_declaration_token1] = ACTIONS(121),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(124),
    [aux_sym__address_family_token1] = ACTIONS(127),
    [aux_sym__batch_mode_token1] = ACTIONS(130),
    [aux_sym__bind_address_token1] = ACTIONS(133),
    [aux_sym__bind_interface_token1] = ACTIONS(136),
    [aux_sym__canonical_domains_token1] = ACTIONS(139),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(142),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(145),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(148),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(151),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(154),
    [aux_sym__certificate_file_token1] = ACTIONS(157),
    [aux_sym__check_host_ip_token1] = ACTIONS(160),
    [aux_sym__ciphers_token1] = ACTIONS(163),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(166),
    [aux_sym__compression_token1] = ACTIONS(169),
    [aux_sym__connection_attempts_token1] = ACTIONS(172),
    [aux_sym__connect_timeout_token1] = ACTIONS(175),
    [aux_sym__control_master_token1] = ACTIONS(178),
    [aux_sym__control_persist_token1] = ACTIONS(181),
    [aux_sym__control_path_token1] = ACTIONS(184),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(187),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(190),
    [aux_sym__escape_char_token1] = ACTIONS(193),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(196),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(199),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(202),
    [aux_sym__forward_agent_token1] = ACTIONS(205),
    [aux_sym__forward_x11_token1] = ACTIONS(208),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(211),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(214),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(217),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(220),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(223),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(226),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(226),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(229),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(232),
    [aux_sym__host_key_alias_token1] = ACTIONS(235),
    [aux_sym__hostname_token1] = ACTIONS(238),
    [aux_sym__identities_only_token1] = ACTIONS(241),
    [aux_sym__identity_agent_token1] = ACTIONS(244),
    [aux_sym__identity_file_token1] = ACTIONS(247),
    [aux_sym__ignore_unknown_token1] = ACTIONS(250),
    [aux_sym__ipqos_token1] = ACTIONS(253),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(256),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(256),
    [aux_sym__kex_algorithms_token1] = ACTIONS(259),
    [aux_sym__known_hosts_command_token1] = ACTIONS(262),
    [aux_sym__local_command_token1] = ACTIONS(265),
    [aux_sym__local_forward_token1] = ACTIONS(268),
    [aux_sym__log_level_token1] = ACTIONS(271),
    [aux_sym__log_verbose_token1] = ACTIONS(274),
    [sym_comment] = ACTIONS(277),
    [sym__space] = ACTIONS(280),
    [sym__eol] = ACTIONS(283),
  },
  [4] = {
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym_host_declaration_token1] = ACTIONS(288),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(290),
    [aux_sym__address_family_token1] = ACTIONS(293),
    [aux_sym__batch_mode_token1] = ACTIONS(296),
    [aux_sym__bind_address_token1] = ACTIONS(299),
    [aux_sym__bind_interface_token1] = ACTIONS(302),
    [aux_sym__canonical_domains_token1] = ACTIONS(305),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(308),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(311),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(314),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(317),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(320),
    [aux_sym__certificate_file_token1] = ACTIONS(323),
    [aux_sym__check_host_ip_token1] = ACTIONS(326),
    [aux_sym__ciphers_token1] = ACTIONS(329),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(332),
    [aux_sym__compression_token1] = ACTIONS(335),
    [aux_sym__connection_attempts_token1] = ACTIONS(338),
    [aux_sym__connect_timeout_token1] = ACTIONS(341),
    [aux_sym__control_master_token1] = ACTIONS(344),
    [aux_sym__control_persist_token1] = ACTIONS(347),
    [aux_sym__control_path_token1] = ACTIONS(350),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(353),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(356),
    [aux_sym__escape_char_token1] = ACTIONS(359),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(362),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(365),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(368),
    [aux_sym__forward_agent_token1] = ACTIONS(371),
    [aux_sym__forward_x11_token1] = ACTIONS(374),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(377),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(380),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(383),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(386),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(389),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(392),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(392),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(395),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(398),
    [aux_sym__host_key_alias_token1] = ACTIONS(401),
    [aux_sym__hostname_token1] = ACTIONS(404),
    [aux_sym__identities_only_token1] = ACTIONS(407),
    [aux_sym__identity_agent_token1] = ACTIONS(410),
    [aux_sym__identity_file_token1] = ACTIONS(413),
    [aux_sym__ignore_unknown_token1] = ACTIONS(416),
    [aux_sym__ipqos_token1] = ACTIONS(419),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(422),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(422),
    [aux_sym__kex_algorithms_token1] = ACTIONS(425),
    [aux_sym__known_hosts_command_token1] = ACTIONS(428),
    [aux_sym__local_command_token1] = ACTIONS(431),
    [aux_sym__local_forward_token1] = ACTIONS(434),
    [aux_sym__log_level_token1] = ACTIONS(437),
    [aux_sym__log_verbose_token1] = ACTIONS(440),
    [sym_comment] = ACTIONS(443),
    [sym__space] = ACTIONS(446),
    [sym__eol] = ACTIONS(286),
  },
  [5] = {
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(449),
    [aux_sym_host_declaration_token1] = ACTIONS(451),
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
    [sym_comment] = ACTIONS(453),
    [sym__space] = ACTIONS(455),
    [sym__eol] = ACTIONS(449),
  },
  [6] = {
    [sym__declarations] = STATE(18),
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(453),
    [sym__space] = ACTIONS(455),
  },
  [7] = {
    [sym__declarations] = STATE(23),
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(453),
    [sym__space] = ACTIONS(455),
  },
  [8] = {
    [sym__declarations] = STATE(19),
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(453),
    [sym__space] = ACTIONS(455),
  },
  [9] = {
    [sym__declarations] = STATE(21),
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(453),
    [sym__space] = ACTIONS(455),
  },
  [10] = {
    [sym_host_declaration] = STATE(27),
    [sym_parameter] = STATE(439),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(457),
    [sym__eol] = ACTIONS(459),
  },
  [11] = {
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(453),
    [sym__space] = ACTIONS(455),
  },
  [12] = {
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(453),
    [sym__space] = ACTIONS(455),
  },
  [13] = {
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(453),
    [sym__space] = ACTIONS(455),
  },
  [14] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(362),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(453),
    [sym__space] = ACTIONS(455),
  },
  [15] = {
    [sym_parameter] = STATE(408),
    [sym__add_keys_to_agent] = STATE(467),
    [sym__address_family] = STATE(466),
    [sym__batch_mode] = STATE(465),
    [sym__bind_address] = STATE(464),
    [sym__bind_interface] = STATE(463),
    [sym__canonical_domains] = STATE(462),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(460),
    [sym__canonicalize_max_dots] = STATE(459),
    [sym__canonicalize_permitted_cnames] = STATE(458),
    [sym__ca_signature_algorithms] = STATE(457),
    [sym__certificate_file] = STATE(456),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(454),
    [sym__clear_all_forwardings] = STATE(360),
    [sym__compression] = STATE(441),
    [sym__connection_attempts] = STATE(440),
    [sym__connect_timeout] = STATE(435),
    [sym__control_master] = STATE(431),
    [sym__control_persist] = STATE(429),
    [sym__control_path] = STATE(428),
    [sym__enable_escape_command_line] = STATE(427),
    [sym__enable_ssh_keysign] = STATE(426),
    [sym__escape_char] = STATE(425),
    [sym__exit_on_forward_failure] = STATE(423),
    [sym__fingerprint_hash] = STATE(418),
    [sym__fork_after_authentication] = STATE(417),
    [sym__forward_agent] = STATE(412),
    [sym__forward_x11] = STATE(411),
    [sym__forward_x11_timeout] = STATE(410),
    [sym__forward_x11_trusted] = STATE(395),
    [sym__global_known_hosts_file] = STATE(407),
    [sym__gssapi_authentication] = STATE(405),
    [sym__gssapi_delegate_credentials] = STATE(403),
    [sym__hostbased_accepted_algorithms] = STATE(402),
    [sym__hostbased_authentication] = STATE(401),
    [sym__host_key_algorithms] = STATE(400),
    [sym__host_key_alias] = STATE(399),
    [sym__hostname] = STATE(398),
    [sym__identities_only] = STATE(396),
    [sym__identity_agent] = STATE(393),
    [sym__identity_file] = STATE(389),
    [sym__ignore_unknown] = STATE(387),
    [sym__ipqos] = STATE(359),
    [sym__kbd_interactive_authentication] = STATE(383),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(374),
    [sym__local_command] = STATE(372),
    [sym__local_forward] = STATE(371),
    [sym__log_level] = STATE(369),
    [sym__log_verbose] = STATE(365),
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
    [sym_comment] = ACTIONS(461),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(288), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(286), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [63] = 2,
    ACTIONS(465), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(463), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [126] = 2,
    ACTIONS(469), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(467), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [189] = 2,
    ACTIONS(473), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(471), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [252] = 2,
    ACTIONS(477), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(475), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [315] = 2,
    ACTIONS(481), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(479), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [378] = 2,
    ACTIONS(485), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(483), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [441] = 2,
    ACTIONS(489), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(487), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [504] = 2,
    ACTIONS(493), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(491), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [567] = 2,
    ACTIONS(497), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(495), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [630] = 2,
    ACTIONS(501), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(499), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [693] = 2,
    ACTIONS(503), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(119), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [756] = 2,
    ACTIONS(507), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(505), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [819] = 2,
    ACTIONS(511), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(509), 56,
      ts_builtin_sym_end,
      aux_sym__add_keys_to_agent_token1,
      aux_sym__address_family_token1,
      aux_sym__batch_mode_token1,
      aux_sym__bind_address_token1,
      aux_sym__bind_interface_token1,
      aux_sym__canonical_domains_token1,
      aux_sym__canonicalize_fallback_local_token1,
      aux_sym__canonicalize_hostname_token1,
      aux_sym__canonicalize_max_dots_token1,
      aux_sym__canonicalize_permitted_cnames_token1,
      aux_sym__ca_signature_algorithms_token1,
      aux_sym__certificate_file_token1,
      aux_sym__check_host_ip_token1,
      aux_sym__ciphers_token1,
      aux_sym__clear_all_forwardings_token1,
      aux_sym__compression_token1,
      aux_sym__connection_attempts_token1,
      aux_sym__connect_timeout_token1,
      aux_sym__control_master_token1,
      aux_sym__control_persist_token1,
      aux_sym__control_path_token1,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_timeout_token1,
      aux_sym__forward_x11_trusted_token1,
      aux_sym__global_known_hosts_file_token1,
      aux_sym__gssapi_authentication_token1,
      aux_sym__gssapi_delegate_credentials_token1,
      aux_sym__hostbased_accepted_algorithms_token1,
      aux_sym__hostbased_accepted_algorithms_token2,
      aux_sym__hostbased_authentication_token1,
      aux_sym__host_key_algorithms_token1,
      aux_sym__host_key_alias_token1,
      aux_sym__hostname_token1,
      aux_sym__identities_only_token1,
      aux_sym__identity_agent_token1,
      aux_sym__identity_file_token1,
      aux_sym__ignore_unknown_token1,
      aux_sym__ipqos_token1,
      aux_sym__kbd_interactive_authentication_token1,
      aux_sym__kbd_interactive_authentication_token2,
      aux_sym__kex_algorithms_token1,
      aux_sym__known_hosts_command_token1,
      aux_sym__local_command_token1,
      aux_sym__local_forward_token1,
      aux_sym__log_level_token1,
      aux_sym__log_verbose_token1,
      sym_comment,
      sym__space,
      sym__eol,
  [882] = 3,
    ACTIONS(517), 1,
      sym__space,
    ACTIONS(515), 3,
      anon_sym_inet,
      anon_sym_auto,
      anon_sym_no,
    ACTIONS(513), 16,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_none,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_ipqos,
      sym_verbosity,
      sym_kex,
      sym_sig,
      anon_sym_yes,
      sym__number,
  [909] = 3,
    ACTIONS(519), 1,
      anon_sym_EQ,
    ACTIONS(515), 3,
      anon_sym_inet,
      anon_sym_auto,
      anon_sym_no,
    ACTIONS(513), 16,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_none,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_ipqos,
      sym_verbosity,
      sym_kex,
      sym_sig,
      anon_sym_yes,
      sym__number,
  [936] = 3,
    ACTIONS(525), 1,
      sym__space,
    ACTIONS(523), 3,
      anon_sym_inet,
      anon_sym_auto,
      anon_sym_no,
    ACTIONS(521), 16,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_none,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_ipqos,
      sym_verbosity,
      sym_kex,
      sym_sig,
      anon_sym_yes,
      sym__number,
  [963] = 2,
    ACTIONS(523), 3,
      anon_sym_inet,
      anon_sym_auto,
      anon_sym_no,
    ACTIONS(521), 16,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_none,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_ipqos,
      sym_verbosity,
      sym_kex,
      sym_sig,
      anon_sym_yes,
      sym__number,
  [987] = 2,
    ACTIONS(529), 3,
      anon_sym_inet,
      anon_sym_auto,
      anon_sym_no,
    ACTIONS(527), 16,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_none,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_ipqos,
      sym_verbosity,
      sym_kex,
      sym_sig,
      anon_sym_yes,
      sym__number,
  [1011] = 10,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(539), 1,
      aux_sym_string_token1,
    ACTIONS(541), 1,
      sym__number,
    STATE(44), 1,
      aux_sym__file_string_repeat1,
    STATE(514), 1,
      sym_string,
    ACTIONS(535), 2,
      aux_sym__log_verbose_value_token1,
      aux_sym__file_token_token1,
    STATE(146), 2,
      sym__file_token,
      sym_variable,
    STATE(502), 2,
      sym__local_forward_value1,
      sym__file_string,
  [1045] = 10,
    ACTIONS(535), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      aux_sym__file_token_token1,
    ACTIONS(549), 1,
      anon_sym_DOLLAR,
    ACTIONS(551), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(44), 1,
      aux_sym__file_string_repeat1,
    STATE(432), 1,
      sym__file_string,
    STATE(434), 1,
      sym__var_value,
    ACTIONS(543), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(146), 2,
      sym__file_token,
      sym_variable,
  [1078] = 9,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(539), 1,
      aux_sym_string_token1,
    ACTIONS(553), 1,
      anon_sym_STAR,
    STATE(44), 1,
      aux_sym__file_string_repeat1,
    STATE(530), 1,
      sym_string,
    ACTIONS(535), 2,
      aux_sym__log_verbose_value_token1,
      aux_sym__file_token_token1,
    STATE(146), 2,
      sym__file_token,
      sym_variable,
    STATE(392), 2,
      sym__local_forward_value2,
      sym__file_string,
  [1109] = 7,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(559), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(561), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(40), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(499), 1,
      sym__file_pattern_vars,
    STATE(75), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(555), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1134] = 7,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(559), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(561), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(40), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(484), 1,
      sym__file_pattern_vars,
    STATE(75), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(555), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1159] = 6,
    ACTIONS(559), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(561), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(41), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(563), 2,
      sym__space,
      sym__eol,
    STATE(75), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(555), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1182] = 6,
    ACTIONS(568), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(571), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(41), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(574), 2,
      sym__space,
      sym__eol,
    STATE(75), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(565), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1205] = 6,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(584), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(42), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1227] = 6,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(593), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(42), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(587), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1249] = 6,
    ACTIONS(535), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(547), 1,
      aux_sym__file_token_token1,
    ACTIONS(551), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(56), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(595), 2,
      sym__space,
      sym__eol,
    STATE(146), 2,
      sym__file_token,
      sym_variable,
  [1270] = 6,
    ACTIONS(597), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(599), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(601), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(60), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(603), 2,
      sym__space,
      sym__eol,
    STATE(154), 2,
      sym__hosts_token,
      sym_variable,
  [1291] = 2,
    ACTIONS(605), 1,
      sym__space,
    ACTIONS(523), 7,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      aux_sym__log_verbose_value_token1,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_token1,
      sym__number,
  [1304] = 7,
    ACTIONS(597), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(599), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(601), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym__hosts_string_repeat1,
    STATE(469), 1,
      sym__hosts_string,
    STATE(154), 2,
      sym__hosts_token,
      sym_variable,
  [1327] = 6,
    ACTIONS(539), 1,
      aux_sym_string_token1,
    ACTIONS(549), 1,
      anon_sym_DOLLAR,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    STATE(409), 1,
      sym__var_value,
    ACTIONS(611), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(361), 2,
      sym_string,
      sym__boolean,
  [1348] = 7,
    ACTIONS(613), 1,
      anon_sym_BANG,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(621), 1,
      sym__eol,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(413), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1371] = 7,
    ACTIONS(613), 1,
      anon_sym_BANG,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(623), 1,
      sym__eol,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(413), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1394] = 7,
    ACTIONS(613), 1,
      anon_sym_BANG,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(625), 1,
      sym__eol,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(413), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1417] = 7,
    ACTIONS(535), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      aux_sym__file_token_token1,
    ACTIONS(551), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(44), 1,
      aux_sym__file_string_repeat1,
    STATE(438), 1,
      sym__file_string,
    STATE(146), 2,
      sym__file_token,
      sym_variable,
  [1440] = 7,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      anon_sym_none,
    ACTIONS(631), 1,
      aux_sym__log_verbose_value_token1,
    STATE(91), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(297), 1,
      sym_pattern,
    STATE(299), 1,
      sym__cnames_map,
    ACTIONS(629), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1463] = 3,
    ACTIONS(633), 1,
      sym__space,
    ACTIONS(515), 2,
      aux_sym__log_verbose_value_token1,
      anon_sym_DOLLAR,
    ACTIONS(513), 5,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1478] = 5,
    ACTIONS(591), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(593), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(43), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(587), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1497] = 6,
    ACTIONS(635), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(638), 1,
      aux_sym__file_token_token1,
    ACTIONS(641), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(56), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(644), 2,
      sym__space,
      sym__eol,
    STATE(146), 2,
      sym__file_token,
      sym_variable,
  [1518] = 3,
    ACTIONS(646), 1,
      sym__space,
    ACTIONS(523), 2,
      aux_sym__log_verbose_value_token1,
      anon_sym_DOLLAR,
    ACTIONS(521), 5,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1533] = 3,
    ACTIONS(648), 1,
      anon_sym_EQ,
    ACTIONS(515), 2,
      aux_sym__log_verbose_value_token1,
      anon_sym_DOLLAR,
    ACTIONS(513), 5,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1548] = 7,
    ACTIONS(613), 1,
      anon_sym_BANG,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(650), 1,
      sym__eol,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(413), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1571] = 6,
    ACTIONS(652), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(655), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(658), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(60), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(661), 2,
      sym__space,
      sym__eol,
    STATE(154), 2,
      sym__hosts_token,
      sym_variable,
  [1592] = 2,
    ACTIONS(663), 1,
      sym__space,
    ACTIONS(515), 7,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      aux_sym__log_verbose_value_token1,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_token1,
      sym__number,
  [1605] = 2,
    ACTIONS(665), 1,
      anon_sym_EQ,
    ACTIONS(515), 7,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      aux_sym__log_verbose_value_token1,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_token1,
      sym__number,
  [1618] = 4,
    ACTIONS(672), 1,
      aux_sym__log_verbose_value_token1,
    STATE(63), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(669), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(667), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1634] = 6,
    ACTIONS(675), 1,
      anon_sym_DQUOTE,
    ACTIONS(677), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(679), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(681), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(83), 1,
      aux_sym__hosts_string_repeat2,
    STATE(166), 2,
      sym__hosts_token,
      sym_variable,
  [1654] = 1,
    ACTIONS(523), 7,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      aux_sym__log_verbose_value_token1,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_token1,
      sym__number,
  [1664] = 6,
    ACTIONS(613), 1,
      anon_sym_BANG,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(413), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1684] = 3,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(683), 1,
      sym__space,
    ACTIONS(521), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1698] = 6,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(685), 1,
      anon_sym_BANG,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(315), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1718] = 2,
    ACTIONS(523), 2,
      aux_sym__log_verbose_value_token1,
      anon_sym_DOLLAR,
    ACTIONS(521), 5,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1730] = 4,
    ACTIONS(691), 1,
      aux_sym__log_verbose_value_token1,
    STATE(63), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(687), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1746] = 2,
    ACTIONS(529), 2,
      aux_sym__log_verbose_value_token1,
      anon_sym_DOLLAR,
    ACTIONS(527), 5,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1758] = 6,
    ACTIONS(693), 1,
      aux_sym_time_token1,
    ACTIONS(695), 1,
      aux_sym_time_token2,
    ACTIONS(697), 1,
      aux_sym_time_token3,
    ACTIONS(699), 1,
      aux_sym_time_token4,
    ACTIONS(701), 1,
      aux_sym_time_token5,
    ACTIONS(703), 2,
      sym__space,
      sym__eol,
  [1778] = 4,
    ACTIONS(707), 1,
      anon_sym_confirm,
    ACTIONS(709), 1,
      sym__number,
    STATE(442), 2,
      sym__boolean,
      sym_time,
    ACTIONS(705), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1794] = 6,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    ACTIONS(713), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(715), 1,
      aux_sym__file_token_token1,
    ACTIONS(717), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(81), 1,
      aux_sym__file_string_repeat2,
    STATE(180), 2,
      sym__file_token,
      sym_variable,
  [1814] = 2,
    ACTIONS(721), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(719), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1826] = 2,
    ACTIONS(725), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(723), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1838] = 5,
    ACTIONS(727), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(729), 1,
      aux_sym_string_token2,
    STATE(74), 1,
      aux_sym__file_string_repeat2,
    ACTIONS(713), 2,
      aux_sym__log_verbose_quoted_token1,
      aux_sym__file_token_token1,
    STATE(180), 2,
      sym__file_token,
      sym_variable,
  [1856] = 6,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(631), 1,
      aux_sym__log_verbose_value_token1,
    STATE(91), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(297), 1,
      sym_pattern,
    STATE(364), 1,
      sym__cnames_map,
    ACTIONS(629), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1876] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(731), 1,
      sym__space,
    ACTIONS(513), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1890] = 1,
    ACTIONS(529), 7,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      aux_sym__log_verbose_value_token1,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_token1,
      sym__number,
  [1900] = 6,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    ACTIONS(735), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(738), 1,
      aux_sym__file_token_token1,
    ACTIONS(741), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(81), 1,
      aux_sym__file_string_repeat2,
    STATE(180), 2,
      sym__file_token,
      sym_variable,
  [1920] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(744), 1,
      anon_sym_EQ,
    ACTIONS(513), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1934] = 6,
    ACTIONS(746), 1,
      anon_sym_DQUOTE,
    ACTIONS(748), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(751), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(754), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(83), 1,
      aux_sym__hosts_string_repeat2,
    STATE(166), 2,
      sym__hosts_token,
      sym_variable,
  [1954] = 3,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(757), 1,
      sym__space,
    ACTIONS(521), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1967] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(404), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1984] = 2,
    ACTIONS(759), 1,
      anon_sym_EQ,
    ACTIONS(515), 5,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [1995] = 5,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    ACTIONS(765), 1,
      aux_sym__log_verbose_value_token1,
    STATE(137), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(210), 1,
      sym__log_verbose_value,
    ACTIONS(761), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2012] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(246), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2029] = 2,
    ACTIONS(767), 1,
      sym__space,
    ACTIONS(515), 5,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [2040] = 4,
    ACTIONS(772), 1,
      aux_sym__log_verbose_value_token1,
    STATE(90), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(769), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2055] = 4,
    ACTIONS(777), 1,
      aux_sym__log_verbose_value_token1,
    STATE(90), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(687), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(775), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2070] = 6,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(783), 1,
      aux_sym__hostname_token_token1,
    STATE(102), 1,
      aux_sym__hostname_string_repeat1,
    STATE(214), 1,
      sym__hostname_token,
    STATE(422), 1,
      sym__hostname_string,
  [2089] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(264), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2106] = 4,
    ACTIONS(787), 1,
      aux_sym__log_verbose_value_token1,
    STATE(109), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(687), 2,
      sym__space,
      sym__eol,
    ACTIONS(785), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2121] = 5,
    ACTIONS(677), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(679), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(681), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(64), 1,
      aux_sym__hosts_string_repeat2,
    STATE(166), 2,
      sym__hosts_token,
      sym_variable,
  [2138] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      aux_sym__log_verbose_value_token1,
    STATE(70), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(194), 1,
      sym_pattern,
    ACTIONS(789), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2155] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(377), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2172] = 2,
    ACTIONS(793), 1,
      sym__space,
    ACTIONS(521), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [2183] = 5,
    ACTIONS(713), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(715), 1,
      aux_sym__file_token_token1,
    ACTIONS(717), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(74), 1,
      aux_sym__file_string_repeat2,
    STATE(180), 2,
      sym__file_token,
      sym_variable,
  [2200] = 2,
    ACTIONS(795), 1,
      anon_sym_EQ,
    ACTIONS(513), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [2211] = 2,
    ACTIONS(797), 1,
      sym__space,
    ACTIONS(513), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [2222] = 5,
    ACTIONS(781), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(783), 1,
      aux_sym__hostname_token_token1,
    STATE(104), 1,
      aux_sym__hostname_string_repeat1,
    STATE(214), 1,
      sym__hostname_token,
    ACTIONS(799), 2,
      sym__space,
      sym__eol,
  [2239] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(801), 1,
      sym__space,
    ACTIONS(513), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2252] = 5,
    ACTIONS(803), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(806), 1,
      aux_sym__hostname_token_token1,
    STATE(104), 1,
      aux_sym__hostname_string_repeat1,
    STATE(214), 1,
      sym__hostname_token,
    ACTIONS(809), 2,
      sym__space,
      sym__eol,
  [2269] = 2,
    ACTIONS(529), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(527), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2280] = 2,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(521), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2291] = 2,
    ACTIONS(725), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(723), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2302] = 3,
    ACTIONS(813), 1,
      anon_sym_auto,
    STATE(495), 1,
      sym__boolean,
    ACTIONS(811), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [2315] = 4,
    ACTIONS(818), 1,
      aux_sym__log_verbose_value_token1,
    STATE(109), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(667), 2,
      sym__space,
      sym__eol,
    ACTIONS(815), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2330] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(821), 1,
      sym__space,
    ACTIONS(513), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2343] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(823), 1,
      anon_sym_EQ,
    ACTIONS(513), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2356] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(366), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2373] = 3,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(825), 1,
      sym__space,
    ACTIONS(521), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2386] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(631), 1,
      aux_sym__log_verbose_value_token1,
    STATE(91), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(194), 1,
      sym_pattern,
    ACTIONS(629), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2403] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(827), 1,
      anon_sym_EQ,
    ACTIONS(513), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2416] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(472), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2433] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(473), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2450] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      aux_sym__log_verbose_value_token1,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(305), 1,
      sym_pattern,
    ACTIONS(615), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2467] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      aux_sym__log_verbose_value_token1,
    STATE(70), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(195), 1,
      sym_pattern,
    ACTIONS(789), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2484] = 2,
    ACTIONS(831), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(829), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2495] = 5,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      aux_sym__log_verbose_value_token1,
    STATE(70), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(225), 1,
      sym_pattern,
    ACTIONS(789), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2512] = 2,
    ACTIONS(833), 1,
      sym__space,
    ACTIONS(523), 5,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [2523] = 2,
    ACTIONS(725), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(723), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2533] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(835), 1,
      anon_sym_EQ,
    ACTIONS(513), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2545] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(837), 1,
      sym__space,
    ACTIONS(513), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2557] = 3,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(839), 1,
      sym__space,
    ACTIONS(521), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2569] = 5,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(845), 1,
      aux_sym__hostname_token_token1,
    STATE(138), 1,
      aux_sym__hostname_string_repeat2,
    STATE(302), 1,
      sym__hostname_token,
  [2585] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(847), 1,
      anon_sym_EQ,
    ACTIONS(513), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2597] = 2,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(521), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2607] = 4,
    ACTIONS(667), 1,
      anon_sym_COLON,
    ACTIONS(852), 1,
      aux_sym__log_verbose_value_token1,
    STATE(130), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(849), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2621] = 3,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(855), 1,
      sym__space,
    ACTIONS(521), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2633] = 3,
    ACTIONS(709), 1,
      sym__number,
    ACTIONS(857), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(496), 2,
      sym__boolean,
      sym_time,
  [2645] = 2,
    ACTIONS(529), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(527), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2655] = 3,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(859), 1,
      sym__space,
    ACTIONS(521), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2667] = 4,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    ACTIONS(865), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(139), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(861), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2681] = 2,
    ACTIONS(529), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(527), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2691] = 4,
    ACTIONS(867), 1,
      anon_sym_COLON,
    ACTIONS(871), 1,
      aux_sym__log_verbose_value_token1,
    STATE(130), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(869), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2705] = 5,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    ACTIONS(875), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(878), 1,
      aux_sym__hostname_token_token1,
    STATE(138), 1,
      aux_sym__hostname_string_repeat2,
    STATE(302), 1,
      sym__hostname_token,
  [2721] = 4,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    ACTIONS(886), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(139), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(881), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2735] = 4,
    ACTIONS(891), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(150), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(323), 1,
      sym__log_verbose_quoted,
    ACTIONS(889), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2749] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(893), 1,
      anon_sym_EQ,
    ACTIONS(513), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2761] = 4,
    ACTIONS(895), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(897), 1,
      sym_token,
    STATE(156), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(899), 2,
      sym__space,
      sym__eol,
  [2775] = 1,
    ACTIONS(521), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [2783] = 4,
    ACTIONS(891), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(150), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(420), 1,
      sym__log_verbose_quoted,
    ACTIONS(889), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2797] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(901), 1,
      sym__space,
    ACTIONS(513), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2809] = 2,
    ACTIONS(903), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(905), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2819] = 3,
    ACTIONS(907), 1,
      anon_sym_COLON,
    STATE(151), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(909), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [2831] = 4,
    ACTIONS(765), 1,
      aux_sym__log_verbose_value_token1,
    STATE(137), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(337), 1,
      sym__log_verbose_value,
    ACTIONS(761), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2845] = 3,
    ACTIONS(911), 1,
      anon_sym_COLON,
    STATE(151), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(909), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [2857] = 4,
    ACTIONS(913), 1,
      anon_sym_COLON,
    ACTIONS(917), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(155), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(915), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2871] = 3,
    ACTIONS(919), 1,
      anon_sym_COLON,
    STATE(151), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(921), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [2883] = 1,
    ACTIONS(527), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [2891] = 2,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(521), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2901] = 2,
    ACTIONS(924), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(926), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2911] = 4,
    ACTIONS(884), 1,
      anon_sym_COLON,
    ACTIONS(931), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(155), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(928), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2925] = 4,
    ACTIONS(934), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(937), 1,
      sym_token,
    STATE(156), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(940), 2,
      sym__space,
      sym__eol,
  [2939] = 1,
    ACTIONS(529), 5,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [2947] = 2,
    ACTIONS(725), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(723), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2957] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(942), 1,
      sym__space,
    ACTIONS(513), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2969] = 5,
    ACTIONS(895), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(897), 1,
      sym_token,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      aux_sym__token_string_repeat1,
    STATE(470), 1,
      sym__token_string,
  [2985] = 1,
    ACTIONS(523), 5,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [2993] = 3,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(949), 2,
      sym__space,
      sym__eol,
  [3004] = 3,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(953), 2,
      sym__space,
      sym__eol,
  [3015] = 2,
    ACTIONS(957), 1,
      sym_kex,
    ACTIONS(955), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3024] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(959), 1,
      sym__space,
    ACTIONS(513), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [3035] = 2,
    ACTIONS(963), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(961), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3044] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(965), 1,
      anon_sym_EQ,
    ACTIONS(513), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [3055] = 4,
    ACTIONS(967), 1,
      anon_sym_DQUOTE,
    ACTIONS(969), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(971), 1,
      sym_token,
    STATE(219), 1,
      aux_sym__token_string_repeat2,
  [3068] = 3,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(975), 2,
      sym__space,
      sym__eol,
  [3079] = 2,
    ACTIONS(725), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(723), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3088] = 3,
    ACTIONS(979), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(135), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(977), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3099] = 3,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(983), 2,
      sym__space,
      sym__eol,
  [3110] = 2,
    ACTIONS(987), 1,
      sym_key_sig,
    ACTIONS(985), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3119] = 3,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(983), 2,
      sym__space,
      sym__eol,
  [3130] = 4,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    ACTIONS(993), 1,
      sym__eol,
    STATE(498), 1,
      sym__sep,
  [3143] = 3,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(995), 1,
      sym__space,
    ACTIONS(521), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [3154] = 2,
    ACTIONS(999), 1,
      sym_key_sig,
    ACTIONS(997), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3163] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1003), 2,
      sym__space,
      sym__eol,
  [3174] = 2,
    STATE(147), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(1005), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [3183] = 2,
    ACTIONS(1009), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1007), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3192] = 1,
    ACTIONS(1011), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3199] = 2,
    ACTIONS(725), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(723), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3208] = 3,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1013), 2,
      sym__space,
      sym__eol,
  [3219] = 3,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1013), 2,
      sym__space,
      sym__eol,
  [3230] = 3,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1015), 2,
      sym__space,
      sym__eol,
  [3241] = 3,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1015), 2,
      sym__space,
      sym__eol,
  [3252] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1019), 2,
      sym__space,
      sym__eol,
  [3263] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1019), 2,
      sym__space,
      sym__eol,
  [3274] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1023), 2,
      sym__space,
      sym__eol,
  [3285] = 2,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(521), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3294] = 4,
    ACTIONS(1025), 1,
      aux_sym_time_token2,
    ACTIONS(1027), 1,
      aux_sym_time_token3,
    ACTIONS(1029), 1,
      aux_sym_time_token4,
    ACTIONS(1031), 1,
      aux_sym_time_token5,
  [3307] = 2,
    ACTIONS(529), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(527), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3316] = 2,
    ACTIONS(1035), 1,
      sym_cipher,
    ACTIONS(1033), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3325] = 1,
    ACTIONS(1037), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3332] = 3,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1039), 2,
      sym__space,
      sym__eol,
  [3343] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1041), 2,
      sym__space,
      sym__eol,
  [3354] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1043), 2,
      sym__space,
      sym__eol,
  [3365] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1041), 2,
      sym__space,
      sym__eol,
  [3376] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1045), 2,
      sym__space,
      sym__eol,
  [3387] = 2,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(521), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [3396] = 2,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(521), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3405] = 2,
    ACTIONS(529), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(527), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [3414] = 3,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1037), 2,
      sym__space,
      sym__eol,
  [3425] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1050), 2,
      sym__space,
      sym__eol,
  [3436] = 2,
    ACTIONS(529), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(527), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3445] = 3,
    ACTIONS(1052), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1055), 2,
      sym__space,
      sym__eol,
  [3456] = 3,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1057), 2,
      sym__space,
      sym__eol,
  [3467] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(1059), 1,
      sym__space,
    ACTIONS(513), 2,
      anon_sym_DQUOTE,
      sym_token,
  [3478] = 3,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1064), 2,
      sym__space,
      sym__eol,
  [3489] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1066), 2,
      sym__space,
      sym__eol,
  [3500] = 3,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1068), 2,
      sym__space,
      sym__eol,
  [3511] = 3,
    ACTIONS(515), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(1070), 1,
      anon_sym_EQ,
    ACTIONS(513), 2,
      anon_sym_DQUOTE,
      sym_token,
  [3522] = 4,
    ACTIONS(843), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(845), 1,
      aux_sym__hostname_token_token1,
    STATE(127), 1,
      aux_sym__hostname_string_repeat2,
    STATE(302), 1,
      sym__hostname_token,
  [3535] = 2,
    ACTIONS(1072), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(1074), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [3544] = 3,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(1076), 1,
      sym__space,
    ACTIONS(521), 2,
      anon_sym_DQUOTE,
      sym_token,
  [3555] = 3,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1078), 2,
      sym__space,
      sym__eol,
  [3566] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1083), 2,
      sym__space,
      sym__eol,
  [3577] = 2,
    ACTIONS(1085), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(1087), 3,
      sym_token,
      sym__space,
      sym__eol,
  [3586] = 4,
    ACTIONS(1089), 1,
      anon_sym_DQUOTE,
    ACTIONS(1091), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1094), 1,
      sym_token,
    STATE(219), 1,
      aux_sym__token_string_repeat2,
  [3599] = 2,
    STATE(149), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(1097), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [3608] = 3,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1099), 2,
      sym__space,
      sym__eol,
  [3619] = 3,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1104), 2,
      sym__space,
      sym__eol,
  [3630] = 3,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1106), 2,
      sym__space,
      sym__eol,
  [3641] = 3,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1108), 2,
      sym__space,
      sym__eol,
  [3652] = 3,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1110), 2,
      sym__space,
      sym__eol,
  [3663] = 2,
    STATE(483), 1,
      sym__boolean,
    ACTIONS(1112), 2,
      anon_sym_yes,
      anon_sym_no,
  [3671] = 2,
    STATE(474), 1,
      sym__boolean,
    ACTIONS(1114), 2,
      anon_sym_yes,
      anon_sym_no,
  [3679] = 1,
    ACTIONS(1116), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3685] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(73), 1,
      sym__sep,
  [3695] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(363), 1,
      sym__sep,
  [3705] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(351), 1,
      sym__sep,
  [3715] = 3,
    ACTIONS(1118), 1,
      anon_sym_EQ,
    ACTIONS(1120), 1,
      sym__space,
    STATE(116), 1,
      sym__sep,
  [3725] = 3,
    ACTIONS(1118), 1,
      anon_sym_EQ,
    ACTIONS(1120), 1,
      sym__space,
    STATE(117), 1,
      sym__sep,
  [3735] = 3,
    ACTIONS(1122), 1,
      sym__space,
    ACTIONS(1124), 1,
      sym__eol,
    STATE(296), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3745] = 3,
    ACTIONS(1118), 1,
      anon_sym_EQ,
    ACTIONS(1120), 1,
      sym__space,
    STATE(118), 1,
      sym__sep,
  [3755] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(227), 1,
      sym__sep,
  [3765] = 2,
    ACTIONS(529), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(527), 2,
      anon_sym_DQUOTE,
      sym_token,
  [3773] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(358), 1,
      sym__sep,
  [3783] = 2,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(521), 2,
      anon_sym_DQUOTE,
      sym_token,
  [3791] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(536), 1,
      sym__sep,
  [3801] = 3,
    ACTIONS(1126), 1,
      anon_sym_EQ,
    ACTIONS(1128), 1,
      sym__space,
    STATE(53), 1,
      sym__sep,
  [3811] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(355), 1,
      sym__sep,
  [3821] = 3,
    ACTIONS(1130), 1,
      anon_sym_EQ,
    ACTIONS(1132), 1,
      sym__space,
    STATE(39), 1,
      sym__sep,
  [3831] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(354), 1,
      sym__sep,
  [3841] = 3,
    ACTIONS(1134), 1,
      anon_sym_EQ,
    ACTIONS(1136), 1,
      sym__space,
    STATE(193), 1,
      sym__sep,
  [3851] = 3,
    ACTIONS(1138), 1,
      sym__space,
    ACTIONS(1140), 1,
      sym__eol,
    STATE(309), 1,
      aux_sym__ignore_unknown_repeat1,
  [3861] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(353), 1,
      sym__sep,
  [3871] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(345), 1,
      sym__sep,
  [3881] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(533), 1,
      sym__sep,
  [3891] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(544), 1,
      sym__sep,
  [3901] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(108), 1,
      sym__sep,
  [3911] = 3,
    ACTIONS(969), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(971), 1,
      sym_token,
    STATE(168), 1,
      aux_sym__token_string_repeat2,
  [3921] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(132), 1,
      sym__sep,
  [3931] = 3,
    ACTIONS(1130), 1,
      anon_sym_EQ,
    ACTIONS(1132), 1,
      sym__space,
    STATE(38), 1,
      sym__sep,
  [3941] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(340), 1,
      sym__sep,
  [3951] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(339), 1,
      sym__sep,
  [3961] = 3,
    ACTIONS(1142), 1,
      anon_sym_EQ,
    ACTIONS(1144), 1,
      sym__space,
    STATE(397), 1,
      sym__sep,
  [3971] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(226), 1,
      sym__sep,
  [3981] = 2,
    ACTIONS(529), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(527), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [3989] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(414), 1,
      sym__sep,
  [3999] = 2,
    ACTIONS(523), 1,
      aux_sym__log_verbose_value_token1,
    ACTIONS(521), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [4007] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(334), 1,
      sym__sep,
  [4017] = 3,
    ACTIONS(1146), 1,
      anon_sym_EQ,
    ACTIONS(1148), 1,
      sym__space,
    STATE(48), 1,
      sym__sep,
  [4027] = 3,
    ACTIONS(1150), 1,
      sym__space,
    ACTIONS(1152), 1,
      sym__eol,
    STATE(331), 1,
      aux_sym_host_declaration_repeat1,
  [4037] = 2,
    ACTIONS(1154), 1,
      sym__space,
    ACTIONS(523), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [4045] = 2,
    ACTIONS(1156), 1,
      anon_sym_EQ,
    ACTIONS(515), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [4053] = 2,
    ACTIONS(1158), 1,
      sym__space,
    ACTIONS(515), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [4061] = 3,
    ACTIONS(1160), 1,
      sym__space,
    ACTIONS(1162), 1,
      sym__eol,
    STATE(343), 1,
      aux_sym_host_declaration_repeat1,
  [4071] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(333), 1,
      sym__sep,
  [4081] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(415), 1,
      sym__sep,
  [4091] = 2,
    ACTIONS(1164), 1,
      sym__number,
    ACTIONS(1166), 2,
      sym__space,
      sym__eol,
  [4099] = 2,
    ACTIONS(1168), 1,
      sym__number,
    ACTIONS(1166), 2,
      sym__space,
      sym__eol,
  [4107] = 2,
    ACTIONS(1170), 1,
      sym__number,
    ACTIONS(1166), 2,
      sym__space,
      sym__eol,
  [4115] = 2,
    ACTIONS(1172), 1,
      sym__number,
    ACTIONS(1166), 2,
      sym__space,
      sym__eol,
  [4123] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(330), 1,
      sym__sep,
  [4133] = 3,
    ACTIONS(1174), 1,
      anon_sym_EQ,
    ACTIONS(1176), 1,
      sym__space,
    STATE(329), 1,
      sym__sep,
  [4143] = 3,
    ACTIONS(1178), 1,
      sym__space,
    ACTIONS(1180), 1,
      sym__eol,
    STATE(350), 1,
      aux_sym__canonical_domains_repeat1,
  [4153] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(328), 1,
      sym__sep,
  [4163] = 3,
    ACTIONS(1182), 1,
      sym__space,
    ACTIONS(1184), 1,
      sym__eol,
    STATE(352), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4173] = 3,
    ACTIONS(521), 1,
      anon_sym_none,
    ACTIONS(523), 1,
      aux_sym__escape_char_token2,
    ACTIONS(1186), 1,
      sym__space,
  [4183] = 3,
    ACTIONS(513), 1,
      anon_sym_none,
    ACTIONS(515), 1,
      aux_sym__escape_char_token2,
    ACTIONS(1188), 1,
      anon_sym_EQ,
  [4193] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_COLON,
    STATE(356), 1,
      aux_sym__cnames_map_repeat1,
  [4203] = 3,
    ACTIONS(513), 1,
      anon_sym_none,
    ACTIONS(515), 1,
      aux_sym__escape_char_token2,
    ACTIONS(1194), 1,
      sym__space,
  [4213] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(327), 1,
      sym__sep,
  [4223] = 3,
    ACTIONS(1134), 1,
      anon_sym_EQ,
    ACTIONS(1136), 1,
      sym__space,
    STATE(177), 1,
      sym__sep,
  [4233] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(326), 1,
      sym__sep,
  [4243] = 3,
    ACTIONS(1134), 1,
      anon_sym_EQ,
    ACTIONS(1136), 1,
      sym__space,
    STATE(173), 1,
      sym__sep,
  [4253] = 3,
    ACTIONS(1174), 1,
      anon_sym_EQ,
    ACTIONS(1176), 1,
      sym__space,
    STATE(325), 1,
      sym__sep,
  [4263] = 3,
    ACTIONS(1196), 1,
      anon_sym_EQ,
    ACTIONS(1198), 1,
      sym__space,
    STATE(92), 1,
      sym__sep,
  [4273] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(324), 1,
      sym__sep,
  [4283] = 3,
    ACTIONS(1200), 1,
      anon_sym_EQ,
    ACTIONS(1202), 1,
      sym__space,
    STATE(36), 1,
      sym__sep,
  [4293] = 3,
    ACTIONS(1204), 1,
      anon_sym_EQ,
    ACTIONS(1206), 1,
      sym__space,
    STATE(52), 1,
      sym__sep,
  [4303] = 3,
    ACTIONS(1118), 1,
      anon_sym_EQ,
    ACTIONS(1120), 1,
      sym__space,
    STATE(88), 1,
      sym__sep,
  [4313] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(322), 1,
      sym__sep,
  [4323] = 3,
    ACTIONS(539), 1,
      aux_sym_string_token1,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    STATE(367), 1,
      sym_string,
  [4333] = 3,
    ACTIONS(1122), 1,
      sym__space,
    ACTIONS(1208), 1,
      sym__eol,
    STATE(347), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4343] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_COLON,
    STATE(282), 1,
      aux_sym__cnames_map_repeat1,
  [4353] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(320), 1,
      sym__sep,
  [4363] = 3,
    ACTIONS(1182), 1,
      sym__space,
    ACTIONS(1212), 1,
      sym__eol,
    STATE(279), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4373] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(164), 1,
      sym__sep,
  [4383] = 3,
    ACTIONS(1214), 1,
      anon_sym_EQ,
    ACTIONS(1216), 1,
      sym__space,
    STATE(47), 1,
      sym__sep,
  [4393] = 2,
    ACTIONS(1220), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1218), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [4401] = 3,
    ACTIONS(1222), 1,
      anon_sym_EQ,
    ACTIONS(1224), 1,
      sym__space,
    STATE(160), 1,
      sym__sep,
  [4411] = 3,
    ACTIONS(1226), 1,
      anon_sym_EQ,
    ACTIONS(1228), 1,
      sym__space,
    STATE(35), 1,
      sym__sep,
  [4421] = 3,
    ACTIONS(1178), 1,
      sym__space,
    ACTIONS(1230), 1,
      sym__eol,
    STATE(277), 1,
      aux_sym__canonical_domains_repeat1,
  [4431] = 3,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      sym__space,
    STATE(501), 1,
      sym__sep,
  [4441] = 3,
    ACTIONS(1118), 1,
      anon_sym_EQ,
    ACTIONS(1120), 1,
      sym__space,
    STATE(87), 1,
      sym__sep,
  [4451] = 2,
    ACTIONS(1232), 1,
      sym__number,
    ACTIONS(1234), 2,
      sym__space,
      sym__eol,
  [4459] = 3,
    ACTIONS(1138), 1,
      sym__space,
    ACTIONS(1236), 1,
      sym__eol,
    STATE(342), 1,
      aux_sym__ignore_unknown_repeat1,
  [4469] = 2,
    ACTIONS(1240), 1,
      sym__number,
    ACTIONS(1238), 2,
      anon_sym_none,
      sym_ipqos,
  [4477] = 2,
    ACTIONS(1244), 1,
      sym__number,
    ACTIONS(1242), 2,
      anon_sym_none,
      sym_ipqos,
  [4485] = 2,
    ACTIONS(1246), 1,
      sym__number,
    ACTIONS(1248), 2,
      sym__space,
      sym__eol,
  [4493] = 2,
    ACTIONS(1250), 1,
      sym__number,
    ACTIONS(1248), 2,
      sym__space,
      sym__eol,
  [4501] = 1,
    ACTIONS(1252), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4507] = 3,
    ACTIONS(1254), 1,
      sym__space,
    ACTIONS(1256), 1,
      sym__eol,
    STATE(268), 1,
      aux_sym_host_declaration_repeat1,
  [4517] = 1,
    ACTIONS(1258), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4523] = 3,
    ACTIONS(1260), 1,
      aux_sym_time_token3,
    ACTIONS(1262), 1,
      aux_sym_time_token4,
    ACTIONS(1264), 1,
      aux_sym_time_token5,
  [4533] = 2,
    ACTIONS(1268), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1266), 2,
      anon_sym_DQUOTE,
      sym_token,
  [4541] = 3,
    ACTIONS(1270), 1,
      anon_sym_COMMA,
    ACTIONS(1273), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      aux_sym__log_verbose_repeat2,
  [4551] = 2,
    STATE(451), 1,
      sym__boolean,
    ACTIONS(1275), 2,
      anon_sym_yes,
      anon_sym_no,
  [4559] = 2,
    ACTIONS(1277), 1,
      sym__number,
    ACTIONS(1279), 2,
      sym__space,
      sym__eol,
  [4567] = 2,
    ACTIONS(1283), 1,
      sym__number,
    ACTIONS(1281), 2,
      anon_sym_none,
      sym_ipqos,
  [4575] = 3,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1287), 1,
      anon_sym_DQUOTE,
    STATE(338), 1,
      aux_sym__log_verbose_repeat2,
  [4585] = 2,
    STATE(430), 1,
      sym__boolean,
    ACTIONS(1289), 2,
      anon_sym_yes,
      anon_sym_no,
  [4593] = 3,
    ACTIONS(539), 1,
      aux_sym_string_token1,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    STATE(419), 1,
      sym_string,
  [4603] = 2,
    STATE(406), 1,
      sym__boolean,
    ACTIONS(1291), 2,
      anon_sym_yes,
      anon_sym_no,
  [4611] = 2,
    STATE(391), 1,
      sym__boolean,
    ACTIONS(1293), 2,
      anon_sym_yes,
      anon_sym_no,
  [4619] = 2,
    STATE(390), 1,
      sym__boolean,
    ACTIONS(1295), 2,
      anon_sym_yes,
      anon_sym_no,
  [4627] = 3,
    ACTIONS(539), 1,
      aux_sym_string_token1,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    STATE(234), 1,
      sym_string,
  [4637] = 2,
    STATE(385), 1,
      sym__boolean,
    ACTIONS(1297), 2,
      anon_sym_yes,
      anon_sym_no,
  [4645] = 3,
    ACTIONS(1299), 1,
      sym__space,
    ACTIONS(1301), 1,
      sym__eol,
    STATE(343), 1,
      aux_sym_host_declaration_repeat1,
  [4655] = 2,
    ACTIONS(1303), 1,
      sym__number,
    ACTIONS(1279), 2,
      sym__space,
      sym__eol,
  [4663] = 2,
    STATE(368), 1,
      sym__boolean,
    ACTIONS(1305), 2,
      anon_sym_yes,
      anon_sym_no,
  [4671] = 2,
    STATE(481), 1,
      sym__boolean,
    ACTIONS(1307), 2,
      anon_sym_yes,
      anon_sym_no,
  [4679] = 2,
    ACTIONS(1309), 1,
      sym__number,
    ACTIONS(1279), 2,
      sym__space,
      sym__eol,
  [4687] = 3,
    ACTIONS(1311), 1,
      anon_sym_EQ,
    ACTIONS(1313), 1,
      sym__space,
    STATE(68), 1,
      sym__sep,
  [4697] = 1,
    ACTIONS(1315), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4703] = 3,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1317), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      aux_sym__log_verbose_repeat2,
  [4713] = 2,
    STATE(489), 1,
      sym__boolean,
    ACTIONS(1319), 2,
      anon_sym_yes,
      anon_sym_no,
  [4721] = 2,
    STATE(500), 1,
      sym__boolean,
    ACTIONS(1321), 2,
      anon_sym_yes,
      anon_sym_no,
  [4729] = 1,
    ACTIONS(1083), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4735] = 3,
    ACTIONS(1323), 1,
      sym__space,
    ACTIONS(1326), 1,
      sym__eol,
    STATE(342), 1,
      aux_sym__ignore_unknown_repeat1,
  [4745] = 3,
    ACTIONS(1328), 1,
      sym__space,
    ACTIONS(1331), 1,
      sym__eol,
    STATE(343), 1,
      aux_sym_host_declaration_repeat1,
  [4755] = 1,
    ACTIONS(1064), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4761] = 2,
    STATE(490), 1,
      sym__boolean,
    ACTIONS(1333), 2,
      anon_sym_yes,
      anon_sym_no,
  [4769] = 3,
    ACTIONS(1027), 1,
      aux_sym_time_token3,
    ACTIONS(1029), 1,
      aux_sym_time_token4,
    ACTIONS(1031), 1,
      aux_sym_time_token5,
  [4779] = 3,
    ACTIONS(1335), 1,
      sym__space,
    ACTIONS(1338), 1,
      sym__eol,
    STATE(347), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4789] = 1,
    ACTIONS(1340), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [4795] = 1,
    ACTIONS(1055), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4801] = 3,
    ACTIONS(1342), 1,
      sym__space,
    ACTIONS(1345), 1,
      sym__eol,
    STATE(350), 1,
      aux_sym__canonical_domains_repeat1,
  [4811] = 2,
    STATE(471), 1,
      sym__boolean,
    ACTIONS(1347), 2,
      anon_sym_yes,
      anon_sym_no,
  [4819] = 3,
    ACTIONS(1349), 1,
      sym__space,
    ACTIONS(1352), 1,
      sym__eol,
    STATE(352), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4829] = 2,
    STATE(488), 1,
      sym__boolean,
    ACTIONS(1354), 2,
      anon_sym_yes,
      anon_sym_no,
  [4837] = 2,
    STATE(486), 1,
      sym__boolean,
    ACTIONS(1356), 2,
      anon_sym_yes,
      anon_sym_no,
  [4845] = 2,
    ACTIONS(1360), 1,
      sym_sig,
    ACTIONS(1358), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4853] = 3,
    ACTIONS(1037), 1,
      anon_sym_COLON,
    ACTIONS(1362), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym__cnames_map_repeat1,
  [4863] = 1,
    ACTIONS(949), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4869] = 2,
    STATE(475), 1,
      sym__boolean,
    ACTIONS(1365), 2,
      anon_sym_yes,
      anon_sym_no,
  [4877] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [4882] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [4887] = 1,
    ACTIONS(1369), 2,
      sym__space,
      sym__eol,
  [4892] = 2,
    ACTIONS(1371), 1,
      sym__space,
    ACTIONS(1373), 1,
      sym__eol,
  [4899] = 2,
    ACTIONS(1375), 1,
      anon_sym_inet,
    ACTIONS(1377), 1,
      anon_sym_inet6,
  [4906] = 1,
    ACTIONS(1379), 2,
      sym__space,
      sym__eol,
  [4911] = 1,
    ACTIONS(1381), 2,
      sym__space,
      sym__eol,
  [4916] = 1,
    ACTIONS(1383), 2,
      sym__space,
      sym__eol,
  [4921] = 1,
    ACTIONS(1385), 2,
      sym__space,
      sym__eol,
  [4926] = 1,
    ACTIONS(1387), 2,
      sym__space,
      sym__eol,
  [4931] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [4936] = 2,
    ACTIONS(1029), 1,
      aux_sym_time_token4,
    ACTIONS(1031), 1,
      aux_sym_time_token5,
  [4943] = 1,
    ACTIONS(1389), 2,
      sym__space,
      sym__eol,
  [4948] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [4953] = 1,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [4958] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [4963] = 1,
    ACTIONS(1393), 2,
      sym__space,
      sym__eol,
  [4968] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [4973] = 1,
    ACTIONS(1326), 2,
      sym__space,
      sym__eol,
  [4978] = 1,
    ACTIONS(1395), 2,
      sym__space,
      sym__eol,
  [4983] = 1,
    ACTIONS(1397), 2,
      sym__space,
      sym__eol,
  [4988] = 1,
    ACTIONS(1399), 2,
      sym__space,
      sym__eol,
  [4993] = 1,
    ACTIONS(1401), 2,
      sym__space,
      sym__eol,
  [4998] = 1,
    ACTIONS(1403), 2,
      sym__space,
      sym__eol,
  [5003] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5008] = 1,
    ACTIONS(1405), 2,
      sym__space,
      sym__eol,
  [5013] = 1,
    ACTIONS(1407), 2,
      sym__space,
      sym__eol,
  [5018] = 1,
    ACTIONS(1409), 2,
      sym__space,
      sym__eol,
  [5023] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5028] = 1,
    ACTIONS(1411), 2,
      sym__space,
      sym__eol,
  [5033] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5038] = 1,
    ACTIONS(1413), 2,
      sym__space,
      sym__eol,
  [5043] = 1,
    ACTIONS(1415), 2,
      sym__space,
      sym__eol,
  [5048] = 1,
    ACTIONS(1417), 2,
      sym__space,
      sym__eol,
  [5053] = 1,
    ACTIONS(1419), 2,
      sym__space,
      sym__eol,
  [5058] = 1,
    ACTIONS(1421), 2,
      sym__space,
      sym__eol,
  [5063] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5068] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5073] = 2,
    ACTIONS(1423), 1,
      anon_sym_none,
    ACTIONS(1425), 1,
      aux_sym__escape_char_token2,
  [5080] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5085] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5090] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5095] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5100] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5105] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5110] = 1,
    ACTIONS(1427), 2,
      sym__space,
      sym__eol,
  [5115] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5120] = 1,
    ACTIONS(1429), 2,
      sym__space,
      sym__eol,
  [5125] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5130] = 2,
    ACTIONS(1431), 1,
      sym__space,
    ACTIONS(1433), 1,
      sym__eol,
  [5137] = 1,
    ACTIONS(1435), 2,
      sym__space,
      sym__eol,
  [5142] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5147] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5152] = 1,
    ACTIONS(1419), 2,
      sym__space,
      sym__eol,
  [5157] = 1,
    ACTIONS(1437), 2,
      sym__space,
      sym__eol,
  [5162] = 1,
    ACTIONS(1439), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [5167] = 2,
    ACTIONS(709), 1,
      sym__number,
    STATE(384), 1,
      sym_time,
  [5174] = 1,
    ACTIONS(1279), 2,
      sym__space,
      sym__eol,
  [5179] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5184] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5189] = 1,
    ACTIONS(1441), 2,
      sym__space,
      sym__eol,
  [5194] = 1,
    ACTIONS(1443), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [5199] = 1,
    ACTIONS(1445), 2,
      sym__space,
      sym__eol,
  [5204] = 1,
    ACTIONS(1447), 2,
      sym__space,
      sym__eol,
  [5209] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5214] = 2,
    ACTIONS(1449), 1,
      anon_sym_STAR,
    ACTIONS(1451), 1,
      sym__number,
  [5221] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5226] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5231] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5236] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5241] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5246] = 1,
    ACTIONS(1453), 2,
      sym__space,
      sym__eol,
  [5251] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5256] = 1,
    ACTIONS(1455), 2,
      sym__space,
      sym__eol,
  [5261] = 2,
    ACTIONS(1262), 1,
      aux_sym_time_token4,
    ACTIONS(1264), 1,
      aux_sym_time_token5,
  [5268] = 1,
    ACTIONS(1457), 2,
      sym__space,
      sym__eol,
  [5273] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5278] = 1,
    ACTIONS(1459), 2,
      sym__space,
      sym__eol,
  [5283] = 2,
    ACTIONS(1461), 1,
      anon_sym_STAR,
    ACTIONS(1463), 1,
      sym__number,
  [5290] = 1,
    ACTIONS(1465), 2,
      sym__space,
      sym__eol,
  [5295] = 2,
    ACTIONS(1467), 1,
      sym__space,
    ACTIONS(1469), 1,
      sym__eol,
  [5302] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5307] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5312] = 1,
    ACTIONS(993), 2,
      sym__space,
      sym__eol,
  [5317] = 2,
    ACTIONS(1471), 1,
      sym__space,
    ACTIONS(1473), 1,
      sym__eol,
  [5324] = 1,
    ACTIONS(1248), 2,
      sym__space,
      sym__eol,
  [5329] = 1,
    ACTIONS(1475), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [5334] = 1,
    ACTIONS(1477), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [5339] = 2,
    ACTIONS(1479), 1,
      aux_sym_time_token4,
    ACTIONS(1481), 1,
      aux_sym_time_token5,
  [5346] = 2,
    ACTIONS(1483), 1,
      sym__space,
    ACTIONS(1485), 1,
      sym__eol,
  [5353] = 1,
    ACTIONS(1487), 2,
      sym__space,
      sym__eol,
  [5358] = 1,
    ACTIONS(1234), 2,
      sym__space,
      sym__eol,
  [5363] = 1,
    ACTIONS(1489), 2,
      sym__space,
      sym__eol,
  [5368] = 1,
    ACTIONS(1491), 2,
      sym__space,
      sym__eol,
  [5373] = 1,
    ACTIONS(1493), 2,
      sym__space,
      sym__eol,
  [5378] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5383] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5388] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5393] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5398] = 1,
    ACTIONS(1495), 2,
      sym__space,
      sym__eol,
  [5403] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5408] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5413] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5418] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5423] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5428] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5433] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5438] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5443] = 1,
    ACTIONS(1367), 2,
      sym__space,
      sym__eol,
  [5448] = 2,
    ACTIONS(457), 1,
      sym__space,
    ACTIONS(459), 1,
      sym__eol,
  [5455] = 1,
    ACTIONS(1497), 2,
      sym__space,
      sym__eol,
  [5460] = 1,
    ACTIONS(1499), 2,
      sym__space,
      sym__eol,
  [5465] = 1,
    ACTIONS(1501), 2,
      sym__space,
      sym__eol,
  [5470] = 1,
    ACTIONS(1503), 2,
      sym__space,
      sym__eol,
  [5475] = 1,
    ACTIONS(1505), 2,
      sym__space,
      sym__eol,
  [5480] = 1,
    ACTIONS(1507), 2,
      sym__space,
      sym__eol,
  [5485] = 1,
    ACTIONS(1509), 2,
      sym__space,
      sym__eol,
  [5490] = 1,
    ACTIONS(1511), 2,
      sym__space,
      sym__eol,
  [5495] = 1,
    ACTIONS(1513), 2,
      sym__space,
      sym__eol,
  [5500] = 1,
    ACTIONS(1515), 2,
      sym__space,
      sym__eol,
  [5505] = 1,
    ACTIONS(1517), 2,
      sym__space,
      sym__eol,
  [5510] = 1,
    ACTIONS(1519), 2,
      sym__space,
      sym__eol,
  [5515] = 1,
    ACTIONS(1521), 2,
      sym__space,
      sym__eol,
  [5520] = 1,
    ACTIONS(1523), 2,
      sym__space,
      sym__eol,
  [5525] = 1,
    ACTIONS(1525), 2,
      sym__space,
      sym__eol,
  [5530] = 1,
    ACTIONS(1527), 2,
      sym__space,
      sym__eol,
  [5535] = 1,
    ACTIONS(1529), 2,
      sym__space,
      sym__eol,
  [5540] = 1,
    ACTIONS(1531), 2,
      sym__space,
      sym__eol,
  [5545] = 1,
    ACTIONS(529), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [5550] = 1,
    ACTIONS(1533), 2,
      sym__space,
      sym__eol,
  [5555] = 1,
    ACTIONS(1535), 2,
      sym__space,
      sym__eol,
  [5560] = 1,
    ACTIONS(1537), 2,
      sym__space,
      sym__eol,
  [5565] = 2,
    ACTIONS(521), 1,
      anon_sym_none,
    ACTIONS(523), 1,
      aux_sym__escape_char_token2,
  [5572] = 1,
    ACTIONS(523), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [5577] = 2,
    ACTIONS(527), 1,
      anon_sym_none,
    ACTIONS(529), 1,
      aux_sym__escape_char_token2,
  [5584] = 1,
    ACTIONS(1539), 2,
      sym__space,
      sym__eol,
  [5589] = 1,
    ACTIONS(1541), 2,
      sym__space,
      sym__eol,
  [5594] = 1,
    ACTIONS(1543), 2,
      sym__space,
      sym__eol,
  [5599] = 1,
    ACTIONS(1166), 2,
      sym__space,
      sym__eol,
  [5604] = 2,
    ACTIONS(709), 1,
      sym__number,
    STATE(378), 1,
      sym_time,
  [5611] = 1,
    ACTIONS(1545), 2,
      sym__space,
      sym__eol,
  [5616] = 1,
    ACTIONS(1547), 2,
      sym__space,
      sym__eol,
  [5621] = 1,
    ACTIONS(1549), 1,
      sym_verbosity,
  [5625] = 1,
    ACTIONS(1551), 1,
      sym__space,
  [5629] = 1,
    ACTIONS(1553), 1,
      sym_cipher,
  [5633] = 1,
    ACTIONS(1555), 1,
      anon_sym_RBRACE,
  [5637] = 1,
    ACTIONS(1557), 1,
      sym__var_name,
  [5641] = 1,
    ACTIONS(1559), 1,
      sym__eol,
  [5645] = 1,
    ACTIONS(1561), 1,
      sym_cipher,
  [5649] = 1,
    ACTIONS(1563), 1,
      sym__number,
  [5653] = 1,
    ACTIONS(1565), 1,
      aux_sym_string_token2,
  [5657] = 1,
    ACTIONS(1567), 1,
      anon_sym_DQUOTE,
  [5661] = 1,
    ACTIONS(1569), 1,
      sym_key_sig,
  [5665] = 1,
    ACTIONS(1571), 1,
      sym__eol,
  [5669] = 1,
    ACTIONS(1573), 1,
      sym__space,
  [5673] = 1,
    ACTIONS(1575), 1,
      anon_sym_COLON,
  [5677] = 1,
    ACTIONS(459), 1,
      sym__eol,
  [5681] = 1,
    ACTIONS(1577), 1,
      ts_builtin_sym_end,
  [5685] = 1,
    ACTIONS(1579), 1,
      sym_kex,
  [5689] = 1,
    ACTIONS(1581), 1,
      aux_sym_time_token5,
  [5693] = 1,
    ACTIONS(1481), 1,
      aux_sym_time_token5,
  [5697] = 1,
    ACTIONS(1583), 1,
      sym_kex,
  [5701] = 1,
    ACTIONS(1469), 1,
      sym__eol,
  [5705] = 1,
    ACTIONS(1264), 1,
      aux_sym_time_token5,
  [5709] = 1,
    ACTIONS(1585), 1,
      sym__var_name,
  [5713] = 1,
    ACTIONS(1587), 1,
      sym_sig,
  [5717] = 1,
    ACTIONS(1589), 1,
      sym_sig,
  [5721] = 1,
    ACTIONS(1591), 1,
      sym__number,
  [5725] = 1,
    ACTIONS(1593), 1,
      sym_key_sig,
  [5729] = 1,
    ACTIONS(1433), 1,
      sym__eol,
  [5733] = 1,
    ACTIONS(1595), 1,
      sym_key_sig,
  [5737] = 1,
    ACTIONS(1597), 1,
      anon_sym_COLON,
  [5741] = 1,
    ACTIONS(1599), 1,
      sym__space,
  [5745] = 1,
    ACTIONS(1601), 1,
      sym__var_name,
  [5749] = 1,
    ACTIONS(1603), 1,
      sym__number,
  [5753] = 1,
    ACTIONS(1031), 1,
      aux_sym_time_token5,
  [5757] = 1,
    ACTIONS(1605), 1,
      anon_sym_RBRACE,
  [5761] = 1,
    ACTIONS(1607), 1,
      sym__number,
  [5765] = 1,
    ACTIONS(1609), 1,
      anon_sym_RBRACE,
  [5769] = 1,
    ACTIONS(1611), 1,
      anon_sym_RBRACE,
  [5773] = 1,
    ACTIONS(1613), 1,
      anon_sym_RBRACE,
  [5777] = 1,
    ACTIONS(1615), 1,
      anon_sym_RBRACE,
  [5781] = 1,
    ACTIONS(1617), 1,
      sym__var_name,
  [5785] = 1,
    ACTIONS(1619), 1,
      sym__var_name,
  [5789] = 1,
    ACTIONS(1621), 1,
      sym__var_name,
  [5793] = 1,
    ACTIONS(1623), 1,
      sym__number,
  [5797] = 1,
    ACTIONS(1625), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 63,
  [SMALL_STATE(18)] = 126,
  [SMALL_STATE(19)] = 189,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 315,
  [SMALL_STATE(22)] = 378,
  [SMALL_STATE(23)] = 441,
  [SMALL_STATE(24)] = 504,
  [SMALL_STATE(25)] = 567,
  [SMALL_STATE(26)] = 630,
  [SMALL_STATE(27)] = 693,
  [SMALL_STATE(28)] = 756,
  [SMALL_STATE(29)] = 819,
  [SMALL_STATE(30)] = 882,
  [SMALL_STATE(31)] = 909,
  [SMALL_STATE(32)] = 936,
  [SMALL_STATE(33)] = 963,
  [SMALL_STATE(34)] = 987,
  [SMALL_STATE(35)] = 1011,
  [SMALL_STATE(36)] = 1045,
  [SMALL_STATE(37)] = 1078,
  [SMALL_STATE(38)] = 1109,
  [SMALL_STATE(39)] = 1134,
  [SMALL_STATE(40)] = 1159,
  [SMALL_STATE(41)] = 1182,
  [SMALL_STATE(42)] = 1205,
  [SMALL_STATE(43)] = 1227,
  [SMALL_STATE(44)] = 1249,
  [SMALL_STATE(45)] = 1270,
  [SMALL_STATE(46)] = 1291,
  [SMALL_STATE(47)] = 1304,
  [SMALL_STATE(48)] = 1327,
  [SMALL_STATE(49)] = 1348,
  [SMALL_STATE(50)] = 1371,
  [SMALL_STATE(51)] = 1394,
  [SMALL_STATE(52)] = 1417,
  [SMALL_STATE(53)] = 1440,
  [SMALL_STATE(54)] = 1463,
  [SMALL_STATE(55)] = 1478,
  [SMALL_STATE(56)] = 1497,
  [SMALL_STATE(57)] = 1518,
  [SMALL_STATE(58)] = 1533,
  [SMALL_STATE(59)] = 1548,
  [SMALL_STATE(60)] = 1571,
  [SMALL_STATE(61)] = 1592,
  [SMALL_STATE(62)] = 1605,
  [SMALL_STATE(63)] = 1618,
  [SMALL_STATE(64)] = 1634,
  [SMALL_STATE(65)] = 1654,
  [SMALL_STATE(66)] = 1664,
  [SMALL_STATE(67)] = 1684,
  [SMALL_STATE(68)] = 1698,
  [SMALL_STATE(69)] = 1718,
  [SMALL_STATE(70)] = 1730,
  [SMALL_STATE(71)] = 1746,
  [SMALL_STATE(72)] = 1758,
  [SMALL_STATE(73)] = 1778,
  [SMALL_STATE(74)] = 1794,
  [SMALL_STATE(75)] = 1814,
  [SMALL_STATE(76)] = 1826,
  [SMALL_STATE(77)] = 1838,
  [SMALL_STATE(78)] = 1856,
  [SMALL_STATE(79)] = 1876,
  [SMALL_STATE(80)] = 1890,
  [SMALL_STATE(81)] = 1900,
  [SMALL_STATE(82)] = 1920,
  [SMALL_STATE(83)] = 1934,
  [SMALL_STATE(84)] = 1954,
  [SMALL_STATE(85)] = 1967,
  [SMALL_STATE(86)] = 1984,
  [SMALL_STATE(87)] = 1995,
  [SMALL_STATE(88)] = 2012,
  [SMALL_STATE(89)] = 2029,
  [SMALL_STATE(90)] = 2040,
  [SMALL_STATE(91)] = 2055,
  [SMALL_STATE(92)] = 2070,
  [SMALL_STATE(93)] = 2089,
  [SMALL_STATE(94)] = 2106,
  [SMALL_STATE(95)] = 2121,
  [SMALL_STATE(96)] = 2138,
  [SMALL_STATE(97)] = 2155,
  [SMALL_STATE(98)] = 2172,
  [SMALL_STATE(99)] = 2183,
  [SMALL_STATE(100)] = 2200,
  [SMALL_STATE(101)] = 2211,
  [SMALL_STATE(102)] = 2222,
  [SMALL_STATE(103)] = 2239,
  [SMALL_STATE(104)] = 2252,
  [SMALL_STATE(105)] = 2269,
  [SMALL_STATE(106)] = 2280,
  [SMALL_STATE(107)] = 2291,
  [SMALL_STATE(108)] = 2302,
  [SMALL_STATE(109)] = 2315,
  [SMALL_STATE(110)] = 2330,
  [SMALL_STATE(111)] = 2343,
  [SMALL_STATE(112)] = 2356,
  [SMALL_STATE(113)] = 2373,
  [SMALL_STATE(114)] = 2386,
  [SMALL_STATE(115)] = 2403,
  [SMALL_STATE(116)] = 2416,
  [SMALL_STATE(117)] = 2433,
  [SMALL_STATE(118)] = 2450,
  [SMALL_STATE(119)] = 2467,
  [SMALL_STATE(120)] = 2484,
  [SMALL_STATE(121)] = 2495,
  [SMALL_STATE(122)] = 2512,
  [SMALL_STATE(123)] = 2523,
  [SMALL_STATE(124)] = 2533,
  [SMALL_STATE(125)] = 2545,
  [SMALL_STATE(126)] = 2557,
  [SMALL_STATE(127)] = 2569,
  [SMALL_STATE(128)] = 2585,
  [SMALL_STATE(129)] = 2597,
  [SMALL_STATE(130)] = 2607,
  [SMALL_STATE(131)] = 2621,
  [SMALL_STATE(132)] = 2633,
  [SMALL_STATE(133)] = 2645,
  [SMALL_STATE(134)] = 2655,
  [SMALL_STATE(135)] = 2667,
  [SMALL_STATE(136)] = 2681,
  [SMALL_STATE(137)] = 2691,
  [SMALL_STATE(138)] = 2705,
  [SMALL_STATE(139)] = 2721,
  [SMALL_STATE(140)] = 2735,
  [SMALL_STATE(141)] = 2749,
  [SMALL_STATE(142)] = 2761,
  [SMALL_STATE(143)] = 2775,
  [SMALL_STATE(144)] = 2783,
  [SMALL_STATE(145)] = 2797,
  [SMALL_STATE(146)] = 2809,
  [SMALL_STATE(147)] = 2819,
  [SMALL_STATE(148)] = 2831,
  [SMALL_STATE(149)] = 2845,
  [SMALL_STATE(150)] = 2857,
  [SMALL_STATE(151)] = 2871,
  [SMALL_STATE(152)] = 2883,
  [SMALL_STATE(153)] = 2891,
  [SMALL_STATE(154)] = 2901,
  [SMALL_STATE(155)] = 2911,
  [SMALL_STATE(156)] = 2925,
  [SMALL_STATE(157)] = 2939,
  [SMALL_STATE(158)] = 2947,
  [SMALL_STATE(159)] = 2957,
  [SMALL_STATE(160)] = 2969,
  [SMALL_STATE(161)] = 2985,
  [SMALL_STATE(162)] = 2993,
  [SMALL_STATE(163)] = 3004,
  [SMALL_STATE(164)] = 3015,
  [SMALL_STATE(165)] = 3024,
  [SMALL_STATE(166)] = 3035,
  [SMALL_STATE(167)] = 3044,
  [SMALL_STATE(168)] = 3055,
  [SMALL_STATE(169)] = 3068,
  [SMALL_STATE(170)] = 3079,
  [SMALL_STATE(171)] = 3088,
  [SMALL_STATE(172)] = 3099,
  [SMALL_STATE(173)] = 3110,
  [SMALL_STATE(174)] = 3119,
  [SMALL_STATE(175)] = 3130,
  [SMALL_STATE(176)] = 3143,
  [SMALL_STATE(177)] = 3154,
  [SMALL_STATE(178)] = 3163,
  [SMALL_STATE(179)] = 3174,
  [SMALL_STATE(180)] = 3183,
  [SMALL_STATE(181)] = 3192,
  [SMALL_STATE(182)] = 3199,
  [SMALL_STATE(183)] = 3208,
  [SMALL_STATE(184)] = 3219,
  [SMALL_STATE(185)] = 3230,
  [SMALL_STATE(186)] = 3241,
  [SMALL_STATE(187)] = 3252,
  [SMALL_STATE(188)] = 3263,
  [SMALL_STATE(189)] = 3274,
  [SMALL_STATE(190)] = 3285,
  [SMALL_STATE(191)] = 3294,
  [SMALL_STATE(192)] = 3307,
  [SMALL_STATE(193)] = 3316,
  [SMALL_STATE(194)] = 3325,
  [SMALL_STATE(195)] = 3332,
  [SMALL_STATE(196)] = 3343,
  [SMALL_STATE(197)] = 3354,
  [SMALL_STATE(198)] = 3365,
  [SMALL_STATE(199)] = 3376,
  [SMALL_STATE(200)] = 3387,
  [SMALL_STATE(201)] = 3396,
  [SMALL_STATE(202)] = 3405,
  [SMALL_STATE(203)] = 3414,
  [SMALL_STATE(204)] = 3425,
  [SMALL_STATE(205)] = 3436,
  [SMALL_STATE(206)] = 3445,
  [SMALL_STATE(207)] = 3456,
  [SMALL_STATE(208)] = 3467,
  [SMALL_STATE(209)] = 3478,
  [SMALL_STATE(210)] = 3489,
  [SMALL_STATE(211)] = 3500,
  [SMALL_STATE(212)] = 3511,
  [SMALL_STATE(213)] = 3522,
  [SMALL_STATE(214)] = 3535,
  [SMALL_STATE(215)] = 3544,
  [SMALL_STATE(216)] = 3555,
  [SMALL_STATE(217)] = 3566,
  [SMALL_STATE(218)] = 3577,
  [SMALL_STATE(219)] = 3586,
  [SMALL_STATE(220)] = 3599,
  [SMALL_STATE(221)] = 3608,
  [SMALL_STATE(222)] = 3619,
  [SMALL_STATE(223)] = 3630,
  [SMALL_STATE(224)] = 3641,
  [SMALL_STATE(225)] = 3652,
  [SMALL_STATE(226)] = 3663,
  [SMALL_STATE(227)] = 3671,
  [SMALL_STATE(228)] = 3679,
  [SMALL_STATE(229)] = 3685,
  [SMALL_STATE(230)] = 3695,
  [SMALL_STATE(231)] = 3705,
  [SMALL_STATE(232)] = 3715,
  [SMALL_STATE(233)] = 3725,
  [SMALL_STATE(234)] = 3735,
  [SMALL_STATE(235)] = 3745,
  [SMALL_STATE(236)] = 3755,
  [SMALL_STATE(237)] = 3765,
  [SMALL_STATE(238)] = 3773,
  [SMALL_STATE(239)] = 3783,
  [SMALL_STATE(240)] = 3791,
  [SMALL_STATE(241)] = 3801,
  [SMALL_STATE(242)] = 3811,
  [SMALL_STATE(243)] = 3821,
  [SMALL_STATE(244)] = 3831,
  [SMALL_STATE(245)] = 3841,
  [SMALL_STATE(246)] = 3851,
  [SMALL_STATE(247)] = 3861,
  [SMALL_STATE(248)] = 3871,
  [SMALL_STATE(249)] = 3881,
  [SMALL_STATE(250)] = 3891,
  [SMALL_STATE(251)] = 3901,
  [SMALL_STATE(252)] = 3911,
  [SMALL_STATE(253)] = 3921,
  [SMALL_STATE(254)] = 3931,
  [SMALL_STATE(255)] = 3941,
  [SMALL_STATE(256)] = 3951,
  [SMALL_STATE(257)] = 3961,
  [SMALL_STATE(258)] = 3971,
  [SMALL_STATE(259)] = 3981,
  [SMALL_STATE(260)] = 3989,
  [SMALL_STATE(261)] = 3999,
  [SMALL_STATE(262)] = 4007,
  [SMALL_STATE(263)] = 4017,
  [SMALL_STATE(264)] = 4027,
  [SMALL_STATE(265)] = 4037,
  [SMALL_STATE(266)] = 4045,
  [SMALL_STATE(267)] = 4053,
  [SMALL_STATE(268)] = 4061,
  [SMALL_STATE(269)] = 4071,
  [SMALL_STATE(270)] = 4081,
  [SMALL_STATE(271)] = 4091,
  [SMALL_STATE(272)] = 4099,
  [SMALL_STATE(273)] = 4107,
  [SMALL_STATE(274)] = 4115,
  [SMALL_STATE(275)] = 4123,
  [SMALL_STATE(276)] = 4133,
  [SMALL_STATE(277)] = 4143,
  [SMALL_STATE(278)] = 4153,
  [SMALL_STATE(279)] = 4163,
  [SMALL_STATE(280)] = 4173,
  [SMALL_STATE(281)] = 4183,
  [SMALL_STATE(282)] = 4193,
  [SMALL_STATE(283)] = 4203,
  [SMALL_STATE(284)] = 4213,
  [SMALL_STATE(285)] = 4223,
  [SMALL_STATE(286)] = 4233,
  [SMALL_STATE(287)] = 4243,
  [SMALL_STATE(288)] = 4253,
  [SMALL_STATE(289)] = 4263,
  [SMALL_STATE(290)] = 4273,
  [SMALL_STATE(291)] = 4283,
  [SMALL_STATE(292)] = 4293,
  [SMALL_STATE(293)] = 4303,
  [SMALL_STATE(294)] = 4313,
  [SMALL_STATE(295)] = 4323,
  [SMALL_STATE(296)] = 4333,
  [SMALL_STATE(297)] = 4343,
  [SMALL_STATE(298)] = 4353,
  [SMALL_STATE(299)] = 4363,
  [SMALL_STATE(300)] = 4373,
  [SMALL_STATE(301)] = 4383,
  [SMALL_STATE(302)] = 4393,
  [SMALL_STATE(303)] = 4401,
  [SMALL_STATE(304)] = 4411,
  [SMALL_STATE(305)] = 4421,
  [SMALL_STATE(306)] = 4431,
  [SMALL_STATE(307)] = 4441,
  [SMALL_STATE(308)] = 4451,
  [SMALL_STATE(309)] = 4459,
  [SMALL_STATE(310)] = 4469,
  [SMALL_STATE(311)] = 4477,
  [SMALL_STATE(312)] = 4485,
  [SMALL_STATE(313)] = 4493,
  [SMALL_STATE(314)] = 4501,
  [SMALL_STATE(315)] = 4507,
  [SMALL_STATE(316)] = 4517,
  [SMALL_STATE(317)] = 4523,
  [SMALL_STATE(318)] = 4533,
  [SMALL_STATE(319)] = 4541,
  [SMALL_STATE(320)] = 4551,
  [SMALL_STATE(321)] = 4559,
  [SMALL_STATE(322)] = 4567,
  [SMALL_STATE(323)] = 4575,
  [SMALL_STATE(324)] = 4585,
  [SMALL_STATE(325)] = 4593,
  [SMALL_STATE(326)] = 4603,
  [SMALL_STATE(327)] = 4611,
  [SMALL_STATE(328)] = 4619,
  [SMALL_STATE(329)] = 4627,
  [SMALL_STATE(330)] = 4637,
  [SMALL_STATE(331)] = 4645,
  [SMALL_STATE(332)] = 4655,
  [SMALL_STATE(333)] = 4663,
  [SMALL_STATE(334)] = 4671,
  [SMALL_STATE(335)] = 4679,
  [SMALL_STATE(336)] = 4687,
  [SMALL_STATE(337)] = 4697,
  [SMALL_STATE(338)] = 4703,
  [SMALL_STATE(339)] = 4713,
  [SMALL_STATE(340)] = 4721,
  [SMALL_STATE(341)] = 4729,
  [SMALL_STATE(342)] = 4735,
  [SMALL_STATE(343)] = 4745,
  [SMALL_STATE(344)] = 4755,
  [SMALL_STATE(345)] = 4761,
  [SMALL_STATE(346)] = 4769,
  [SMALL_STATE(347)] = 4779,
  [SMALL_STATE(348)] = 4789,
  [SMALL_STATE(349)] = 4795,
  [SMALL_STATE(350)] = 4801,
  [SMALL_STATE(351)] = 4811,
  [SMALL_STATE(352)] = 4819,
  [SMALL_STATE(353)] = 4829,
  [SMALL_STATE(354)] = 4837,
  [SMALL_STATE(355)] = 4845,
  [SMALL_STATE(356)] = 4853,
  [SMALL_STATE(357)] = 4863,
  [SMALL_STATE(358)] = 4869,
  [SMALL_STATE(359)] = 4877,
  [SMALL_STATE(360)] = 4882,
  [SMALL_STATE(361)] = 4887,
  [SMALL_STATE(362)] = 4892,
  [SMALL_STATE(363)] = 4899,
  [SMALL_STATE(364)] = 4906,
  [SMALL_STATE(365)] = 4911,
  [SMALL_STATE(366)] = 4916,
  [SMALL_STATE(367)] = 4921,
  [SMALL_STATE(368)] = 4926,
  [SMALL_STATE(369)] = 4931,
  [SMALL_STATE(370)] = 4936,
  [SMALL_STATE(371)] = 4943,
  [SMALL_STATE(372)] = 4948,
  [SMALL_STATE(373)] = 4953,
  [SMALL_STATE(374)] = 4958,
  [SMALL_STATE(375)] = 4963,
  [SMALL_STATE(376)] = 4968,
  [SMALL_STATE(377)] = 4973,
  [SMALL_STATE(378)] = 4978,
  [SMALL_STATE(379)] = 4983,
  [SMALL_STATE(380)] = 4988,
  [SMALL_STATE(381)] = 4993,
  [SMALL_STATE(382)] = 4998,
  [SMALL_STATE(383)] = 5003,
  [SMALL_STATE(384)] = 5008,
  [SMALL_STATE(385)] = 5013,
  [SMALL_STATE(386)] = 5018,
  [SMALL_STATE(387)] = 5023,
  [SMALL_STATE(388)] = 5028,
  [SMALL_STATE(389)] = 5033,
  [SMALL_STATE(390)] = 5038,
  [SMALL_STATE(391)] = 5043,
  [SMALL_STATE(392)] = 5048,
  [SMALL_STATE(393)] = 5053,
  [SMALL_STATE(394)] = 5058,
  [SMALL_STATE(395)] = 5063,
  [SMALL_STATE(396)] = 5068,
  [SMALL_STATE(397)] = 5073,
  [SMALL_STATE(398)] = 5080,
  [SMALL_STATE(399)] = 5085,
  [SMALL_STATE(400)] = 5090,
  [SMALL_STATE(401)] = 5095,
  [SMALL_STATE(402)] = 5100,
  [SMALL_STATE(403)] = 5105,
  [SMALL_STATE(404)] = 5110,
  [SMALL_STATE(405)] = 5115,
  [SMALL_STATE(406)] = 5120,
  [SMALL_STATE(407)] = 5125,
  [SMALL_STATE(408)] = 5130,
  [SMALL_STATE(409)] = 5137,
  [SMALL_STATE(410)] = 5142,
  [SMALL_STATE(411)] = 5147,
  [SMALL_STATE(412)] = 5152,
  [SMALL_STATE(413)] = 5157,
  [SMALL_STATE(414)] = 5162,
  [SMALL_STATE(415)] = 5167,
  [SMALL_STATE(416)] = 5174,
  [SMALL_STATE(417)] = 5179,
  [SMALL_STATE(418)] = 5184,
  [SMALL_STATE(419)] = 5189,
  [SMALL_STATE(420)] = 5194,
  [SMALL_STATE(421)] = 5199,
  [SMALL_STATE(422)] = 5204,
  [SMALL_STATE(423)] = 5209,
  [SMALL_STATE(424)] = 5214,
  [SMALL_STATE(425)] = 5221,
  [SMALL_STATE(426)] = 5226,
  [SMALL_STATE(427)] = 5231,
  [SMALL_STATE(428)] = 5236,
  [SMALL_STATE(429)] = 5241,
  [SMALL_STATE(430)] = 5246,
  [SMALL_STATE(431)] = 5251,
  [SMALL_STATE(432)] = 5256,
  [SMALL_STATE(433)] = 5261,
  [SMALL_STATE(434)] = 5268,
  [SMALL_STATE(435)] = 5273,
  [SMALL_STATE(436)] = 5278,
  [SMALL_STATE(437)] = 5283,
  [SMALL_STATE(438)] = 5290,
  [SMALL_STATE(439)] = 5295,
  [SMALL_STATE(440)] = 5302,
  [SMALL_STATE(441)] = 5307,
  [SMALL_STATE(442)] = 5312,
  [SMALL_STATE(443)] = 5317,
  [SMALL_STATE(444)] = 5324,
  [SMALL_STATE(445)] = 5329,
  [SMALL_STATE(446)] = 5334,
  [SMALL_STATE(447)] = 5339,
  [SMALL_STATE(448)] = 5346,
  [SMALL_STATE(449)] = 5353,
  [SMALL_STATE(450)] = 5358,
  [SMALL_STATE(451)] = 5363,
  [SMALL_STATE(452)] = 5368,
  [SMALL_STATE(453)] = 5373,
  [SMALL_STATE(454)] = 5378,
  [SMALL_STATE(455)] = 5383,
  [SMALL_STATE(456)] = 5388,
  [SMALL_STATE(457)] = 5393,
  [SMALL_STATE(458)] = 5398,
  [SMALL_STATE(459)] = 5403,
  [SMALL_STATE(460)] = 5408,
  [SMALL_STATE(461)] = 5413,
  [SMALL_STATE(462)] = 5418,
  [SMALL_STATE(463)] = 5423,
  [SMALL_STATE(464)] = 5428,
  [SMALL_STATE(465)] = 5433,
  [SMALL_STATE(466)] = 5438,
  [SMALL_STATE(467)] = 5443,
  [SMALL_STATE(468)] = 5448,
  [SMALL_STATE(469)] = 5455,
  [SMALL_STATE(470)] = 5460,
  [SMALL_STATE(471)] = 5465,
  [SMALL_STATE(472)] = 5470,
  [SMALL_STATE(473)] = 5475,
  [SMALL_STATE(474)] = 5480,
  [SMALL_STATE(475)] = 5485,
  [SMALL_STATE(476)] = 5490,
  [SMALL_STATE(477)] = 5495,
  [SMALL_STATE(478)] = 5500,
  [SMALL_STATE(479)] = 5505,
  [SMALL_STATE(480)] = 5510,
  [SMALL_STATE(481)] = 5515,
  [SMALL_STATE(482)] = 5520,
  [SMALL_STATE(483)] = 5525,
  [SMALL_STATE(484)] = 5530,
  [SMALL_STATE(485)] = 5535,
  [SMALL_STATE(486)] = 5540,
  [SMALL_STATE(487)] = 5545,
  [SMALL_STATE(488)] = 5550,
  [SMALL_STATE(489)] = 5555,
  [SMALL_STATE(490)] = 5560,
  [SMALL_STATE(491)] = 5565,
  [SMALL_STATE(492)] = 5572,
  [SMALL_STATE(493)] = 5577,
  [SMALL_STATE(494)] = 5584,
  [SMALL_STATE(495)] = 5589,
  [SMALL_STATE(496)] = 5594,
  [SMALL_STATE(497)] = 5599,
  [SMALL_STATE(498)] = 5604,
  [SMALL_STATE(499)] = 5611,
  [SMALL_STATE(500)] = 5616,
  [SMALL_STATE(501)] = 5621,
  [SMALL_STATE(502)] = 5625,
  [SMALL_STATE(503)] = 5629,
  [SMALL_STATE(504)] = 5633,
  [SMALL_STATE(505)] = 5637,
  [SMALL_STATE(506)] = 5641,
  [SMALL_STATE(507)] = 5645,
  [SMALL_STATE(508)] = 5649,
  [SMALL_STATE(509)] = 5653,
  [SMALL_STATE(510)] = 5657,
  [SMALL_STATE(511)] = 5661,
  [SMALL_STATE(512)] = 5665,
  [SMALL_STATE(513)] = 5669,
  [SMALL_STATE(514)] = 5673,
  [SMALL_STATE(515)] = 5677,
  [SMALL_STATE(516)] = 5681,
  [SMALL_STATE(517)] = 5685,
  [SMALL_STATE(518)] = 5689,
  [SMALL_STATE(519)] = 5693,
  [SMALL_STATE(520)] = 5697,
  [SMALL_STATE(521)] = 5701,
  [SMALL_STATE(522)] = 5705,
  [SMALL_STATE(523)] = 5709,
  [SMALL_STATE(524)] = 5713,
  [SMALL_STATE(525)] = 5717,
  [SMALL_STATE(526)] = 5721,
  [SMALL_STATE(527)] = 5725,
  [SMALL_STATE(528)] = 5729,
  [SMALL_STATE(529)] = 5733,
  [SMALL_STATE(530)] = 5737,
  [SMALL_STATE(531)] = 5741,
  [SMALL_STATE(532)] = 5745,
  [SMALL_STATE(533)] = 5749,
  [SMALL_STATE(534)] = 5753,
  [SMALL_STATE(535)] = 5757,
  [SMALL_STATE(536)] = 5761,
  [SMALL_STATE(537)] = 5765,
  [SMALL_STATE(538)] = 5769,
  [SMALL_STATE(539)] = 5773,
  [SMALL_STATE(540)] = 5777,
  [SMALL_STATE(541)] = 5781,
  [SMALL_STATE(542)] = 5785,
  [SMALL_STATE(543)] = 5789,
  [SMALL_STATE(544)] = 5793,
  [SMALL_STATE(545)] = 5797,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(336),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(229),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(230),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(231),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(232),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(233),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(235),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(236),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(238),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(240),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(241),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(242),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(243),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(244),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(245),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(247),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(248),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(249),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(250),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(251),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(253),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(254),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(255),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(256),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(257),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(258),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(260),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(262),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(263),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(269),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(270),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(275),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(276),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(278),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(284),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(285),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(286),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(287),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(288),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(289),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(290),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(291),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(292),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(293),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(294),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(298),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(300),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(301),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(303),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(304),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(306),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(307),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(515),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(10),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(229),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(230),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(231),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(232),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(233),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(235),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(236),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(238),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(240),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(241),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(242),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(243),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(244),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(245),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(247),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(248),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(249),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(250),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(251),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(253),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(254),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(255),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(256),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(257),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(258),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(260),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(262),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(263),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(269),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(270),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(275),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(276),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(278),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(284),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(285),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(286),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(287),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(288),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(289),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(290),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(291),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(292),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(293),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(294),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(298),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(300),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(301),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(303),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(304),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(306),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(307),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(362),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(15),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 17),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 17),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 42),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 42),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 15),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 15),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 17),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 17),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 42),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 42),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 6),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 6),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 6),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 6),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sep, 1),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sep, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sep, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sep, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sep, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sep, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 10),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(75),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(75),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(505),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(120),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(120),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(543),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 12),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 12),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(146),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(146),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(541),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(154),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(154),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(542),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(63),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(63),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 27),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 27),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(180),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(180),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(523),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(166),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(166),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(545),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(90),
  [772] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(90),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 12),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(214),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(214),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(109),
  [818] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(109),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(130),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(130),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [875] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(302),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(302),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(139),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2),
  [886] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(139),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 12),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat2, 2),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat2, 2), SHIFT_REPEAT(151),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(155),
  [931] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(155),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(218),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(218),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(524),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 43),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 6),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 17),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 6),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 19),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 17),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 17),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 17),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 6),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 25),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 17),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 6),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 22),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(96),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 22),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(507),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 22),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(511),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 14),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 22),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 22),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(520),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2),
  [1091] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(318),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(318),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 6),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 37), SHIFT_REPEAT(148),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 37),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 6),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 39),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 40),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 6),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 6),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 15),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 16),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 15),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 9),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 6),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 17),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 46),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 45),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 37), SHIFT_REPEAT(144),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 37),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 36),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(97),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [1328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 21), SHIFT_REPEAT(66),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 21),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 21), SHIFT_REPEAT(295),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 21),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [1342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 21), SHIFT_REPEAT(112),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 21),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 24), SHIFT_REPEAT(78),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 24),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(114),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 6),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 23),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 20),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 20),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 6),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 28),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 28),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 22),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 29),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 30),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 31),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 32),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 6),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 6),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 3, .production_id = 28),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 3, .production_id = 28),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 6),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 6),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 34),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 35),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 38),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 6),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 11),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 20),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 6),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 36),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 41),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 6),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 6),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 6),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 11),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward_value2, 3, .production_id = 44),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 6),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 6),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 45),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 46),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 7),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 6),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 6),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 26),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 6),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 6),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 6),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 6),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 6),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 6),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 6),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 7),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 8),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 6),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 18),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 7),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 6),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 6),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 6),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 6),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 6),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 6),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 6),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 6),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 6),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 7),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 6),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 6),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 6),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 6),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward_value1, 1, .production_id = 13),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1577] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward_value1, 3, .production_id = 33),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
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
