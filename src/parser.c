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
#define STATE_COUNT 471
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 211
#define ALIAS_COUNT 1
#define TOKEN_COUNT 108
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
  aux_sym__file_string_token1 = 93,
  aux_sym_string_token1 = 94,
  aux_sym_string_token2 = 95,
  anon_sym_yes = 96,
  anon_sym_no = 97,
  sym__number = 98,
  aux_sym_time_token1 = 99,
  aux_sym_time_token2 = 100,
  aux_sym_time_token3 = 101,
  aux_sym_time_token4 = 102,
  aux_sym_time_token5 = 103,
  sym_comment = 104,
  aux_sym__sep_token1 = 105,
  sym__space = 106,
  sym__eol = 107,
  sym_config = 108,
  sym_host_declaration = 109,
  sym__declarations = 110,
  sym_parameter = 111,
  sym__add_keys_to_agent = 112,
  sym__address_family = 113,
  sym__batch_mode = 114,
  sym__bind_address = 115,
  sym__bind_interface = 116,
  sym__canonical_domains = 117,
  sym__canonicalize_fallback_local = 118,
  sym__canonicalize_hostname = 119,
  sym__canonicalize_max_dots = 120,
  sym__canonicalize_permitted_cnames = 121,
  sym__cnames_map = 122,
  sym__ca_signature_algorithms = 123,
  sym__certificate_file = 124,
  sym__check_host_ip = 125,
  sym__ciphers = 126,
  sym__clear_all_forwardings = 127,
  sym__compression = 128,
  sym__connection_attempts = 129,
  sym__connect_timeout = 130,
  sym__control_master = 131,
  sym__control_persist = 132,
  sym__control_path = 133,
  sym__enable_escape_command_line = 134,
  sym__enable_ssh_keysign = 135,
  sym__escape_char = 136,
  sym__exit_on_forward_failure = 137,
  sym__fingerprint_hash = 138,
  sym__fork_after_authentication = 139,
  sym__forward_agent = 140,
  sym__forward_x11 = 141,
  sym__forward_x11_timeout = 142,
  sym__forward_x11_trusted = 143,
  sym__global_known_hosts_file = 144,
  sym__gssapi_authentication = 145,
  sym__gssapi_delegate_credentials = 146,
  sym__hostbased_accepted_algorithms = 147,
  sym__hostbased_authentication = 148,
  sym__host_key_algorithms = 149,
  sym__host_key_alias = 150,
  sym__hostname = 151,
  sym__identities_only = 152,
  sym__identity_agent = 153,
  sym__identity_file = 154,
  sym__ignore_unknown = 155,
  sym__ipqos = 156,
  sym__kbd_interactive_authentication = 157,
  sym__kex_algorithms = 158,
  sym__known_hosts_command = 159,
  sym__local_command = 160,
  sym__local_forward = 161,
  sym__local_forward_value1 = 162,
  sym__local_forward_value2 = 163,
  sym__log_level = 164,
  sym__log_verbose = 165,
  sym__log_verbose_value = 166,
  sym__log_verbose_quoted = 167,
  sym__file_token = 168,
  sym__hosts_token = 169,
  sym__hostname_token = 170,
  sym__var_value = 171,
  sym_variable = 172,
  sym__file_string = 173,
  sym__hosts_string = 174,
  sym__hostname_string = 175,
  sym__token_string = 176,
  sym_string = 177,
  sym__file_pattern_vars = 178,
  sym_pattern = 179,
  sym__boolean = 180,
  sym_time = 181,
  sym__sep = 182,
  aux_sym_config_repeat1 = 183,
  aux_sym_host_declaration_repeat1 = 184,
  aux_sym__declarations_repeat1 = 185,
  aux_sym__canonical_domains_repeat1 = 186,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 187,
  aux_sym__cnames_map_repeat1 = 188,
  aux_sym__ca_signature_algorithms_repeat1 = 189,
  aux_sym__ciphers_repeat1 = 190,
  aux_sym__global_known_hosts_file_repeat1 = 191,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 192,
  aux_sym__ignore_unknown_repeat1 = 193,
  aux_sym__kex_algorithms_repeat1 = 194,
  aux_sym__log_verbose_repeat1 = 195,
  aux_sym__log_verbose_repeat2 = 196,
  aux_sym__log_verbose_value_repeat1 = 197,
  aux_sym__log_verbose_value_repeat2 = 198,
  aux_sym__log_verbose_quoted_repeat1 = 199,
  aux_sym__file_string_repeat1 = 200,
  aux_sym__file_string_repeat2 = 201,
  aux_sym__hosts_string_repeat1 = 202,
  aux_sym__hosts_string_repeat2 = 203,
  aux_sym__hostname_string_repeat1 = 204,
  aux_sym__hostname_string_repeat2 = 205,
  aux_sym__token_string_repeat1 = 206,
  aux_sym__token_string_repeat2 = 207,
  aux_sym__file_pattern_vars_repeat1 = 208,
  aux_sym__file_pattern_vars_repeat2 = 209,
  aux_sym_pattern_repeat1 = 210,
  alias_sym_number = 211,
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
  [aux_sym__file_string_token1] = "_file_string_token1",
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
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
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
  [aux_sym__file_string_token1] = aux_sym__file_string_token1,
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
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
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
  [aux_sym__file_string_token1] = {
    .visible = false,
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
  [aux_sym_pattern_repeat1] = {
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
  [73] = 54,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 56,
  [82] = 82,
  [83] = 83,
  [84] = 59,
  [85] = 85,
  [86] = 86,
  [87] = 78,
  [88] = 59,
  [89] = 56,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 92,
  [97] = 54,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 54,
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
  [162] = 54,
  [163] = 54,
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
  [270] = 128,
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
  [448] = 439,
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
  [460] = 455,
  [461] = 461,
  [462] = 455,
  [463] = 455,
  [464] = 455,
  [465] = 455,
  [466] = 439,
  [467] = 439,
  [468] = 439,
  [469] = 469,
  [470] = 439,
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
      if (eof) ADVANCE(1113);
      if (lookahead == '!') ADVANCE(1115);
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '$') ADVANCE(1219);
      if (lookahead == '%') ADVANCE(1195);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '+') ADVANCE(1134);
      if (lookahead == ',') ADVANCE(1131);
      if (lookahead == '-') ADVANCE(1135);
      if (lookahead == '2') ADVANCE(1193);
      if (lookahead == ':') ADVANCE(1132);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead == 'S') ADVANCE(1192);
      if (lookahead == '^') ADVANCE(1139);
      if (lookahead == 's') ADVANCE(1193);
      if (lookahead == '}') ADVANCE(1225);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1193);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1193);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1193);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1194);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1193);
      if (lookahead != 0) ADVANCE(1194);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1259);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1115);
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1229);
      if (lookahead == '%') ADVANCE(1233);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1229);
      if (lookahead == '%') ADVANCE(1233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1229);
      if (lookahead == '%') ADVANCE(1235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1236);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == ',') ADVANCE(1131);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1226);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(1134);
      if (lookahead == '-') ADVANCE(1135);
      if (lookahead == '3') ADVANCE(440);
      if (lookahead == '^') ADVANCE(1139);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1251);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1252);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1253);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1254);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1250);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '$') ADVANCE(1219);
      if (lookahead == '%') ADVANCE(1233);
      if (lookahead == 'S') ADVANCE(1227);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '$') ADVANCE(1229);
      if (lookahead == '%') ADVANCE(1233);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '$') ADVANCE(1229);
      if (lookahead == '%') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '$') ADVANCE(1229);
      if (lookahead == '%') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '$') ADVANCE(1196);
      if (lookahead == '%') ADVANCE(1199);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead != 0) ADVANCE(1194);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '$') ADVANCE(1196);
      if (lookahead == '%') ADVANCE(1199);
      if (lookahead != 0) ADVANCE(1194);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '$') ADVANCE(1196);
      if (lookahead == '%') ADVANCE(1201);
      if (lookahead != 0) ADVANCE(1194);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '%') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '%') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '%') ADVANCE(1198);
      if (lookahead != 0) ADVANCE(1194);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '%') ADVANCE(1202);
      if (lookahead != 0) ADVANCE(1194);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead != 0) ADVANCE(1194);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1190);
      if (lookahead == '$') ADVANCE(1230);
      if (lookahead == '%') ADVANCE(1234);
      if (lookahead == '*') ADVANCE(1150);
      if (lookahead == '0') ADVANCE(1237);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1237);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1190);
      if (lookahead == '$') ADVANCE(1230);
      if (lookahead == '%') ADVANCE(1234);
      if (lookahead == '*') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1237);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1190);
      if (lookahead == '$') ADVANCE(1220);
      if (lookahead == 'n') ADVANCE(1239);
      if (lookahead == 'y') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(1197);
      if (lookahead == '%') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1203);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == ',') ADVANCE(1131);
      if (lookahead == ':') ADVANCE(1132);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1226);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == ':') ADVANCE(1132);
      if (lookahead == '=') ADVANCE(1256);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1193);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == ':') ADVANCE(1132);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1194);
      END_STATE();
    case 33:
      if (lookahead == '+') ADVANCE(1134);
      if (lookahead == '-') ADVANCE(1135);
      if (lookahead == '0') ADVANCE(1248);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'c') ADVANCE(927);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(828);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == 's') ADVANCE(668);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == 'w') ADVANCE(539);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1249);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(504);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(434);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(1083);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(935);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(555);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(399);
      if (lookahead == '@') ADVANCE(831);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(387);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(381);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(774);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(937);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(521);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(474);
      if (lookahead == '1') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(122);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(941);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(854);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(438);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(965);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(967);
      if (lookahead == '4') ADVANCE(56);
      if (lookahead == '6') ADVANCE(57);
      if (lookahead == '8') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(971);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(977);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(974);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(775);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(523);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(776);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(777);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(778);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(985);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(987);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(988);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(989);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(990);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(538);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(789);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(995);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(537);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(998);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(394);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(395);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(397);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(818);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(398);
      END_STATE();
    case 79:
      if (lookahead == '0') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == '0') ADVANCE(165);
      END_STATE();
    case 81:
      if (lookahead == '0') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == '1') ADVANCE(1211);
      END_STATE();
    case 83:
      if (lookahead == '1') ADVANCE(184);
      END_STATE();
    case 84:
      if (lookahead == '1') ADVANCE(1163);
      END_STATE();
    case 85:
      if (lookahead == '1') ADVANCE(187);
      END_STATE();
    case 86:
      if (lookahead == '1') ADVANCE(1208);
      END_STATE();
    case 87:
      if (lookahead == '1') ADVANCE(1208);
      if (lookahead == '2') ADVANCE(148);
      END_STATE();
    case 88:
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '2') ADVANCE(153);
      END_STATE();
    case 89:
      if (lookahead == '1') ADVANCE(137);
      END_STATE();
    case 90:
      if (lookahead == '1') ADVANCE(1108);
      if (lookahead == '2') ADVANCE(1108);
      if (lookahead == '3') ADVANCE(1108);
      if (lookahead == '4') ADVANCE(1108);
      END_STATE();
    case 91:
      if (lookahead == '1') ADVANCE(1212);
      END_STATE();
    case 92:
      if (lookahead == '1') ADVANCE(1097);
      END_STATE();
    case 93:
      if (lookahead == '1') ADVANCE(181);
      END_STATE();
    case 94:
      if (lookahead == '1') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == '1') ADVANCE(182);
      END_STATE();
    case 96:
      if (lookahead == '1') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == '1') ADVANCE(183);
      END_STATE();
    case 98:
      if (lookahead == '1') ADVANCE(134);
      END_STATE();
    case 99:
      if (lookahead == '1') ADVANCE(186);
      END_STATE();
    case 100:
      if (lookahead == '1') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == '1') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == '1') ADVANCE(185);
      END_STATE();
    case 103:
      if (lookahead == '2') ADVANCE(1211);
      END_STATE();
    case 104:
      if (lookahead == '2') ADVANCE(1208);
      END_STATE();
    case 105:
      if (lookahead == '2') ADVANCE(1212);
      END_STATE();
    case 106:
      if (lookahead == '2') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 108:
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == '9') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == '2') ADVANCE(145);
      END_STATE();
    case 110:
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '3') ADVANCE(178);
      if (lookahead == '5') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '5') ADVANCE(94);
      END_STATE();
    case 112:
      if (lookahead == '2') ADVANCE(36);
      END_STATE();
    case 113:
      if (lookahead == '2') ADVANCE(146);
      END_STATE();
    case 114:
      if (lookahead == '2') ADVANCE(44);
      END_STATE();
    case 115:
      if (lookahead == '2') ADVANCE(148);
      if (lookahead == '3') ADVANCE(177);
      if (lookahead == '5') ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == '2') ADVANCE(150);
      END_STATE();
    case 117:
      if (lookahead == '2') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == '2') ADVANCE(151);
      END_STATE();
    case 119:
      if (lookahead == '2') ADVANCE(82);
      END_STATE();
    case 120:
      if (lookahead == '2') ADVANCE(43);
      END_STATE();
    case 121:
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == '3') ADVANCE(179);
      if (lookahead == '5') ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == '5') ADVANCE(101);
      END_STATE();
    case 123:
      if (lookahead == '2') ADVANCE(91);
      END_STATE();
    case 124:
      if (lookahead == '2') ADVANCE(147);
      END_STATE();
    case 125:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 126:
      if (lookahead == '2') ADVANCE(159);
      END_STATE();
    case 127:
      if (lookahead == '2') ADVANCE(160);
      END_STATE();
    case 128:
      if (lookahead == '2') ADVANCE(161);
      END_STATE();
    case 129:
      if (lookahead == '2') ADVANCE(163);
      END_STATE();
    case 130:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 131:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 133:
      if (lookahead == '2') ADVANCE(63);
      END_STATE();
    case 134:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 135:
      if (lookahead == '2') ADVANCE(164);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(70);
      END_STATE();
    case 137:
      if (lookahead == '3') ADVANCE(80);
      END_STATE();
    case 138:
      if (lookahead == '4') ADVANCE(1211);
      END_STATE();
    case 139:
      if (lookahead == '4') ADVANCE(1208);
      END_STATE();
    case 140:
      if (lookahead == '4') ADVANCE(1212);
      END_STATE();
    case 141:
      if (lookahead == '5') ADVANCE(1159);
      END_STATE();
    case 142:
      if (lookahead == '5') ADVANCE(166);
      END_STATE();
    case 143:
      if (lookahead == '5') ADVANCE(83);
      END_STATE();
    case 144:
      if (lookahead == '5') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == '5') ADVANCE(143);
      END_STATE();
    case 146:
      if (lookahead == '5') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 148:
      if (lookahead == '5') ADVANCE(171);
      END_STATE();
    case 149:
      if (lookahead == '5') ADVANCE(93);
      END_STATE();
    case 150:
      if (lookahead == '5') ADVANCE(168);
      END_STATE();
    case 151:
      if (lookahead == '5') ADVANCE(169);
      END_STATE();
    case 152:
      if (lookahead == '5') ADVANCE(95);
      END_STATE();
    case 153:
      if (lookahead == '5') ADVANCE(174);
      END_STATE();
    case 154:
      if (lookahead == '5') ADVANCE(172);
      END_STATE();
    case 155:
      if (lookahead == '5') ADVANCE(98);
      END_STATE();
    case 156:
      if (lookahead == '5') ADVANCE(100);
      END_STATE();
    case 157:
      if (lookahead == '5') ADVANCE(97);
      END_STATE();
    case 158:
      if (lookahead == '5') ADVANCE(99);
      END_STATE();
    case 159:
      if (lookahead == '5') ADVANCE(152);
      END_STATE();
    case 160:
      if (lookahead == '5') ADVANCE(157);
      END_STATE();
    case 161:
      if (lookahead == '5') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == '5') ADVANCE(102);
      END_STATE();
    case 163:
      if (lookahead == '5') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == '5') ADVANCE(175);
      END_STATE();
    case 165:
      if (lookahead == '5') ADVANCE(189);
      END_STATE();
    case 166:
      if (lookahead == '6') ADVANCE(1160);
      END_STATE();
    case 167:
      if (lookahead == '6') ADVANCE(1211);
      END_STATE();
    case 168:
      if (lookahead == '6') ADVANCE(41);
      END_STATE();
    case 169:
      if (lookahead == '6') ADVANCE(187);
      END_STATE();
    case 170:
      if (lookahead == '6') ADVANCE(1209);
      END_STATE();
    case 171:
      if (lookahead == '6') ADVANCE(1208);
      END_STATE();
    case 172:
      if (lookahead == '6') ADVANCE(1212);
      END_STATE();
    case 173:
      if (lookahead == '6') ADVANCE(92);
      END_STATE();
    case 174:
      if (lookahead == '6') ADVANCE(37);
      END_STATE();
    case 175:
      if (lookahead == '6') ADVANCE(190);
      END_STATE();
    case 176:
      if (lookahead == '7') ADVANCE(173);
      END_STATE();
    case 177:
      if (lookahead == '8') ADVANCE(139);
      END_STATE();
    case 178:
      if (lookahead == '8') ADVANCE(138);
      END_STATE();
    case 179:
      if (lookahead == '8') ADVANCE(140);
      END_STATE();
    case 180:
      if (lookahead == '8') ADVANCE(37);
      END_STATE();
    case 181:
      if (lookahead == '9') ADVANCE(1211);
      END_STATE();
    case 182:
      if (lookahead == '9') ADVANCE(41);
      END_STATE();
    case 183:
      if (lookahead == '9') ADVANCE(1212);
      END_STATE();
    case 184:
      if (lookahead == '9') ADVANCE(51);
      END_STATE();
    case 185:
      if (lookahead == '9') ADVANCE(54);
      END_STATE();
    case 186:
      if (lookahead == '9') ADVANCE(190);
      END_STATE();
    case 187:
      if (lookahead == '@') ADVANCE(831);
      END_STATE();
    case 188:
      if (lookahead == '@') ADVANCE(842);
      END_STATE();
    case 189:
      if (lookahead == '@') ADVANCE(844);
      END_STATE();
    case 190:
      if (lookahead == '@') ADVANCE(845);
      END_STATE();
    case 191:
      if (lookahead == 'A') ADVANCE(280);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(850);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 192:
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(729);
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 193:
      if (lookahead == 'A') ADVANCE(254);
      END_STATE();
    case 194:
      if (lookahead == 'A') ADVANCE(269);
      END_STATE();
    case 195:
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'K') ADVANCE(469);
      END_STATE();
    case 196:
      if (lookahead == 'A') ADVANCE(257);
      END_STATE();
    case 197:
      if (lookahead == 'A') ADVANCE(543);
      END_STATE();
    case 198:
      if (lookahead == 'A') ADVANCE(678);
      END_STATE();
    case 199:
      if (lookahead == 'A') ADVANCE(291);
      END_STATE();
    case 200:
      if (lookahead == 'A') ADVANCE(675);
      END_STATE();
    case 201:
      if (lookahead == 'A') ADVANCE(1045);
      END_STATE();
    case 202:
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'I') ADVANCE(773);
      END_STATE();
    case 203:
      if (lookahead == 'A') ADVANCE(681);
      END_STATE();
    case 204:
      if (lookahead == 'A') ADVANCE(1072);
      if (lookahead == 'D') ADVANCE(513);
      END_STATE();
    case 205:
      if (lookahead == 'A') ADVANCE(557);
      if (lookahead == 'X') ADVANCE(96);
      END_STATE();
    case 206:
      if (lookahead == 'A') ADVANCE(561);
      if (lookahead == 'F') ADVANCE(639);
      END_STATE();
    case 207:
      if (lookahead == 'A') ADVANCE(563);
      END_STATE();
    case 208:
      if (lookahead == 'A') ADVANCE(701);
      END_STATE();
    case 209:
      if (lookahead == 'A') ADVANCE(702);
      END_STATE();
    case 210:
      if (lookahead == 'A') ADVANCE(1079);
      END_STATE();
    case 211:
      if (lookahead == 'A') ADVANCE(1080);
      END_STATE();
    case 212:
      if (lookahead == 'A') ADVANCE(1081);
      END_STATE();
    case 213:
      if (lookahead == 'B') ADVANCE(290);
      END_STATE();
    case 214:
      if (lookahead == 'B') ADVANCE(264);
      END_STATE();
    case 215:
      if (lookahead == 'C') ADVANCE(261);
      END_STATE();
    case 216:
      if (lookahead == 'C') ADVANCE(250);
      END_STATE();
    case 217:
      if (lookahead == 'C') ADVANCE(587);
      END_STATE();
    case 218:
      if (lookahead == 'C') ADVANCE(797);
      if (lookahead == 'F') ADVANCE(812);
      END_STATE();
    case 219:
      if (lookahead == 'C') ADVANCE(899);
      END_STATE();
    case 220:
      if (lookahead == 'C') ADVANCE(841);
      END_STATE();
    case 221:
      if (lookahead == 'C') ADVANCE(843);
      END_STATE();
    case 222:
      if (lookahead == 'D') ADVANCE(826);
      if (lookahead == 'i') ADVANCE(1107);
      END_STATE();
    case 223:
      if (lookahead == 'D') ADVANCE(821);
      END_STATE();
    case 224:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 225:
      if (lookahead == 'E') ADVANCE(1205);
      END_STATE();
    case 226:
      if (lookahead == 'E') ADVANCE(274);
      END_STATE();
    case 227:
      if (lookahead == 'E') ADVANCE(284);
      END_STATE();
    case 228:
      if (lookahead == 'E') ADVANCE(973);
      if (lookahead == 'S') ADVANCE(279);
      END_STATE();
    case 229:
      if (lookahead == 'E') ADVANCE(925);
      END_STATE();
    case 230:
      if (lookahead == 'F') ADVANCE(262);
      END_STATE();
    case 231:
      if (lookahead == 'F') ADVANCE(312);
      END_STATE();
    case 232:
      if (lookahead == 'F') ADVANCE(345);
      if (lookahead == 'H') ADVANCE(835);
      if (lookahead == 'M') ADVANCE(308);
      if (lookahead == 'P') ADVANCE(500);
      END_STATE();
    case 233:
      if (lookahead == 'F') ADVANCE(338);
      END_STATE();
    case 234:
      if (lookahead == 'F') ADVANCE(642);
      END_STATE();
    case 235:
      if (lookahead == 'F') ADVANCE(837);
      END_STATE();
    case 236:
      if (lookahead == 'F') ADVANCE(645);
      END_STATE();
    case 237:
      if (lookahead == 'F') ADVANCE(839);
      END_STATE();
    case 238:
      if (lookahead == 'G') ADVANCE(1206);
      END_STATE();
    case 239:
      if (lookahead == 'H') ADVANCE(295);
      END_STATE();
    case 240:
      if (lookahead == 'H') ADVANCE(252);
      END_STATE();
    case 241:
      if (lookahead == 'H') ADVANCE(294);
      END_STATE();
    case 242:
      if (lookahead == 'H') ADVANCE(343);
      END_STATE();
    case 243:
      if (lookahead == 'H') ADVANCE(825);
      END_STATE();
    case 244:
      if (lookahead == 'H') ADVANCE(829);
      END_STATE();
    case 245:
      if (lookahead == 'H') ADVANCE(834);
      END_STATE();
    case 246:
      if (lookahead == 'I') ADVANCE(204);
      END_STATE();
    case 247:
      if (lookahead == 'I') ADVANCE(268);
      END_STATE();
    case 248:
      if (lookahead == 'I') ADVANCE(227);
      END_STATE();
    case 249:
      if (lookahead == 'I') ADVANCE(749);
      END_STATE();
    case 250:
      if (lookahead == 'K') ADVANCE(1177);
      END_STATE();
    case 251:
      if (lookahead == 'K') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 252:
      if (lookahead == 'K') ADVANCE(508);
      END_STATE();
    case 253:
      if (lookahead == 'K') ADVANCE(788);
      END_STATE();
    case 254:
      if (lookahead == 'L') ADVANCE(1205);
      END_STATE();
    case 255:
      if (lookahead == 'L') ADVANCE(506);
      if (lookahead == 'V') ADVANCE(487);
      END_STATE();
    case 256:
      if (lookahead == 'L') ADVANCE(833);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(229);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(806);
      END_STATE();
    case 259:
      if (lookahead == 'M') ADVANCE(347);
      if (lookahead == 'P') ADVANCE(324);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(230);
      if (lookahead == 'P') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'g') ADVANCE(746);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(196);
      END_STATE();
    case 262:
      if (lookahead == 'O') ADVANCE(1205);
      END_STATE();
    case 263:
      if (lookahead == 'O') ADVANCE(273);
      END_STATE();
    case 264:
      if (lookahead == 'O') ADVANCE(281);
      END_STATE();
    case 265:
      if (lookahead == 'O') ADVANCE(216);
      END_STATE();
    case 266:
      if (lookahead == 'O') ADVANCE(738);
      END_STATE();
    case 267:
      if (lookahead == 'O') ADVANCE(754);
      END_STATE();
    case 268:
      if (lookahead == 'P') ADVANCE(1137);
      END_STATE();
    case 269:
      if (lookahead == 'P') ADVANCE(246);
      END_STATE();
    case 270:
      if (lookahead == 'Q') ADVANCE(796);
      END_STATE();
    case 271:
      if (lookahead == 'R') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead == 'x') ADVANCE(613);
      END_STATE();
    case 272:
      if (lookahead == 'R') ADVANCE(263);
      END_STATE();
    case 273:
      if (lookahead == 'R') ADVANCE(1205);
      END_STATE();
    case 274:
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 275:
      if (lookahead == 'R') ADVANCE(495);
      END_STATE();
    case 276:
      if (lookahead == 'S') ADVANCE(1180);
      END_STATE();
    case 277:
      if (lookahead == 'S') ADVANCE(278);
      if (lookahead == 'l') ADVANCE(822);
      END_STATE();
    case 278:
      if (lookahead == 'S') ADVANCE(194);
      END_STATE();
    case 279:
      if (lookahead == 'S') ADVANCE(240);
      END_STATE();
    case 280:
      if (lookahead == 'S') ADVANCE(611);
      END_STATE();
    case 281:
      if (lookahead == 'S') ADVANCE(225);
      END_STATE();
    case 282:
      if (lookahead == 'S') ADVANCE(265);
      END_STATE();
    case 283:
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 284:
      if (lookahead == 'T') ADVANCE(1205);
      END_STATE();
    case 285:
      if (lookahead == 'T') ADVANCE(1103);
      END_STATE();
    case 286:
      if (lookahead == 'T') ADVANCE(241);
      END_STATE();
    case 287:
      if (lookahead == 'T') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(808);
      END_STATE();
    case 288:
      if (lookahead == 'T') ADVANCE(802);
      END_STATE();
    case 289:
      if (lookahead == 'U') ADVANCE(248);
      END_STATE();
    case 290:
      if (lookahead == 'U') ADVANCE(238);
      END_STATE();
    case 291:
      if (lookahead == 'U') ADVANCE(286);
      END_STATE();
    case 292:
      if (lookahead == 'U') ADVANCE(740);
      END_STATE();
    case 293:
      if (lookahead == '^') ADVANCE(1156);
      if (lookahead == 'n') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1154);
      END_STATE();
    case 294:
      if (lookahead == '_') ADVANCE(282);
      END_STATE();
    case 295:
      if (lookahead == '_') ADVANCE(199);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(1010);
      if (lookahead == 'i') ADVANCE(742);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(713);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(1211);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(1212);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(1070);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(852);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(1094);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(881);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(1100);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(953);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(886);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(1012);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(1017);
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(873);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(889);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(915);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(890);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(892);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(1051);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(753);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(856);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(1031);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(720);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(943);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 345:
      if (lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 347:
      if (lookahead == 'a') ADVANCE(979);
      END_STATE();
    case 348:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(1033);
      END_STATE();
    case 350:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 351:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 352:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 353:
      if (lookahead == 'a') ADVANCE(1054);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(1055);
      END_STATE();
    case 355:
      if (lookahead == 'a') ADVANCE(1056);
      END_STATE();
    case 356:
      if (lookahead == 'a') ADVANCE(1057);
      END_STATE();
    case 357:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 358:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 359:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 360:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 361:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 366:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(1082);
      END_STATE();
    case 369:
      if (lookahead == 'b') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(1095);
      if (lookahead == 'n') ADVANCE(793);
      END_STATE();
    case 370:
      if (lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 371:
      if (lookahead == 'b') ADVANCE(311);
      END_STATE();
    case 372:
      if (lookahead == 'b') ADVANCE(380);
      END_STATE();
    case 373:
      if (lookahead == 'b') ADVANCE(380);
      if (lookahead == 't') ADVANCE(875);
      END_STATE();
    case 374:
      if (lookahead == 'b') ADVANCE(314);
      END_STATE();
    case 375:
      if (lookahead == 'b') ADVANCE(827);
      END_STATE();
    case 376:
      if (lookahead == 'b') ADVANCE(685);
      END_STATE();
    case 377:
      if (lookahead == 'b') ADVANCE(622);
      END_STATE();
    case 378:
      if (lookahead == 'b') ADVANCE(970);
      END_STATE();
    case 379:
      if (lookahead == 'b') ADVANCE(368);
      END_STATE();
    case 380:
      if (lookahead == 'c') ADVANCE(1207);
      END_STATE();
    case 381:
      if (lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 382:
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 383:
      if (lookahead == 'c') ADVANCE(662);
      END_STATE();
    case 384:
      if (lookahead == 'c') ADVANCE(564);
      END_STATE();
    case 385:
      if (lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 386:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 387:
      if (lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 388:
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 389:
      if (lookahead == 'c') ADVANCE(664);
      END_STATE();
    case 390:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 391:
      if (lookahead == 'c') ADVANCE(1001);
      END_STATE();
    case 392:
      if (lookahead == 'c') ADVANCE(728);
      END_STATE();
    case 393:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 394:
      if (lookahead == 'c') ADVANCE(804);
      END_STATE();
    case 395:
      if (lookahead == 'c') ADVANCE(805);
      END_STATE();
    case 396:
      if (lookahead == 'c') ADVANCE(1024);
      END_STATE();
    case 397:
      if (lookahead == 'c') ADVANCE(807);
      END_STATE();
    case 398:
      if (lookahead == 'c') ADVANCE(809);
      END_STATE();
    case 399:
      if (lookahead == 'c') ADVANCE(505);
      END_STATE();
    case 400:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 401:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 402:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 403:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 404:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 405:
      if (lookahead == 'c') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(1063);
      END_STATE();
    case 406:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 407:
      if (lookahead == 'c') ADVANCE(580);
      END_STATE();
    case 408:
      if (lookahead == 'c') ADVANCE(583);
      END_STATE();
    case 409:
      if (lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 410:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 411:
      if (lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 412:
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 413:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 414:
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 'f') ADVANCE(1204);
      END_STATE();
    case 415:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 416:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 418:
      if (lookahead == 'd') ADVANCE(598);
      END_STATE();
    case 419:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 420:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 421:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 422:
      if (lookahead == 'd') ADVANCE(1185);
      END_STATE();
    case 423:
      if (lookahead == 'd') ADVANCE(1186);
      END_STATE();
    case 424:
      if (lookahead == 'd') ADVANCE(1165);
      END_STATE();
    case 425:
      if (lookahead == 'd') ADVANCE(1184);
      END_STATE();
    case 426:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 427:
      if (lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 428:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 429:
      if (lookahead == 'd') ADVANCE(443);
      END_STATE();
    case 430:
      if (lookahead == 'd') ADVANCE(688);
      END_STATE();
    case 431:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 432:
      if (lookahead == 'd') ADVANCE(499);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 434:
      if (lookahead == 'd') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 435:
      if (lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 436:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 437:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 438:
      if (lookahead == 'd') ADVANCE(961);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 439:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 440:
      if (lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 441:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 442:
      if (lookahead == 'd') ADVANCE(520);
      END_STATE();
    case 443:
      if (lookahead == 'd') ADVANCE(908);
      END_STATE();
    case 444:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 445:
      if (lookahead == 'd') ADVANCE(991);
      END_STATE();
    case 446:
      if (lookahead == 'd') ADVANCE(992);
      END_STATE();
    case 447:
      if (lookahead == 'd') ADVANCE(993);
      END_STATE();
    case 448:
      if (lookahead == 'd') ADVANCE(996);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1104);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1174);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1122);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(1188);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1124);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(1136);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(1127);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(1157);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(1166);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(1151);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(1130);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(1204);
      if (lookahead == 'o') ADVANCE(1089);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(1101);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(1000);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(689);
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 's') ADVANCE(962);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(1085);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(948);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(952);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 's') ADVANCE(986);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 540:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 541:
      if (lookahead == 'f') ADVANCE(616);
      END_STATE();
    case 542:
      if (lookahead == 'f') ADVANCE(618);
      END_STATE();
    case 543:
      if (lookahead == 'f') ADVANCE(1027);
      END_STATE();
    case 544:
      if (lookahead == 'f') ADVANCE(337);
      END_STATE();
    case 545:
      if (lookahead == 'f') ADVANCE(542);
      END_STATE();
    case 546:
      if (lookahead == 'f') ADVANCE(632);
      END_STATE();
    case 547:
      if (lookahead == 'g') ADVANCE(1208);
      END_STATE();
    case 548:
      if (lookahead == 'g') ADVANCE(752);
      END_STATE();
    case 549:
      if (lookahead == 'g') ADVANCE(574);
      END_STATE();
    case 550:
      if (lookahead == 'g') ADVANCE(732);
      END_STATE();
    case 551:
      if (lookahead == 'g') ADVANCE(471);
      END_STATE();
    case 552:
      if (lookahead == 'g') ADVANCE(922);
      END_STATE();
    case 553:
      if (lookahead == 'g') ADVANCE(525);
      END_STATE();
    case 554:
      if (lookahead == 'g') ADVANCE(485);
      END_STATE();
    case 555:
      if (lookahead == 'g') ADVANCE(894);
      END_STATE();
    case 556:
      if (lookahead == 'g') ADVANCE(811);
      END_STATE();
    case 557:
      if (lookahead == 'g') ADVANCE(515);
      END_STATE();
    case 558:
      if (lookahead == 'g') ADVANCE(836);
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 559:
      if (lookahead == 'g') ADVANCE(349);
      END_STATE();
    case 560:
      if (lookahead == 'g') ADVANCE(838);
      END_STATE();
    case 561:
      if (lookahead == 'g') ADVANCE(518);
      END_STATE();
    case 562:
      if (lookahead == 'g') ADVANCE(840);
      END_STATE();
    case 563:
      if (lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 564:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 565:
      if (lookahead == 'h') ADVANCE(1148);
      END_STATE();
    case 566:
      if (lookahead == 'h') ADVANCE(1158);
      END_STATE();
    case 567:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 568:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 569:
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead == 'k') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(1014);
      if (lookahead == 's') ADVANCE(570);
      END_STATE();
    case 570:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 571:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 572:
      if (lookahead == 'h') ADVANCE(715);
      END_STATE();
    case 573:
      if (lookahead == 'h') ADVANCE(484);
      END_STATE();
    case 574:
      if (lookahead == 'h') ADVANCE(861);
      END_STATE();
    case 575:
      if (lookahead == 'h') ADVANCE(768);
      END_STATE();
    case 576:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 577:
      if (lookahead == 'h') ADVANCE(512);
      END_STATE();
    case 578:
      if (lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 579:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 580:
      if (lookahead == 'h') ADVANCE(342);
      END_STATE();
    case 581:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 582:
      if (lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 583:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 584:
      if (lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 585:
      if (lookahead == 'h') ADVANCE(716);
      END_STATE();
    case 586:
      if (lookahead == 'h') ADVANCE(334);
      END_STATE();
    case 587:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 588:
      if (lookahead == 'h') ADVANCE(718);
      END_STATE();
    case 589:
      if (lookahead == 'h') ADVANCE(897);
      END_STATE();
    case 590:
      if (lookahead == 'h') ADVANCE(719);
      END_STATE();
    case 591:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 592:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 593:
      if (lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 594:
      if (lookahead == 'h') ADVANCE(348);
      END_STATE();
    case 595:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 596:
      if (lookahead == 'h') ADVANCE(517);
      END_STATE();
    case 597:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 598:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 599:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 600:
      if (lookahead == 'h') ADVANCE(357);
      END_STATE();
    case 601:
      if (lookahead == 'h') ADVANCE(529);
      END_STATE();
    case 602:
      if (lookahead == 'h') ADVANCE(359);
      END_STATE();
    case 603:
      if (lookahead == 'h') ADVANCE(530);
      END_STATE();
    case 604:
      if (lookahead == 'h') ADVANCE(361);
      END_STATE();
    case 605:
      if (lookahead == 'h') ADVANCE(531);
      END_STATE();
    case 606:
      if (lookahead == 'h') ADVANCE(363);
      END_STATE();
    case 607:
      if (lookahead == 'h') ADVANCE(532);
      END_STATE();
    case 608:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 609:
      if (lookahead == 'h') ADVANCE(790);
      END_STATE();
    case 610:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 611:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 612:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 613:
      if (lookahead == 'i') ADVANCE(1011);
      END_STATE();
    case 614:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 615:
      if (lookahead == 'i') ADVANCE(1002);
      END_STATE();
    case 616:
      if (lookahead == 'i') ADVANCE(877);
      END_STATE();
    case 617:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 618:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 619:
      if (lookahead == 'i') ADVANCE(759);
      END_STATE();
    case 620:
      if (lookahead == 'i') ADVANCE(1020);
      END_STATE();
    case 621:
      if (lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 622:
      if (lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 623:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 624:
      if (lookahead == 'i') ADVANCE(1021);
      END_STATE();
    case 625:
      if (lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 626:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 627:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 628:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 629:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 630:
      if (lookahead == 'i') ADVANCE(1040);
      END_STATE();
    case 631:
      if (lookahead == 'i') ADVANCE(1086);
      END_STATE();
    case 632:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 633:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 634:
      if (lookahead == 'i') ADVANCE(810);
      END_STATE();
    case 635:
      if (lookahead == 'i') ADVANCE(756);
      END_STATE();
    case 636:
      if (lookahead == 'i') ADVANCE(1044);
      END_STATE();
    case 637:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 638:
      if (lookahead == 'i') ADVANCE(489);
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 639:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 640:
      if (lookahead == 'i') ADVANCE(1047);
      END_STATE();
    case 641:
      if (lookahead == 'i') ADVANCE(955);
      END_STATE();
    case 642:
      if (lookahead == 'i') ADVANCE(694);
      END_STATE();
    case 643:
      if (lookahead == 'i') ADVANCE(815);
      END_STATE();
    case 644:
      if (lookahead == 'i') ADVANCE(956);
      END_STATE();
    case 645:
      if (lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 646:
      if (lookahead == 'i') ADVANCE(816);
      END_STATE();
    case 647:
      if (lookahead == 'i') ADVANCE(817);
      END_STATE();
    case 648:
      if (lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 649:
      if (lookahead == 'i') ADVANCE(966);
      END_STATE();
    case 650:
      if (lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 651:
      if (lookahead == 'i') ADVANCE(960);
      END_STATE();
    case 652:
      if (lookahead == 'i') ADVANCE(968);
      END_STATE();
    case 653:
      if (lookahead == 'i') ADVANCE(1050);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead == 'r') ADVANCE(1078);
      END_STATE();
    case 655:
      if (lookahead == 'i') ADVANCE(976);
      END_STATE();
    case 656:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 658:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 659:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 660:
      if (lookahead == 'i') ADVANCE(994);
      END_STATE();
    case 661:
      if (lookahead == 'k') ADVANCE(1117);
      END_STATE();
    case 662:
      if (lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 663:
      if (lookahead == 'k') ADVANCE(1146);
      END_STATE();
    case 664:
      if (lookahead == 'k') ADVANCE(256);
      END_STATE();
    case 665:
      if (lookahead == 'k') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(320);
      END_STATE();
    case 666:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 667:
      if (lookahead == 'k') ADVANCE(769);
      END_STATE();
    case 668:
      if (lookahead == 'k') ADVANCE(69);
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 669:
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 670:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 671:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 672:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 673:
      if (lookahead == 'l') ADVANCE(1187);
      END_STATE();
    case 674:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 675:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 676:
      if (lookahead == 'l') ADVANCE(1126);
      END_STATE();
    case 677:
      if (lookahead == 'l') ADVANCE(683);
      END_STATE();
    case 678:
      if (lookahead == 'l') ADVANCE(556);
      END_STATE();
    case 679:
      if (lookahead == 'l') ADVANCE(1098);
      END_STATE();
    case 680:
      if (lookahead == 'l') ADVANCE(1099);
      END_STATE();
    case 681:
      if (lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 682:
      if (lookahead == 'l') ADVANCE(1105);
      END_STATE();
    case 683:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 684:
      if (lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 685:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 686:
      if (lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 687:
      if (lookahead == 'l') ADVANCE(612);
      END_STATE();
    case 688:
      if (lookahead == 'l') ADVANCE(625);
      END_STATE();
    case 689:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 690:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 691:
      if (lookahead == 'l') ADVANCE(924);
      END_STATE();
    case 692:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 693:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 694:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 695:
      if (lookahead == 'l') ADVANCE(462);
      END_STATE();
    case 696:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 697:
      if (lookahead == 'l') ADVANCE(714);
      END_STATE();
    case 698:
      if (lookahead == 'l') ADVANCE(624);
      END_STATE();
    case 699:
      if (lookahead == 'l') ADVANCE(1077);
      END_STATE();
    case 700:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 701:
      if (lookahead == 'l') ADVANCE(560);
      END_STATE();
    case 702:
      if (lookahead == 'l') ADVANCE(562);
      END_STATE();
    case 703:
      if (lookahead == 'm') ADVANCE(1118);
      END_STATE();
    case 704:
      if (lookahead == 'm') ADVANCE(1208);
      END_STATE();
    case 705:
      if (lookahead == 'm') ADVANCE(1210);
      END_STATE();
    case 706:
      if (lookahead == 'm') ADVANCE(1207);
      END_STATE();
    case 707:
      if (lookahead == 'm') ADVANCE(1212);
      END_STATE();
    case 708:
      if (lookahead == 'm') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 709:
      if (lookahead == 'm') ADVANCE(711);
      END_STATE();
    case 710:
      if (lookahead == 'm') ADVANCE(614);
      END_STATE();
    case 711:
      if (lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 712:
      if (lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 713:
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 714:
      if (lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 715:
      if (lookahead == 'm') ADVANCE(916);
      END_STATE();
    case 716:
      if (lookahead == 'm') ADVANCE(918);
      END_STATE();
    case 717:
      if (lookahead == 'm') ADVANCE(488);
      END_STATE();
    case 718:
      if (lookahead == 'm') ADVANCE(923);
      END_STATE();
    case 719:
      if (lookahead == 'm') ADVANCE(926);
      END_STATE();
    case 720:
      if (lookahead == 'm') ADVANCE(460);
      END_STATE();
    case 721:
      if (lookahead == 'm') ADVANCE(855);
      END_STATE();
    case 722:
      if (lookahead == 'm') ADVANCE(653);
      END_STATE();
    case 723:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 724:
      if (lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 725:
      if (lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 726:
      if (lookahead == 'm') ADVANCE(723);
      END_STATE();
    case 727:
      if (lookahead == 'm') ADVANCE(725);
      END_STATE();
    case 728:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 729:
      if (lookahead == 'n') ADVANCE(554);
      END_STATE();
    case 730:
      if (lookahead == 'n') ADVANCE(1141);
      END_STATE();
    case 731:
      if (lookahead == 'n') ADVANCE(1179);
      END_STATE();
    case 732:
      if (lookahead == 'n') ADVANCE(1152);
      END_STATE();
    case 733:
      if (lookahead == 'n') ADVANCE(1167);
      END_STATE();
    case 734:
      if (lookahead == 'n') ADVANCE(1161);
      END_STATE();
    case 735:
      if (lookahead == 'n') ADVANCE(1171);
      END_STATE();
    case 736:
      if (lookahead == 'n') ADVANCE(1181);
      END_STATE();
    case 737:
      if (lookahead == 'n') ADVANCE(1182);
      END_STATE();
    case 738:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 739:
      if (lookahead == 'n') ADVANCE(541);
      END_STATE();
    case 740:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 741:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 742:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 743:
      if (lookahead == 'n') ADVANCE(801);
      END_STATE();
    case 744:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 745:
      if (lookahead == 'n') ADVANCE(552);
      END_STATE();
    case 746:
      if (lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 747:
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == 't') ADVANCE(887);
      END_STATE();
    case 748:
      if (lookahead == 'n') ADVANCE(1038);
      END_STATE();
    case 749:
      if (lookahead == 'n') ADVANCE(1046);
      END_STATE();
    case 750:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 751:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 752:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 753:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 754:
      if (lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 755:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 756:
      if (lookahead == 'n') ADVANCE(1013);
      END_STATE();
    case 757:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 758:
      if (lookahead == 'n') ADVANCE(1003);
      END_STATE();
    case 759:
      if (lookahead == 'n') ADVANCE(917);
      END_STATE();
    case 760:
      if (lookahead == 'n') ADVANCE(1053);
      END_STATE();
    case 761:
      if (lookahead == 'n') ADVANCE(1004);
      END_STATE();
    case 762:
      if (lookahead == 'n') ADVANCE(1005);
      END_STATE();
    case 763:
      if (lookahead == 'n') ADVANCE(969);
      END_STATE();
    case 764:
      if (lookahead == 'n') ADVANCE(1026);
      END_STATE();
    case 765:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 766:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 767:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 768:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 769:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 770:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 771:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 772:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 773:
      if (lookahead == 'n') ADVANCE(1048);
      END_STATE();
    case 774:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 775:
      if (lookahead == 'n') ADVANCE(649);
      END_STATE();
    case 776:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 777:
      if (lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 778:
      if (lookahead == 'n') ADVANCE(652);
      END_STATE();
    case 779:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 780:
      if (lookahead == 'n') ADVANCE(978);
      END_STATE();
    case 781:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 782:
      if (lookahead == 'n') ADVANCE(981);
      END_STATE();
    case 783:
      if (lookahead == 'n') ADVANCE(983);
      END_STATE();
    case 784:
      if (lookahead == 'n') ADVANCE(1058);
      END_STATE();
    case 785:
      if (lookahead == 'n') ADVANCE(1059);
      END_STATE();
    case 786:
      if (lookahead == 'n') ADVANCE(1060);
      END_STATE();
    case 787:
      if (lookahead == 'n') ADVANCE(1061);
      END_STATE();
    case 788:
      if (lookahead == 'n') ADVANCE(846);
      END_STATE();
    case 789:
      if (lookahead == 'n') ADVANCE(660);
      END_STATE();
    case 790:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 791:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 792:
      if (lookahead == 'o') ADVANCE(1246);
      END_STATE();
    case 793:
      if (lookahead == 'o') ADVANCE(1087);
      END_STATE();
    case 794:
      if (lookahead == 'o') ADVANCE(1145);
      END_STATE();
    case 795:
      if (lookahead == 'o') ADVANCE(938);
      END_STATE();
    case 796:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 797:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 798:
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(871);
      END_STATE();
    case 799:
      if (lookahead == 'o') ADVANCE(1069);
      END_STATE();
    case 800:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 801:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 802:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 803:
      if (lookahead == 'o') ADVANCE(891);
      END_STATE();
    case 804:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 805:
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 806:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 807:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 808:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 809:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 810:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 811:
      if (lookahead == 'o') ADVANCE(902);
      END_STATE();
    case 812:
      if (lookahead == 'o') ADVANCE(876);
      END_STATE();
    case 813:
      if (lookahead == 'o') ADVANCE(771);
      END_STATE();
    case 814:
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 815:
      if (lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 816:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 817:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 818:
      if (lookahead == 'o') ADVANCE(882);
      END_STATE();
    case 819:
      if (lookahead == 'o') ADVANCE(736);
      END_STATE();
    case 820:
      if (lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 821:
      if (lookahead == 'o') ADVANCE(1030);
      END_STATE();
    case 822:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 823:
      if (lookahead == 'o') ADVANCE(1088);
      END_STATE();
    case 824:
      if (lookahead == 'o') ADVANCE(1071);
      END_STATE();
    case 825:
      if (lookahead == 'o') ADVANCE(950);
      END_STATE();
    case 826:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 827:
      if (lookahead == 'o') ADVANCE(954);
      END_STATE();
    case 828:
      if (lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 829:
      if (lookahead == 'o') ADVANCE(951);
      END_STATE();
    case 830:
      if (lookahead == 'o') ADVANCE(1073);
      END_STATE();
    case 831:
      if (lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 832:
      if (lookahead == 'o') ADVANCE(1074);
      END_STATE();
    case 833:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 834:
      if (lookahead == 'o') ADVANCE(957);
      END_STATE();
    case 835:
      if (lookahead == 'o') ADVANCE(958);
      END_STATE();
    case 836:
      if (lookahead == 'o') ADVANCE(904);
      END_STATE();
    case 837:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 838:
      if (lookahead == 'o') ADVANCE(905);
      END_STATE();
    case 839:
      if (lookahead == 'o') ADVANCE(909);
      END_STATE();
    case 840:
      if (lookahead == 'o') ADVANCE(906);
      END_STATE();
    case 841:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 842:
      if (lookahead == 'o') ADVANCE(866);
      END_STATE();
    case 843:
      if (lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 844:
      if (lookahead == 'o') ADVANCE(867);
      END_STATE();
    case 845:
      if (lookahead == 'o') ADVANCE(868);
      END_STATE();
    case 846:
      if (lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 847:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 848:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 849:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 850:
      if (lookahead == 'p') ADVANCE(573);
      END_STATE();
    case 851:
      if (lookahead == 'p') ADVANCE(903);
      END_STATE();
    case 852:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 853:
      if (lookahead == 'p') ADVANCE(885);
      END_STATE();
    case 854:
      if (lookahead == 'p') ADVANCE(814);
      END_STATE();
    case 855:
      if (lookahead == 'p') ADVANCE(1029);
      END_STATE();
    case 856:
      if (lookahead == 'p') ADVANCE(533);
      END_STATE();
    case 857:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 858:
      if (lookahead == 'p') ADVANCE(511);
      END_STATE();
    case 859:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 860:
      if (lookahead == 'p') ADVANCE(813);
      END_STATE();
    case 861:
      if (lookahead == 'p') ADVANCE(1075);
      END_STATE();
    case 862:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 863:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 864:
      if (lookahead == 'p') ADVANCE(1035);
      END_STATE();
    case 865:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 866:
      if (lookahead == 'p') ADVANCE(524);
      END_STATE();
    case 867:
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 868:
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 869:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 870:
      if (lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 871:
      if (lookahead == 'r') ADVANCE(1084);
      END_STATE();
    case 872:
      if (lookahead == 'r') ADVANCE(1068);
      END_STATE();
    case 873:
      if (lookahead == 'r') ADVANCE(1153);
      END_STATE();
    case 874:
      if (lookahead == 'r') ADVANCE(1144);
      END_STATE();
    case 875:
      if (lookahead == 'r') ADVANCE(1207);
      END_STATE();
    case 876:
      if (lookahead == 'r') ADVANCE(1090);
      END_STATE();
    case 877:
      if (lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 878:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 879:
      if (lookahead == 'r') ADVANCE(1037);
      END_STATE();
    case 880:
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 881:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 882:
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 883:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 884:
      if (lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 885:
      if (lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 886:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 887:
      if (lookahead == 'r') ADVANCE(800);
      END_STATE();
    case 888:
      if (lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 889:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 890:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 891:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 892:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 893:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 894:
      if (lookahead == 'r') ADVANCE(824);
      END_STATE();
    case 895:
      if (lookahead == 'r') ADVANCE(945);
      END_STATE();
    case 896:
      if (lookahead == 'r') ADVANCE(1019);
      END_STATE();
    case 897:
      if (lookahead == 'r') ADVANCE(799);
      END_STATE();
    case 898:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 899:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 900:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 901:
      if (lookahead == 'r') ADVANCE(853);
      END_STATE();
    case 902:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 903:
      if (lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 904:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 905:
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 906:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 907:
      if (lookahead == 'r') ADVANCE(1091);
      END_STATE();
    case 908:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 909:
      if (lookahead == 'r') ADVANCE(1092);
      END_STATE();
    case 910:
      if (lookahead == 's') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(1022);
      END_STATE();
    case 911:
      if (lookahead == 's') ADVANCE(1244);
      END_STATE();
    case 912:
      if (lookahead == 's') ADVANCE(1138);
      END_STATE();
    case 913:
      if (lookahead == 's') ADVANCE(1211);
      END_STATE();
    case 914:
      if (lookahead == 's') ADVANCE(1123);
      END_STATE();
    case 915:
      if (lookahead == 's') ADVANCE(1173);
      END_STATE();
    case 916:
      if (lookahead == 's') ADVANCE(1183);
      END_STATE();
    case 917:
      if (lookahead == 's') ADVANCE(1125);
      END_STATE();
    case 918:
      if (lookahead == 's') ADVANCE(1172);
      END_STATE();
    case 919:
      if (lookahead == 's') ADVANCE(1170);
      END_STATE();
    case 920:
      if (lookahead == 's') ADVANCE(1142);
      END_STATE();
    case 921:
      if (lookahead == 's') ADVANCE(1128);
      END_STATE();
    case 922:
      if (lookahead == 's') ADVANCE(1140);
      END_STATE();
    case 923:
      if (lookahead == 's') ADVANCE(1133);
      END_STATE();
    case 924:
      if (lookahead == 's') ADVANCE(1168);
      END_STATE();
    case 925:
      if (lookahead == 's') ADVANCE(1129);
      END_STATE();
    case 926:
      if (lookahead == 's') ADVANCE(1169);
      END_STATE();
    case 927:
      if (lookahead == 's') ADVANCE(1109);
      END_STATE();
    case 928:
      if (lookahead == 's') ADVANCE(1212);
      END_STATE();
    case 929:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 930:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 931:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 932:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 933:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 934:
      if (lookahead == 's') ADVANCE(663);
      END_STATE();
    case 935:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 936:
      if (lookahead == 's') ADVANCE(860);
      END_STATE();
    case 937:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 938:
      if (lookahead == 's') ADVANCE(999);
      END_STATE();
    case 939:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 940:
      if (lookahead == 's') ADVANCE(933);
      END_STATE();
    case 941:
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 942:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 943:
      if (lookahead == 's') ADVANCE(566);
      END_STATE();
    case 944:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 945:
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 946:
      if (lookahead == 's') ADVANCE(913);
      END_STATE();
    case 947:
      if (lookahead == 's') ADVANCE(568);
      END_STATE();
    case 948:
      if (lookahead == 's') ADVANCE(939);
      END_STATE();
    case 949:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 950:
      if (lookahead == 's') ADVANCE(1015);
      END_STATE();
    case 951:
      if (lookahead == 's') ADVANCE(1025);
      END_STATE();
    case 952:
      if (lookahead == 's') ADVANCE(914);
      END_STATE();
    case 953:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 954:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 955:
      if (lookahead == 's') ADVANCE(1007);
      END_STATE();
    case 956:
      if (lookahead == 's') ADVANCE(1018);
      END_STATE();
    case 957:
      if (lookahead == 's') ADVANCE(1028);
      END_STATE();
    case 958:
      if (lookahead == 's') ADVANCE(1041);
      END_STATE();
    case 959:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 960:
      if (lookahead == 's') ADVANCE(1023);
      END_STATE();
    case 961:
      if (lookahead == 's') ADVANCE(928);
      END_STATE();
    case 962:
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 963:
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 964:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 965:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 966:
      if (lookahead == 's') ADVANCE(1039);
      END_STATE();
    case 967:
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 968:
      if (lookahead == 's') ADVANCE(1043);
      END_STATE();
    case 969:
      if (lookahead == 's') ADVANCE(944);
      END_STATE();
    case 970:
      if (lookahead == 's') ADVANCE(947);
      END_STATE();
    case 971:
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 972:
      if (lookahead == 's') ADVANCE(1034);
      END_STATE();
    case 973:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 974:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 975:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 976:
      if (lookahead == 's') ADVANCE(1052);
      END_STATE();
    case 977:
      if (lookahead == 's') ADVANCE(594);
      END_STATE();
    case 978:
      if (lookahead == 's') ADVANCE(975);
      END_STATE();
    case 979:
      if (lookahead == 's') ADVANCE(1049);
      END_STATE();
    case 980:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 981:
      if (lookahead == 's') ADVANCE(980);
      END_STATE();
    case 982:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 983:
      if (lookahead == 's') ADVANCE(982);
      END_STATE();
    case 984:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 985:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 986:
      if (lookahead == 's') ADVANCE(599);
      END_STATE();
    case 987:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 988:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 989:
      if (lookahead == 's') ADVANCE(604);
      END_STATE();
    case 990:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 991:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 992:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 993:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 994:
      if (lookahead == 's') ADVANCE(1066);
      END_STATE();
    case 995:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 996:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 997:
      if (lookahead == 's') ADVANCE(536);
      END_STATE();
    case 998:
      if (lookahead == 's') ADVANCE(669);
      END_STATE();
    case 999:
      if (lookahead == 't') ADVANCE(1114);
      END_STATE();
    case 1000:
      if (lookahead == 't') ADVANCE(1120);
      END_STATE();
    case 1001:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 1002:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 1003:
      if (lookahead == 't') ADVANCE(1162);
      END_STATE();
    case 1004:
      if (lookahead == 't') ADVANCE(1176);
      END_STATE();
    case 1005:
      if (lookahead == 't') ADVANCE(1116);
      END_STATE();
    case 1006:
      if (lookahead == 't') ADVANCE(1143);
      END_STATE();
    case 1007:
      if (lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 1008:
      if (lookahead == 't') ADVANCE(1164);
      END_STATE();
    case 1009:
      if (lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 1010:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 1011:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 1012:
      if (lookahead == 't') ADVANCE(1076);
      END_STATE();
    case 1013:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 1014:
      if (lookahead == 't') ADVANCE(872);
      END_STATE();
    case 1015:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 1016:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 1017:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 1018:
      if (lookahead == 't') ADVANCE(848);
      END_STATE();
    case 1019:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 1020:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 1021:
      if (lookahead == 't') ADVANCE(1100);
      END_STATE();
    case 1022:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 1023:
      if (lookahead == 't') ADVANCE(862);
      END_STATE();
    case 1024:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 1025:
      if (lookahead == 't') ADVANCE(930);
      END_STATE();
    case 1026:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 1027:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 1028:
      if (lookahead == 't') ADVANCE(984);
      END_STATE();
    case 1029:
      if (lookahead == 't') ADVANCE(920);
      END_STATE();
    case 1030:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 1031:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 1032:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 1033:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 1034:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 1035:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 1036:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 1037:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 1038:
      if (lookahead == 't') ADVANCE(615);
      END_STATE();
    case 1039:
      if (lookahead == 't') ADVANCE(857);
      END_STATE();
    case 1040:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 1041:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 1042:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 1043:
      if (lookahead == 't') ADVANCE(859);
      END_STATE();
    case 1044:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 1045:
      if (lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 1046:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 1047:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 1048:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 1049:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 1050:
      if (lookahead == 't') ADVANCE(1036);
      END_STATE();
    case 1051:
      if (lookahead == 't') ADVANCE(643);
      END_STATE();
    case 1052:
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 1053:
      if (lookahead == 't') ADVANCE(637);
      END_STATE();
    case 1054:
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 1055:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 1056:
      if (lookahead == 't') ADVANCE(648);
      END_STATE();
    case 1057:
      if (lookahead == 't') ADVANCE(650);
      END_STATE();
    case 1058:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 1059:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 1060:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 1061:
      if (lookahead == 't') ADVANCE(659);
      END_STATE();
    case 1062:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 1063:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 1064:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 1065:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 1066:
      if (lookahead == 't') ADVANCE(869);
      END_STATE();
    case 1067:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 1068:
      if (lookahead == 'u') ADVANCE(847);
      END_STATE();
    case 1069:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 1070:
      if (lookahead == 'u') ADVANCE(1016);
      END_STATE();
    case 1071:
      if (lookahead == 'u') ADVANCE(849);
      END_STATE();
    case 1072:
      if (lookahead == 'u') ADVANCE(1042);
      END_STATE();
    case 1073:
      if (lookahead == 'u') ADVANCE(1006);
      END_STATE();
    case 1074:
      if (lookahead == 'u') ADVANCE(1008);
      END_STATE();
    case 1075:
      if (lookahead == 'u') ADVANCE(1009);
      END_STATE();
    case 1076:
      if (lookahead == 'u') ADVANCE(898);
      END_STATE();
    case 1077:
      if (lookahead == 'u') ADVANCE(900);
      END_STATE();
    case 1078:
      if (lookahead == 'u') ADVANCE(972);
      END_STATE();
    case 1079:
      if (lookahead == 'u') ADVANCE(1062);
      END_STATE();
    case 1080:
      if (lookahead == 'u') ADVANCE(1064);
      END_STATE();
    case 1081:
      if (lookahead == 'u') ADVANCE(1065);
      END_STATE();
    case 1082:
      if (lookahead == 'u') ADVANCE(1067);
      END_STATE();
    case 1083:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 1084:
      if (lookahead == 'v') ADVANCE(507);
      END_STATE();
    case 1085:
      if (lookahead == 'v') ADVANCE(483);
      END_STATE();
    case 1086:
      if (lookahead == 'v') ADVANCE(534);
      END_STATE();
    case 1087:
      if (lookahead == 'w') ADVANCE(779);
      END_STATE();
    case 1088:
      if (lookahead == 'w') ADVANCE(731);
      END_STATE();
    case 1089:
      if (lookahead == 'w') ADVANCE(432);
      END_STATE();
    case 1090:
      if (lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 1091:
      if (lookahead == 'w') ADVANCE(330);
      END_STATE();
    case 1092:
      if (lookahead == 'w') ADVANCE(331);
      END_STATE();
    case 1093:
      if (lookahead == 'w') ADVANCE(781);
      END_STATE();
    case 1094:
      if (lookahead == 'x') ADVANCE(223);
      END_STATE();
    case 1095:
      if (lookahead == 'x') ADVANCE(198);
      END_STATE();
    case 1096:
      if (lookahead == 'x') ADVANCE(407);
      END_STATE();
    case 1097:
      if (lookahead == 'x') ADVANCE(129);
      END_STATE();
    case 1098:
      if (lookahead == 'y') ADVANCE(1119);
      END_STATE();
    case 1099:
      if (lookahead == 'y') ADVANCE(1175);
      END_STATE();
    case 1100:
      if (lookahead == 'y') ADVANCE(1204);
      END_STATE();
    case 1101:
      if (lookahead == 'y') ADVANCE(285);
      END_STATE();
    case 1102:
      if (lookahead == 'y') ADVANCE(200);
      END_STATE();
    case 1103:
      if (lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 1104:
      if (lookahead == 'y') ADVANCE(932);
      END_STATE();
    case 1105:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 1106:
      if (lookahead == 'y') ADVANCE(963);
      END_STATE();
    case 1107:
      if (lookahead == 'z') ADVANCE(456);
      END_STATE();
    case 1108:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1204);
      END_STATE();
    case 1109:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1204);
      END_STATE();
    case 1110:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1111:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1243);
      END_STATE();
    case 1112:
      if (eof) ADVANCE(1113);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1189);
      if (lookahead == '#') ADVANCE(1255);
      if (lookahead == '*') ADVANCE(1149);
      if (lookahead == '+') ADVANCE(1134);
      if (lookahead == ',') ADVANCE(1131);
      if (lookahead == '-') ADVANCE(1135);
      if (lookahead == '0') ADVANCE(1248);
      if (lookahead == ':') ADVANCE(1132);
      if (lookahead == '?') ADVANCE(1191);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'B') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(191);
      if (lookahead == 'D') ADVANCE(224);
      if (lookahead == 'E') ADVANCE(271);
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead == 'G') ADVANCE(277);
      if (lookahead == 'H') ADVANCE(795);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'K') ADVANCE(369);
      if (lookahead == 'L') ADVANCE(791);
      if (lookahead == 'Q') ADVANCE(289);
      if (lookahead == 'S') ADVANCE(1192);
      if (lookahead == 'V') ADVANCE(226);
      if (lookahead == '^') ADVANCE(1139);
      if (lookahead == 'a') ADVANCE(910);
      if (lookahead == 'c') ADVANCE(798);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(792);
      if (lookahead == 'r') ADVANCE(929);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 'w') ADVANCE(449);
      if (lookahead == 'y') ADVANCE(468);
      if (lookahead == '}') ADVANCE(1225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1249);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'K') ADVANCE(466);
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1121);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(934);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1154);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T') ADVANCE(654);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token2);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == 'T') ADVANCE(1218);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1213);
      if (lookahead == 'H' ||
          lookahead == 'I' ||
          lookahead == 'K' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(1216);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1213);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1222);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1243);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1217);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(1213);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1243);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1216);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1218);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1243);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1205);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(687);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(399);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1243);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(1222);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1243);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == 'S') ADVANCE(239);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '{') ADVANCE(1222);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '{') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1217);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(1213);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1216);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1218);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(1240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1243);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1242);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1249);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1255);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1256);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(1256);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1257);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1258);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1112},
  [2] = {.lex_state = 1112},
  [3] = {.lex_state = 1112},
  [4] = {.lex_state = 1112},
  [5] = {.lex_state = 1112},
  [6] = {.lex_state = 1112},
  [7] = {.lex_state = 1112},
  [8] = {.lex_state = 1112},
  [9] = {.lex_state = 1112},
  [10] = {.lex_state = 1112},
  [11] = {.lex_state = 1112},
  [12] = {.lex_state = 1112},
  [13] = {.lex_state = 1112},
  [14] = {.lex_state = 1112},
  [15] = {.lex_state = 1112},
  [16] = {.lex_state = 1112},
  [17] = {.lex_state = 1112},
  [18] = {.lex_state = 1112},
  [19] = {.lex_state = 1112},
  [20] = {.lex_state = 1112},
  [21] = {.lex_state = 1112},
  [22] = {.lex_state = 1112},
  [23] = {.lex_state = 1112},
  [24] = {.lex_state = 1112},
  [25] = {.lex_state = 1112},
  [26] = {.lex_state = 1112},
  [27] = {.lex_state = 1112},
  [28] = {.lex_state = 1112},
  [29] = {.lex_state = 1112},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 1112},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 1112},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 1112},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 24},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 32},
  [104] = {.lex_state = 1112},
  [105] = {.lex_state = 1112},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 1112},
  [108] = {.lex_state = 1112},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 31},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 1112},
  [115] = {.lex_state = 1112},
  [116] = {.lex_state = 1112},
  [117] = {.lex_state = 1112},
  [118] = {.lex_state = 1112},
  [119] = {.lex_state = 1112},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 1112},
  [122] = {.lex_state = 1112},
  [123] = {.lex_state = 1112},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 1112},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 1112},
  [128] = {.lex_state = 1112},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 21},
  [131] = {.lex_state = 1112},
  [132] = {.lex_state = 31},
  [133] = {.lex_state = 1112},
  [134] = {.lex_state = 1112},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 1112},
  [137] = {.lex_state = 1112},
  [138] = {.lex_state = 1112},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 20},
  [141] = {.lex_state = 1112},
  [142] = {.lex_state = 1112},
  [143] = {.lex_state = 1112},
  [144] = {.lex_state = 1112},
  [145] = {.lex_state = 1112},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 1112},
  [148] = {.lex_state = 1112},
  [149] = {.lex_state = 1112},
  [150] = {.lex_state = 1112},
  [151] = {.lex_state = 1112},
  [152] = {.lex_state = 1112},
  [153] = {.lex_state = 1112},
  [154] = {.lex_state = 1112},
  [155] = {.lex_state = 1112},
  [156] = {.lex_state = 1112},
  [157] = {.lex_state = 31},
  [158] = {.lex_state = 1112},
  [159] = {.lex_state = 1112},
  [160] = {.lex_state = 1112},
  [161] = {.lex_state = 1112},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 17},
  [164] = {.lex_state = 1112},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 1112},
  [167] = {.lex_state = 1112},
  [168] = {.lex_state = 28},
  [169] = {.lex_state = 1112},
  [170] = {.lex_state = 33},
  [171] = {.lex_state = 1112},
  [172] = {.lex_state = 31},
  [173] = {.lex_state = 31},
  [174] = {.lex_state = 31},
  [175] = {.lex_state = 1112},
  [176] = {.lex_state = 31},
  [177] = {.lex_state = 31},
  [178] = {.lex_state = 31},
  [179] = {.lex_state = 31},
  [180] = {.lex_state = 31},
  [181] = {.lex_state = 31},
  [182] = {.lex_state = 1112},
  [183] = {.lex_state = 31},
  [184] = {.lex_state = 31},
  [185] = {.lex_state = 31},
  [186] = {.lex_state = 1112},
  [187] = {.lex_state = 1112},
  [188] = {.lex_state = 1112},
  [189] = {.lex_state = 1112},
  [190] = {.lex_state = 1112},
  [191] = {.lex_state = 31},
  [192] = {.lex_state = 31},
  [193] = {.lex_state = 1112},
  [194] = {.lex_state = 1112},
  [195] = {.lex_state = 31},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 31},
  [198] = {.lex_state = 31},
  [199] = {.lex_state = 31},
  [200] = {.lex_state = 31},
  [201] = {.lex_state = 31},
  [202] = {.lex_state = 31},
  [203] = {.lex_state = 31},
  [204] = {.lex_state = 1112},
  [205] = {.lex_state = 31},
  [206] = {.lex_state = 31},
  [207] = {.lex_state = 1112},
  [208] = {.lex_state = 1112},
  [209] = {.lex_state = 1112},
  [210] = {.lex_state = 1112},
  [211] = {.lex_state = 31},
  [212] = {.lex_state = 31},
  [213] = {.lex_state = 31},
  [214] = {.lex_state = 31},
  [215] = {.lex_state = 1112},
  [216] = {.lex_state = 31},
  [217] = {.lex_state = 31},
  [218] = {.lex_state = 31},
  [219] = {.lex_state = 1112},
  [220] = {.lex_state = 31},
  [221] = {.lex_state = 31},
  [222] = {.lex_state = 28},
  [223] = {.lex_state = 31},
  [224] = {.lex_state = 1112},
  [225] = {.lex_state = 31},
  [226] = {.lex_state = 31},
  [227] = {.lex_state = 1112},
  [228] = {.lex_state = 1112},
  [229] = {.lex_state = 31},
  [230] = {.lex_state = 1112},
  [231] = {.lex_state = 1112},
  [232] = {.lex_state = 31},
  [233] = {.lex_state = 1112},
  [234] = {.lex_state = 31},
  [235] = {.lex_state = 1112},
  [236] = {.lex_state = 31},
  [237] = {.lex_state = 31},
  [238] = {.lex_state = 1112},
  [239] = {.lex_state = 31},
  [240] = {.lex_state = 1112},
  [241] = {.lex_state = 1112},
  [242] = {.lex_state = 1112},
  [243] = {.lex_state = 31},
  [244] = {.lex_state = 31},
  [245] = {.lex_state = 21},
  [246] = {.lex_state = 31},
  [247] = {.lex_state = 31},
  [248] = {.lex_state = 1112},
  [249] = {.lex_state = 1112},
  [250] = {.lex_state = 1112},
  [251] = {.lex_state = 31},
  [252] = {.lex_state = 1112},
  [253] = {.lex_state = 1112},
  [254] = {.lex_state = 1112},
  [255] = {.lex_state = 33},
  [256] = {.lex_state = 31},
  [257] = {.lex_state = 1112},
  [258] = {.lex_state = 1112},
  [259] = {.lex_state = 1112},
  [260] = {.lex_state = 1112},
  [261] = {.lex_state = 31},
  [262] = {.lex_state = 31},
  [263] = {.lex_state = 1112},
  [264] = {.lex_state = 31},
  [265] = {.lex_state = 1112},
  [266] = {.lex_state = 1112},
  [267] = {.lex_state = 1112},
  [268] = {.lex_state = 1112},
  [269] = {.lex_state = 1112},
  [270] = {.lex_state = 1112},
  [271] = {.lex_state = 1112},
  [272] = {.lex_state = 1112},
  [273] = {.lex_state = 1112},
  [274] = {.lex_state = 1112},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 1112},
  [277] = {.lex_state = 1112},
  [278] = {.lex_state = 31},
  [279] = {.lex_state = 1112},
  [280] = {.lex_state = 1112},
  [281] = {.lex_state = 21},
  [282] = {.lex_state = 33},
  [283] = {.lex_state = 33},
  [284] = {.lex_state = 1112},
  [285] = {.lex_state = 1112},
  [286] = {.lex_state = 20},
  [287] = {.lex_state = 293},
  [288] = {.lex_state = 1112},
  [289] = {.lex_state = 1112},
  [290] = {.lex_state = 1112},
  [291] = {.lex_state = 1112},
  [292] = {.lex_state = 1112},
  [293] = {.lex_state = 1112},
  [294] = {.lex_state = 1112},
  [295] = {.lex_state = 1112},
  [296] = {.lex_state = 1112},
  [297] = {.lex_state = 1112},
  [298] = {.lex_state = 1112},
  [299] = {.lex_state = 1112},
  [300] = {.lex_state = 1112},
  [301] = {.lex_state = 1112},
  [302] = {.lex_state = 1112},
  [303] = {.lex_state = 1112},
  [304] = {.lex_state = 1112},
  [305] = {.lex_state = 1112},
  [306] = {.lex_state = 1112},
  [307] = {.lex_state = 1112},
  [308] = {.lex_state = 1112},
  [309] = {.lex_state = 1112},
  [310] = {.lex_state = 1112},
  [311] = {.lex_state = 1112},
  [312] = {.lex_state = 1112},
  [313] = {.lex_state = 1112},
  [314] = {.lex_state = 1112},
  [315] = {.lex_state = 1112},
  [316] = {.lex_state = 1112},
  [317] = {.lex_state = 1112},
  [318] = {.lex_state = 1112},
  [319] = {.lex_state = 1112},
  [320] = {.lex_state = 1112},
  [321] = {.lex_state = 1112},
  [322] = {.lex_state = 1112},
  [323] = {.lex_state = 1112},
  [324] = {.lex_state = 1112},
  [325] = {.lex_state = 1112},
  [326] = {.lex_state = 1112},
  [327] = {.lex_state = 1112},
  [328] = {.lex_state = 1112},
  [329] = {.lex_state = 1112},
  [330] = {.lex_state = 1112},
  [331] = {.lex_state = 1112},
  [332] = {.lex_state = 1112},
  [333] = {.lex_state = 1112},
  [334] = {.lex_state = 1112},
  [335] = {.lex_state = 1112},
  [336] = {.lex_state = 1112},
  [337] = {.lex_state = 1112},
  [338] = {.lex_state = 1112},
  [339] = {.lex_state = 1112},
  [340] = {.lex_state = 1112},
  [341] = {.lex_state = 1112},
  [342] = {.lex_state = 1112},
  [343] = {.lex_state = 10},
  [344] = {.lex_state = 1112},
  [345] = {.lex_state = 1112},
  [346] = {.lex_state = 1112},
  [347] = {.lex_state = 1112},
  [348] = {.lex_state = 1112},
  [349] = {.lex_state = 1112},
  [350] = {.lex_state = 1112},
  [351] = {.lex_state = 1112},
  [352] = {.lex_state = 1112},
  [353] = {.lex_state = 1112},
  [354] = {.lex_state = 1112},
  [355] = {.lex_state = 1112},
  [356] = {.lex_state = 1112},
  [357] = {.lex_state = 1112},
  [358] = {.lex_state = 1112},
  [359] = {.lex_state = 1112},
  [360] = {.lex_state = 1112},
  [361] = {.lex_state = 1112},
  [362] = {.lex_state = 1112},
  [363] = {.lex_state = 1112},
  [364] = {.lex_state = 1112},
  [365] = {.lex_state = 10},
  [366] = {.lex_state = 1112},
  [367] = {.lex_state = 1112},
  [368] = {.lex_state = 1112},
  [369] = {.lex_state = 1112},
  [370] = {.lex_state = 1112},
  [371] = {.lex_state = 1112},
  [372] = {.lex_state = 1112},
  [373] = {.lex_state = 1112},
  [374] = {.lex_state = 1112},
  [375] = {.lex_state = 1112},
  [376] = {.lex_state = 1112},
  [377] = {.lex_state = 1112},
  [378] = {.lex_state = 1112},
  [379] = {.lex_state = 1112},
  [380] = {.lex_state = 1112},
  [381] = {.lex_state = 1112},
  [382] = {.lex_state = 1112},
  [383] = {.lex_state = 1112},
  [384] = {.lex_state = 1112},
  [385] = {.lex_state = 1112},
  [386] = {.lex_state = 1112},
  [387] = {.lex_state = 1112},
  [388] = {.lex_state = 1112},
  [389] = {.lex_state = 1112},
  [390] = {.lex_state = 1112},
  [391] = {.lex_state = 1112},
  [392] = {.lex_state = 1112},
  [393] = {.lex_state = 1112},
  [394] = {.lex_state = 1112},
  [395] = {.lex_state = 1112},
  [396] = {.lex_state = 1112},
  [397] = {.lex_state = 1112},
  [398] = {.lex_state = 1112},
  [399] = {.lex_state = 1112},
  [400] = {.lex_state = 1112},
  [401] = {.lex_state = 1112},
  [402] = {.lex_state = 1112},
  [403] = {.lex_state = 1112},
  [404] = {.lex_state = 1112},
  [405] = {.lex_state = 1112},
  [406] = {.lex_state = 1112},
  [407] = {.lex_state = 1112},
  [408] = {.lex_state = 1112},
  [409] = {.lex_state = 1112},
  [410] = {.lex_state = 1112},
  [411] = {.lex_state = 10},
  [412] = {.lex_state = 1112},
  [413] = {.lex_state = 1112},
  [414] = {.lex_state = 1112},
  [415] = {.lex_state = 1112},
  [416] = {.lex_state = 1112},
  [417] = {.lex_state = 1112},
  [418] = {.lex_state = 1112},
  [419] = {.lex_state = 1112},
  [420] = {.lex_state = 1112},
  [421] = {.lex_state = 1112},
  [422] = {.lex_state = 1112},
  [423] = {.lex_state = 1112},
  [424] = {.lex_state = 1112},
  [425] = {.lex_state = 1112},
  [426] = {.lex_state = 1112},
  [427] = {.lex_state = 1112},
  [428] = {.lex_state = 1111},
  [429] = {.lex_state = 1110},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 1112},
  [432] = {.lex_state = 1112},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 1112},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 1112},
  [438] = {.lex_state = 1112},
  [439] = {.lex_state = 1110},
  [440] = {.lex_state = 1112},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 1112},
  [443] = {.lex_state = 1112},
  [444] = {.lex_state = 10},
  [445] = {.lex_state = 33},
  [446] = {.lex_state = 1112},
  [447] = {.lex_state = 10},
  [448] = {.lex_state = 1110},
  [449] = {.lex_state = 1112},
  [450] = {.lex_state = 1112},
  [451] = {.lex_state = 10},
  [452] = {.lex_state = 1112},
  [453] = {.lex_state = 1112},
  [454] = {.lex_state = 1112},
  [455] = {.lex_state = 1112},
  [456] = {.lex_state = 33},
  [457] = {.lex_state = 1112},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 10},
  [460] = {.lex_state = 1112},
  [461] = {.lex_state = 1112},
  [462] = {.lex_state = 1112},
  [463] = {.lex_state = 1112},
  [464] = {.lex_state = 1112},
  [465] = {.lex_state = 1112},
  [466] = {.lex_state = 1110},
  [467] = {.lex_state = 1110},
  [468] = {.lex_state = 1110},
  [469] = {.lex_state = 1112},
  [470] = {.lex_state = 1110},
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
    [aux_sym__file_string_token1] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(433),
    [sym_host_declaration] = STATE(3),
    [sym_parameter] = STATE(351),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
    [sym_comment] = ACTIONS(109),
    [sym__space] = ACTIONS(111),
    [sym__eol] = ACTIONS(113),
  },
  [2] = {
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(351),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym_host_declaration_token1] = ACTIONS(117),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(120),
    [aux_sym__address_family_token1] = ACTIONS(123),
    [aux_sym__batch_mode_token1] = ACTIONS(126),
    [aux_sym__bind_address_token1] = ACTIONS(129),
    [aux_sym__bind_interface_token1] = ACTIONS(132),
    [aux_sym__canonical_domains_token1] = ACTIONS(135),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(138),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(141),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(144),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(147),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(150),
    [aux_sym__certificate_file_token1] = ACTIONS(153),
    [aux_sym__check_host_ip_token1] = ACTIONS(156),
    [aux_sym__ciphers_token1] = ACTIONS(159),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(162),
    [aux_sym__compression_token1] = ACTIONS(165),
    [aux_sym__connection_attempts_token1] = ACTIONS(168),
    [aux_sym__connect_timeout_token1] = ACTIONS(171),
    [aux_sym__control_master_token1] = ACTIONS(174),
    [aux_sym__control_persist_token1] = ACTIONS(177),
    [aux_sym__control_path_token1] = ACTIONS(180),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(183),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(186),
    [aux_sym__escape_char_token1] = ACTIONS(189),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(192),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(195),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(198),
    [aux_sym__forward_agent_token1] = ACTIONS(201),
    [aux_sym__forward_x11_token1] = ACTIONS(204),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(207),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(210),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(213),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(216),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(219),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(222),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(222),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(225),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(228),
    [aux_sym__host_key_alias_token1] = ACTIONS(231),
    [aux_sym__hostname_token1] = ACTIONS(234),
    [aux_sym__identities_only_token1] = ACTIONS(237),
    [aux_sym__identity_agent_token1] = ACTIONS(240),
    [aux_sym__identity_file_token1] = ACTIONS(243),
    [aux_sym__ignore_unknown_token1] = ACTIONS(246),
    [aux_sym__ipqos_token1] = ACTIONS(249),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(252),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(252),
    [aux_sym__kex_algorithms_token1] = ACTIONS(255),
    [aux_sym__known_hosts_command_token1] = ACTIONS(258),
    [aux_sym__local_command_token1] = ACTIONS(261),
    [aux_sym__local_forward_token1] = ACTIONS(264),
    [aux_sym__log_level_token1] = ACTIONS(267),
    [aux_sym__log_verbose_token1] = ACTIONS(270),
    [sym_comment] = ACTIONS(273),
    [sym__space] = ACTIONS(276),
    [sym__eol] = ACTIONS(279),
  },
  [3] = {
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(351),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(282),
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
    [sym__eol] = ACTIONS(284),
  },
  [4] = {
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
    [aux_sym__declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym_host_declaration_token1] = ACTIONS(288),
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
    [sym_comment] = ACTIONS(290),
    [sym__space] = ACTIONS(292),
    [sym__eol] = ACTIONS(286),
  },
  [5] = {
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
    [aux_sym__declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(294),
    [aux_sym_host_declaration_token1] = ACTIONS(296),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(298),
    [aux_sym__address_family_token1] = ACTIONS(301),
    [aux_sym__batch_mode_token1] = ACTIONS(304),
    [aux_sym__bind_address_token1] = ACTIONS(307),
    [aux_sym__bind_interface_token1] = ACTIONS(310),
    [aux_sym__canonical_domains_token1] = ACTIONS(313),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(316),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(319),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(322),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(325),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(328),
    [aux_sym__certificate_file_token1] = ACTIONS(331),
    [aux_sym__check_host_ip_token1] = ACTIONS(334),
    [aux_sym__ciphers_token1] = ACTIONS(337),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(340),
    [aux_sym__compression_token1] = ACTIONS(343),
    [aux_sym__connection_attempts_token1] = ACTIONS(346),
    [aux_sym__connect_timeout_token1] = ACTIONS(349),
    [aux_sym__control_master_token1] = ACTIONS(352),
    [aux_sym__control_persist_token1] = ACTIONS(355),
    [aux_sym__control_path_token1] = ACTIONS(358),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(361),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(364),
    [aux_sym__escape_char_token1] = ACTIONS(367),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(370),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(373),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(376),
    [aux_sym__forward_agent_token1] = ACTIONS(379),
    [aux_sym__forward_x11_token1] = ACTIONS(382),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(385),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(388),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(391),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(394),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(397),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(400),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(400),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(403),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(406),
    [aux_sym__host_key_alias_token1] = ACTIONS(409),
    [aux_sym__hostname_token1] = ACTIONS(412),
    [aux_sym__identities_only_token1] = ACTIONS(415),
    [aux_sym__identity_agent_token1] = ACTIONS(418),
    [aux_sym__identity_file_token1] = ACTIONS(421),
    [aux_sym__ignore_unknown_token1] = ACTIONS(424),
    [aux_sym__ipqos_token1] = ACTIONS(427),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(430),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(430),
    [aux_sym__kex_algorithms_token1] = ACTIONS(433),
    [aux_sym__known_hosts_command_token1] = ACTIONS(436),
    [aux_sym__local_command_token1] = ACTIONS(439),
    [aux_sym__local_forward_token1] = ACTIONS(442),
    [aux_sym__log_level_token1] = ACTIONS(445),
    [aux_sym__log_verbose_token1] = ACTIONS(448),
    [sym_comment] = ACTIONS(451),
    [sym__space] = ACTIONS(454),
    [sym__eol] = ACTIONS(294),
  },
  [6] = {
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
    [sym_comment] = ACTIONS(290),
    [sym__space] = ACTIONS(292),
  },
  [7] = {
    [sym_host_declaration] = STATE(17),
    [sym_parameter] = STATE(289),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
  [8] = {
    [sym__declarations] = STATE(16),
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
    [sym_comment] = ACTIONS(290),
    [sym__space] = ACTIONS(292),
  },
  [9] = {
    [sym__declarations] = STATE(28),
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
    [sym_comment] = ACTIONS(290),
    [sym__space] = ACTIONS(292),
  },
  [10] = {
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
    [sym_comment] = ACTIONS(290),
    [sym__space] = ACTIONS(292),
  },
  [11] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
    [sym_comment] = ACTIONS(290),
    [sym__space] = ACTIONS(292),
  },
  [12] = {
    [sym__declarations] = STATE(21),
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
    [sym_comment] = ACTIONS(290),
    [sym__space] = ACTIONS(292),
  },
  [13] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
    [sym_comment] = ACTIONS(290),
    [sym__space] = ACTIONS(292),
  },
  [14] = {
    [sym__declarations] = STATE(18),
    [sym_parameter] = STATE(333),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
    [sym_comment] = ACTIONS(290),
    [sym__space] = ACTIONS(292),
  },
  [15] = {
    [sym_parameter] = STATE(404),
    [sym__add_keys_to_agent] = STATE(350),
    [sym__address_family] = STATE(349),
    [sym__batch_mode] = STATE(341),
    [sym__bind_address] = STATE(338),
    [sym__bind_interface] = STATE(337),
    [sym__canonical_domains] = STATE(336),
    [sym__canonicalize_fallback_local] = STATE(335),
    [sym__canonicalize_hostname] = STATE(379),
    [sym__canonicalize_max_dots] = STATE(331),
    [sym__canonicalize_permitted_cnames] = STATE(330),
    [sym__ca_signature_algorithms] = STATE(329),
    [sym__certificate_file] = STATE(328),
    [sym__check_host_ip] = STATE(326),
    [sym__ciphers] = STATE(325),
    [sym__clear_all_forwardings] = STATE(324),
    [sym__compression] = STATE(323),
    [sym__connection_attempts] = STATE(322),
    [sym__connect_timeout] = STATE(321),
    [sym__control_master] = STATE(320),
    [sym__control_persist] = STATE(319),
    [sym__control_path] = STATE(317),
    [sym__enable_escape_command_line] = STATE(315),
    [sym__enable_ssh_keysign] = STATE(314),
    [sym__escape_char] = STATE(312),
    [sym__exit_on_forward_failure] = STATE(311),
    [sym__fingerprint_hash] = STATE(310),
    [sym__fork_after_authentication] = STATE(309),
    [sym__forward_agent] = STATE(307),
    [sym__forward_x11] = STATE(303),
    [sym__forward_x11_timeout] = STATE(302),
    [sym__forward_x11_trusted] = STATE(301),
    [sym__global_known_hosts_file] = STATE(300),
    [sym__gssapi_authentication] = STATE(299),
    [sym__gssapi_delegate_credentials] = STATE(298),
    [sym__hostbased_accepted_algorithms] = STATE(297),
    [sym__hostbased_authentication] = STATE(296),
    [sym__host_key_algorithms] = STATE(295),
    [sym__host_key_alias] = STATE(293),
    [sym__hostname] = STATE(290),
    [sym__identities_only] = STATE(378),
    [sym__identity_agent] = STATE(305),
    [sym__identity_file] = STATE(313),
    [sym__ignore_unknown] = STATE(318),
    [sym__ipqos] = STATE(327),
    [sym__kbd_interactive_authentication] = STATE(339),
    [sym__kex_algorithms] = STATE(342),
    [sym__known_hosts_command] = STATE(346),
    [sym__local_command] = STATE(348),
    [sym__local_forward] = STATE(352),
    [sym__log_level] = STATE(358),
    [sym__log_verbose] = STATE(359),
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
  [63] = 2,
    ACTIONS(467), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(115), 56,
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
    ACTIONS(471), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(469), 56,
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
    ACTIONS(475), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(473), 56,
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
    ACTIONS(479), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(477), 56,
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
    ACTIONS(483), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(481), 56,
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
    ACTIONS(487), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(485), 56,
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
    ACTIONS(491), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(489), 56,
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
    ACTIONS(495), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(493), 56,
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
    ACTIONS(499), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(497), 56,
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
    ACTIONS(503), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(501), 56,
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
    ACTIONS(296), 2,
      aux_sym_host_declaration_token1,
      aux_sym__forward_x11_token1,
    ACTIONS(294), 56,
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
  [882] = 10,
    ACTIONS(513), 1,
      anon_sym_STAR,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(521), 1,
      aux_sym_string_token1,
    ACTIONS(523), 1,
      sym__number,
    STATE(48), 1,
      aux_sym__file_string_repeat1,
    STATE(441), 1,
      sym_string,
    ACTIONS(517), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(100), 2,
      sym__file_token,
      sym_variable,
    STATE(443), 2,
      sym__local_forward_value1,
      sym__file_string,
  [916] = 9,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(521), 1,
      aux_sym_string_token1,
    ACTIONS(525), 1,
      anon_sym_STAR,
    STATE(48), 1,
      aux_sym__file_string_repeat1,
    STATE(434), 1,
      sym_string,
    ACTIONS(517), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(100), 2,
      sym__file_token,
      sym_variable,
    STATE(388), 2,
      sym__local_forward_value2,
      sym__file_string,
  [947] = 10,
    ACTIONS(517), 1,
      aux_sym__file_string_token1,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      aux_sym__file_token_token1,
    ACTIONS(533), 1,
      anon_sym_DOLLAR,
    ACTIONS(535), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(48), 1,
      aux_sym__file_string_repeat1,
    STATE(391), 1,
      sym__var_value,
    STATE(393), 1,
      sym__file_string,
    ACTIONS(527), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(100), 2,
      sym__file_token,
      sym_variable,
  [980] = 7,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
    ACTIONS(541), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(543), 1,
      aux_sym__file_string_token1,
    STATE(35), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(372), 1,
      sym__file_pattern_vars,
    STATE(53), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(537), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1005] = 7,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
    ACTIONS(541), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(543), 1,
      aux_sym__file_string_token1,
    STATE(35), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(424), 1,
      sym__file_pattern_vars,
    STATE(53), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(537), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1030] = 6,
    ACTIONS(541), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(543), 1,
      aux_sym__file_string_token1,
    STATE(36), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(545), 2,
      sym__space,
      sym__eol,
    STATE(53), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(537), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1053] = 6,
    ACTIONS(550), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(553), 1,
      aux_sym__file_string_token1,
    STATE(36), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(556), 2,
      sym__space,
      sym__eol,
    STATE(53), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(547), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1076] = 6,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(566), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(37), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(90), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(558), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1098] = 6,
    ACTIONS(571), 1,
      anon_sym_DQUOTE,
    ACTIONS(573), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(575), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(37), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(90), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(569), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1120] = 7,
    ACTIONS(577), 1,
      anon_sym_BANG,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    ACTIONS(585), 1,
      sym__eol,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(332), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1143] = 5,
    ACTIONS(573), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(575), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(38), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(90), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(569), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1162] = 7,
    ACTIONS(577), 1,
      anon_sym_BANG,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    ACTIONS(587), 1,
      sym__eol,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(332), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1185] = 7,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(593), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(595), 1,
      aux_sym__file_string_token1,
    STATE(50), 1,
      aux_sym__hosts_string_repeat1,
    STATE(374), 1,
      sym__hosts_string,
    STATE(95), 2,
      sym__hosts_token,
      sym_variable,
  [1208] = 7,
    ACTIONS(517), 1,
      aux_sym__file_string_token1,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      aux_sym__file_token_token1,
    ACTIONS(535), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(48), 1,
      aux_sym__file_string_repeat1,
    STATE(389), 1,
      sym__file_string,
    STATE(100), 2,
      sym__file_token,
      sym_variable,
  [1231] = 6,
    ACTIONS(597), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(600), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(603), 1,
      aux_sym__file_string_token1,
    STATE(44), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(606), 2,
      sym__space,
      sym__eol,
    STATE(95), 2,
      sym__hosts_token,
      sym_variable,
  [1252] = 7,
    ACTIONS(577), 1,
      anon_sym_BANG,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    ACTIONS(608), 1,
      sym__eol,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(332), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1275] = 7,
    ACTIONS(577), 1,
      anon_sym_BANG,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    ACTIONS(610), 1,
      sym__eol,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(332), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1298] = 7,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_none,
    ACTIONS(616), 1,
      aux_sym__file_string_token1,
    STATE(88), 1,
      aux_sym_pattern_repeat1,
    STATE(187), 1,
      sym__cnames_map,
    STATE(188), 1,
      sym_pattern,
    ACTIONS(614), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1321] = 6,
    ACTIONS(517), 1,
      aux_sym__file_string_token1,
    ACTIONS(531), 1,
      aux_sym__file_token_token1,
    ACTIONS(535), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(51), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(618), 2,
      sym__space,
      sym__eol,
    STATE(100), 2,
      sym__file_token,
      sym_variable,
  [1342] = 6,
    ACTIONS(521), 1,
      aux_sym_string_token1,
    ACTIONS(533), 1,
      anon_sym_DOLLAR,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    STATE(410), 1,
      sym__var_value,
    ACTIONS(622), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(409), 2,
      sym_string,
      sym__boolean,
  [1363] = 6,
    ACTIONS(591), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(593), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(595), 1,
      aux_sym__file_string_token1,
    STATE(44), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(624), 2,
      sym__space,
      sym__eol,
    STATE(95), 2,
      sym__hosts_token,
      sym_variable,
  [1384] = 6,
    ACTIONS(626), 1,
      aux_sym__file_token_token1,
    ACTIONS(629), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(632), 1,
      aux_sym__file_string_token1,
    STATE(51), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(635), 2,
      sym__space,
      sym__eol,
    STATE(100), 2,
      sym__file_token,
      sym_variable,
  [1405] = 6,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    ACTIONS(639), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(641), 1,
      aux_sym__file_token_token1,
    ACTIONS(643), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(63), 1,
      aux_sym__file_string_repeat2,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
  [1425] = 2,
    ACTIONS(647), 1,
      aux_sym__file_string_token1,
    ACTIONS(645), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1437] = 2,
    ACTIONS(651), 1,
      aux_sym__file_string_token1,
    ACTIONS(649), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1449] = 5,
    ACTIONS(653), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(655), 1,
      aux_sym_string_token2,
    STATE(52), 1,
      aux_sym__file_string_repeat2,
    ACTIONS(639), 2,
      aux_sym__log_verbose_quoted_token1,
      aux_sym__file_token_token1,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
  [1467] = 4,
    ACTIONS(662), 1,
      aux_sym__file_string_token1,
    STATE(56), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(659), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(657), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1483] = 4,
    ACTIONS(667), 1,
      anon_sym_confirm,
    ACTIONS(669), 1,
      sym__number,
    STATE(291), 2,
      sym__boolean,
      sym_time,
    ACTIONS(665), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1499] = 6,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    ACTIONS(671), 1,
      anon_sym_BANG,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(175), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1519] = 4,
    ACTIONS(677), 1,
      aux_sym__file_string_token1,
    STATE(56), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(675), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(673), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1535] = 6,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(616), 1,
      aux_sym__file_string_token1,
    STATE(88), 1,
      aux_sym_pattern_repeat1,
    STATE(188), 1,
      sym_pattern,
    STATE(347), 1,
      sym__cnames_map,
    ACTIONS(614), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1555] = 6,
    ACTIONS(679), 1,
      aux_sym_time_token1,
    ACTIONS(681), 1,
      aux_sym_time_token2,
    ACTIONS(683), 1,
      aux_sym_time_token3,
    ACTIONS(685), 1,
      aux_sym_time_token4,
    ACTIONS(687), 1,
      aux_sym_time_token5,
    ACTIONS(689), 2,
      sym__space,
      sym__eol,
  [1575] = 6,
    ACTIONS(691), 1,
      anon_sym_DQUOTE,
    ACTIONS(693), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(695), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(697), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(65), 1,
      aux_sym__hosts_string_repeat2,
    STATE(129), 2,
      sym__hosts_token,
      sym_variable,
  [1595] = 6,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(704), 1,
      aux_sym__file_token_token1,
    ACTIONS(707), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(63), 1,
      aux_sym__file_string_repeat2,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
  [1615] = 6,
    ACTIONS(577), 1,
      anon_sym_BANG,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(332), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1635] = 6,
    ACTIONS(710), 1,
      anon_sym_DQUOTE,
    ACTIONS(712), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(715), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(718), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(65), 1,
      aux_sym__hosts_string_repeat2,
    STATE(129), 2,
      sym__hosts_token,
      sym_variable,
  [1655] = 5,
    ACTIONS(693), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(695), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(697), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(62), 1,
      aux_sym__hosts_string_repeat2,
    STATE(129), 2,
      sym__hosts_token,
      sym_variable,
  [1672] = 6,
    ACTIONS(721), 1,
      anon_sym_DQUOTE,
    ACTIONS(723), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(725), 1,
      aux_sym__file_string_token1,
    STATE(85), 1,
      aux_sym__hostname_string_repeat1,
    STATE(139), 1,
      sym__hostname_token,
    STATE(395), 1,
      sym__hostname_string,
  [1691] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(235), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1708] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(400), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1725] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      aux_sym__file_string_token1,
    STATE(59), 1,
      aux_sym_pattern_repeat1,
    STATE(160), 1,
      sym_pattern,
    ACTIONS(727), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1742] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(259), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1759] = 4,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(119), 1,
      sym__log_verbose_value,
    ACTIONS(731), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1774] = 2,
    ACTIONS(651), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(649), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1785] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(182), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1802] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(316), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1819] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(308), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1836] = 5,
    ACTIONS(639), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(641), 1,
      aux_sym__file_token_token1,
    ACTIONS(643), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(52), 1,
      aux_sym__file_string_repeat2,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
  [1853] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      aux_sym__file_string_token1,
    STATE(59), 1,
      aux_sym_pattern_repeat1,
    STATE(136), 1,
      sym_pattern,
    ACTIONS(727), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1870] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      aux_sym__file_string_token1,
    STATE(59), 1,
      aux_sym_pattern_repeat1,
    STATE(137), 1,
      sym_pattern,
    ACTIONS(727), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1887] = 3,
    ACTIONS(737), 1,
      anon_sym_auto,
    STATE(415), 1,
      sym__boolean,
    ACTIONS(735), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1900] = 4,
    ACTIONS(742), 1,
      aux_sym__file_string_token1,
    STATE(81), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(657), 2,
      sym__space,
      sym__eol,
    ACTIONS(739), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1915] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(345), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1932] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    STATE(373), 1,
      sym_pattern,
    ACTIONS(579), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1949] = 4,
    ACTIONS(747), 1,
      aux_sym__file_string_token1,
    STATE(81), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(673), 2,
      sym__space,
      sym__eol,
    ACTIONS(745), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1964] = 5,
    ACTIONS(723), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(725), 1,
      aux_sym__file_string_token1,
    STATE(86), 1,
      aux_sym__hostname_string_repeat1,
    STATE(139), 1,
      sym__hostname_token,
    ACTIONS(749), 2,
      sym__space,
      sym__eol,
  [1981] = 5,
    ACTIONS(751), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(754), 1,
      aux_sym__file_string_token1,
    STATE(86), 1,
      aux_sym__hostname_string_repeat1,
    STATE(139), 1,
      sym__hostname_token,
    ACTIONS(757), 2,
      sym__space,
      sym__eol,
  [1998] = 5,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(616), 1,
      aux_sym__file_string_token1,
    STATE(88), 1,
      aux_sym_pattern_repeat1,
    STATE(136), 1,
      sym_pattern,
    ACTIONS(614), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2015] = 4,
    ACTIONS(761), 1,
      aux_sym__file_string_token1,
    STATE(89), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(673), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(759), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2030] = 4,
    ACTIONS(766), 1,
      aux_sym__file_string_token1,
    STATE(89), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(657), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(763), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2045] = 2,
    ACTIONS(771), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(769), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2056] = 5,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    ACTIONS(775), 1,
      sym_token,
    ACTIONS(777), 1,
      aux_sym__file_string_token1,
    STATE(112), 1,
      aux_sym__token_string_repeat1,
    STATE(368), 1,
      sym__token_string,
  [2072] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(92), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2086] = 5,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(791), 1,
      aux_sym__hostname_token_token1,
    STATE(102), 1,
      aux_sym__hostname_string_repeat2,
    STATE(286), 1,
      sym__hostname_token,
  [2102] = 3,
    ACTIONS(793), 1,
      anon_sym_COLON,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(795), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [2114] = 2,
    ACTIONS(800), 1,
      aux_sym__file_string_token1,
    ACTIONS(798), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2124] = 4,
    ACTIONS(782), 1,
      anon_sym_COLON,
    ACTIONS(805), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(96), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(802), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2138] = 2,
    ACTIONS(651), 1,
      aux_sym__file_string_token1,
    ACTIONS(649), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2148] = 3,
    ACTIONS(808), 1,
      anon_sym_COLON,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(810), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [2160] = 4,
    ACTIONS(812), 1,
      sym_token,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(818), 2,
      sym__space,
      sym__eol,
  [2174] = 2,
    ACTIONS(822), 1,
      aux_sym__file_string_token1,
    ACTIONS(820), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2184] = 4,
    ACTIONS(826), 1,
      anon_sym_DQUOTE,
    ACTIONS(828), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(92), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(824), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2198] = 5,
    ACTIONS(830), 1,
      anon_sym_DQUOTE,
    ACTIONS(832), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(835), 1,
      aux_sym__hostname_token_token1,
    STATE(102), 1,
      aux_sym__hostname_string_repeat2,
    STATE(286), 1,
      sym__hostname_token,
  [2214] = 4,
    ACTIONS(838), 1,
      anon_sym_COLON,
    ACTIONS(842), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(96), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(840), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2228] = 3,
    STATE(107), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(228), 1,
      sym__log_verbose_value,
    ACTIONS(731), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2240] = 3,
    ACTIONS(669), 1,
      sym__number,
    ACTIONS(844), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(425), 2,
      sym__boolean,
      sym_time,
  [2252] = 2,
    ACTIONS(651), 1,
      aux_sym__file_string_token1,
    ACTIONS(649), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2262] = 3,
    ACTIONS(846), 1,
      anon_sym_COLON,
    STATE(108), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(848), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2274] = 3,
    ACTIONS(850), 1,
      anon_sym_COLON,
    STATE(108), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(852), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2286] = 4,
    ACTIONS(857), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(103), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(280), 1,
      sym__log_verbose_quoted,
    ACTIONS(855), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2300] = 3,
    ACTIONS(859), 1,
      anon_sym_COLON,
    STATE(94), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(810), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [2312] = 4,
    ACTIONS(857), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(103), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(416), 1,
      sym__log_verbose_quoted,
    ACTIONS(855), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2326] = 4,
    ACTIONS(775), 1,
      sym_token,
    ACTIONS(777), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(861), 2,
      sym__space,
      sym__eol,
  [2340] = 4,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    ACTIONS(865), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(868), 1,
      sym_token,
    STATE(113), 1,
      aux_sym__token_string_repeat2,
  [2353] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(873), 2,
      sym__space,
      sym__eol,
  [2364] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(875), 2,
      sym__space,
      sym__eol,
  [2375] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(875), 2,
      sym__space,
      sym__eol,
  [2386] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(879), 2,
      sym__space,
      sym__eol,
  [2397] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(879), 2,
      sym__space,
      sym__eol,
  [2408] = 3,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(883), 2,
      sym__space,
      sym__eol,
  [2419] = 2,
    ACTIONS(887), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(885), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2428] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(891), 2,
      sym__space,
      sym__eol,
  [2439] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(891), 2,
      sym__space,
      sym__eol,
  [2450] = 3,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(895), 2,
      sym__space,
      sym__eol,
  [2461] = 2,
    ACTIONS(899), 1,
      sym_cipher,
    ACTIONS(897), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2470] = 3,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(895), 2,
      sym__space,
      sym__eol,
  [2481] = 2,
    ACTIONS(903), 1,
      aux_sym__file_string_token1,
    ACTIONS(901), 3,
      sym_token,
      sym__space,
      sym__eol,
  [2490] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(873), 2,
      sym__space,
      sym__eol,
  [2501] = 3,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(908), 2,
      sym__space,
      sym__eol,
  [2512] = 2,
    ACTIONS(912), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(910), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2521] = 4,
    ACTIONS(914), 1,
      anon_sym_DQUOTE,
    ACTIONS(916), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(918), 1,
      sym_token,
    STATE(113), 1,
      aux_sym__token_string_repeat2,
  [2534] = 3,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(920), 2,
      sym__space,
      sym__eol,
  [2545] = 2,
    STATE(110), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(922), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [2554] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(924), 2,
      sym__space,
      sym__eol,
  [2565] = 1,
    ACTIONS(926), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2572] = 4,
    ACTIONS(928), 1,
      aux_sym_time_token2,
    ACTIONS(930), 1,
      aux_sym_time_token3,
    ACTIONS(932), 1,
      aux_sym_time_token4,
    ACTIONS(934), 1,
      aux_sym_time_token5,
  [2585] = 1,
    ACTIONS(908), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2592] = 3,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(938), 2,
      sym__space,
      sym__eol,
  [2603] = 3,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(940), 2,
      sym__space,
      sym__eol,
  [2614] = 2,
    ACTIONS(944), 1,
      aux_sym__file_string_token1,
    ACTIONS(942), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [2623] = 4,
    ACTIONS(789), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(791), 1,
      aux_sym__hostname_token_token1,
    STATE(93), 1,
      aux_sym__hostname_string_repeat2,
    STATE(286), 1,
      sym__hostname_token,
  [2636] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(946), 2,
      sym__space,
      sym__eol,
  [2647] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(948), 2,
      sym__space,
      sym__eol,
  [2658] = 3,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(953), 2,
      sym__space,
      sym__eol,
  [2669] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(955), 2,
      sym__space,
      sym__eol,
  [2680] = 2,
    ACTIONS(959), 1,
      sym_key_sig,
    ACTIONS(957), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2689] = 3,
    ACTIONS(963), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(101), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(961), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2700] = 2,
    ACTIONS(967), 1,
      sym_key_sig,
    ACTIONS(965), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2709] = 3,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(969), 2,
      sym__space,
      sym__eol,
  [2720] = 3,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(974), 2,
      sym__space,
      sym__eol,
  [2731] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(976), 2,
      sym__space,
      sym__eol,
  [2742] = 3,
    ACTIONS(978), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(981), 2,
      sym__space,
      sym__eol,
  [2753] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(983), 2,
      sym__space,
      sym__eol,
  [2764] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(985), 2,
      sym__space,
      sym__eol,
  [2775] = 3,
    ACTIONS(987), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(990), 2,
      sym__space,
      sym__eol,
  [2786] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(992), 2,
      sym__space,
      sym__eol,
  [2797] = 2,
    ACTIONS(996), 1,
      sym_kex,
    ACTIONS(994), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2806] = 2,
    STATE(98), 1,
      aux_sym__log_verbose_value_repeat2,
    ACTIONS(998), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token2,
  [2815] = 3,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1003), 2,
      sym__space,
      sym__eol,
  [2826] = 3,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1005), 2,
      sym__space,
      sym__eol,
  [2837] = 3,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1007), 2,
      sym__space,
      sym__eol,
  [2848] = 3,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1009), 2,
      sym__space,
      sym__eol,
  [2859] = 2,
    ACTIONS(651), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(649), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2868] = 2,
    ACTIONS(651), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(649), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2877] = 2,
    STATE(334), 1,
      sym__boolean,
    ACTIONS(1011), 2,
      anon_sym_yes,
      anon_sym_no,
  [2885] = 3,
    ACTIONS(521), 1,
      aux_sym_string_token1,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      sym_string,
  [2895] = 2,
    STATE(403), 1,
      sym__boolean,
    ACTIONS(1013), 2,
      anon_sym_yes,
      anon_sym_no,
  [2903] = 2,
    STATE(399), 1,
      sym__boolean,
    ACTIONS(1015), 2,
      anon_sym_yes,
      anon_sym_no,
  [2911] = 3,
    ACTIONS(521), 1,
      aux_sym_string_token1,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    STATE(397), 1,
      sym_string,
  [2921] = 2,
    STATE(394), 1,
      sym__boolean,
    ACTIONS(1017), 2,
      anon_sym_yes,
      anon_sym_no,
  [2929] = 2,
    ACTIONS(1021), 1,
      sym__number,
    ACTIONS(1019), 2,
      anon_sym_none,
      sym_ipqos,
  [2937] = 2,
    STATE(381), 1,
      sym__boolean,
    ACTIONS(1023), 2,
      anon_sym_yes,
      anon_sym_no,
  [2945] = 3,
    ACTIONS(1025), 1,
      aux_sym__sep_token1,
    ACTIONS(1027), 1,
      sym__space,
    STATE(57), 1,
      sym__sep,
  [2955] = 3,
    ACTIONS(1029), 1,
      aux_sym__sep_token1,
    ACTIONS(1031), 1,
      sym__space,
    STATE(360), 1,
      sym__sep,
  [2965] = 3,
    ACTIONS(1033), 1,
      aux_sym__sep_token1,
    ACTIONS(1035), 1,
      sym__space,
    STATE(260), 1,
      sym__sep,
  [2975] = 3,
    ACTIONS(1037), 1,
      sym__space,
    ACTIONS(1039), 1,
      sym__eol,
    STATE(263), 1,
      aux_sym_host_declaration_repeat1,
  [2985] = 3,
    ACTIONS(1041), 1,
      aux_sym__sep_token1,
    ACTIONS(1043), 1,
      sym__space,
    STATE(76), 1,
      sym__sep,
  [2995] = 3,
    ACTIONS(1045), 1,
      aux_sym__sep_token1,
    ACTIONS(1047), 1,
      sym__space,
    STATE(75), 1,
      sym__sep,
  [3005] = 3,
    ACTIONS(1049), 1,
      aux_sym__sep_token1,
    ACTIONS(1051), 1,
      sym__space,
    STATE(74), 1,
      sym__sep,
  [3015] = 3,
    ACTIONS(1053), 1,
      aux_sym__sep_token1,
    ACTIONS(1055), 1,
      sym__space,
    STATE(164), 1,
      sym__sep,
  [3025] = 3,
    ACTIONS(1057), 1,
      aux_sym__sep_token1,
    ACTIONS(1059), 1,
      sym__space,
    STATE(257), 1,
      sym__sep,
  [3035] = 3,
    ACTIONS(1061), 1,
      aux_sym__sep_token1,
    ACTIONS(1063), 1,
      sym__space,
    STATE(446), 1,
      sym__sep,
  [3045] = 3,
    ACTIONS(1065), 1,
      sym__space,
    ACTIONS(1067), 1,
      sym__eol,
    STATE(272), 1,
      aux_sym__canonical_domains_repeat1,
  [3055] = 3,
    ACTIONS(1069), 1,
      aux_sym__sep_token1,
    ACTIONS(1071), 1,
      sym__space,
    STATE(47), 1,
      sym__sep,
  [3065] = 3,
    ACTIONS(1073), 1,
      aux_sym__sep_token1,
    ACTIONS(1075), 1,
      sym__space,
    STATE(255), 1,
      sym__sep,
  [3075] = 3,
    ACTIONS(1077), 1,
      aux_sym__sep_token1,
    ACTIONS(1079), 1,
      sym__space,
    STATE(33), 1,
      sym__sep,
  [3085] = 2,
    ACTIONS(1081), 1,
      sym__number,
    ACTIONS(1083), 2,
      sym__space,
      sym__eol,
  [3093] = 3,
    ACTIONS(1085), 1,
      sym__space,
    ACTIONS(1087), 1,
      sym__eol,
    STATE(274), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3103] = 3,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_COLON,
    STATE(277), 1,
      aux_sym__cnames_map_repeat1,
  [3113] = 2,
    ACTIONS(1093), 1,
      sym__number,
    ACTIONS(1095), 2,
      sym__space,
      sym__eol,
  [3121] = 2,
    ACTIONS(1097), 1,
      sym__number,
    ACTIONS(1095), 2,
      sym__space,
      sym__eol,
  [3129] = 3,
    ACTIONS(1099), 1,
      aux_sym__sep_token1,
    ACTIONS(1101), 1,
      sym__space,
    STATE(254), 1,
      sym__sep,
  [3139] = 3,
    ACTIONS(1103), 1,
      aux_sym__sep_token1,
    ACTIONS(1105), 1,
      sym__space,
    STATE(124), 1,
      sym__sep,
  [3149] = 1,
    ACTIONS(1107), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3155] = 1,
    ACTIONS(1109), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3161] = 3,
    ACTIONS(1111), 1,
      aux_sym__sep_token1,
    ACTIONS(1113), 1,
      sym__space,
    STATE(250), 1,
      sym__sep,
  [3171] = 3,
    ACTIONS(1115), 1,
      aux_sym_time_token3,
    ACTIONS(1117), 1,
      aux_sym_time_token4,
    ACTIONS(1119), 1,
      aux_sym_time_token5,
  [3181] = 3,
    ACTIONS(1121), 1,
      aux_sym__sep_token1,
    ACTIONS(1123), 1,
      sym__space,
    STATE(248), 1,
      sym__sep,
  [3191] = 3,
    ACTIONS(1125), 1,
      aux_sym__sep_token1,
    ACTIONS(1127), 1,
      sym__space,
    STATE(440), 1,
      sym__sep,
  [3201] = 3,
    ACTIONS(1129), 1,
      aux_sym__sep_token1,
    ACTIONS(1131), 1,
      sym__space,
    STATE(438), 1,
      sym__sep,
  [3211] = 3,
    ACTIONS(1133), 1,
      aux_sym__sep_token1,
    ACTIONS(1135), 1,
      sym__space,
    STATE(80), 1,
      sym__sep,
  [3221] = 3,
    ACTIONS(1137), 1,
      aux_sym__sep_token1,
    ACTIONS(1139), 1,
      sym__space,
    STATE(105), 1,
      sym__sep,
  [3231] = 3,
    ACTIONS(1141), 1,
      aux_sym__sep_token1,
    ACTIONS(1143), 1,
      sym__space,
    STATE(34), 1,
      sym__sep,
  [3241] = 3,
    ACTIONS(1145), 1,
      aux_sym__sep_token1,
    ACTIONS(1147), 1,
      sym__space,
    STATE(219), 1,
      sym__sep,
  [3251] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      aux_sym__log_verbose_repeat2,
  [3261] = 3,
    ACTIONS(1154), 1,
      aux_sym__sep_token1,
    ACTIONS(1156), 1,
      sym__space,
    STATE(241), 1,
      sym__sep,
  [3271] = 3,
    ACTIONS(1158), 1,
      aux_sym__sep_token1,
    ACTIONS(1160), 1,
      sym__space,
    STATE(287), 1,
      sym__sep,
  [3281] = 2,
    ACTIONS(1162), 1,
      sym__number,
    ACTIONS(1164), 2,
      sym__space,
      sym__eol,
  [3289] = 2,
    ACTIONS(1166), 1,
      sym__number,
    ACTIONS(1164), 2,
      sym__space,
      sym__eol,
  [3297] = 1,
    ACTIONS(1168), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3303] = 2,
    ACTIONS(1170), 1,
      sym__number,
    ACTIONS(1164), 2,
      sym__space,
      sym__eol,
  [3311] = 3,
    ACTIONS(1172), 1,
      aux_sym__sep_token1,
    ACTIONS(1174), 1,
      sym__space,
    STATE(233), 1,
      sym__sep,
  [3321] = 3,
    ACTIONS(1176), 1,
      aux_sym__sep_token1,
    ACTIONS(1178), 1,
      sym__space,
    STATE(392), 1,
      sym__sep,
  [3331] = 3,
    ACTIONS(1180), 1,
      aux_sym__sep_token1,
    ACTIONS(1182), 1,
      sym__space,
    STATE(230), 1,
      sym__sep,
  [3341] = 3,
    ACTIONS(1184), 1,
      aux_sym__sep_token1,
    ACTIONS(1186), 1,
      sym__space,
    STATE(49), 1,
      sym__sep,
  [3351] = 3,
    ACTIONS(1188), 1,
      sym__space,
    ACTIONS(1190), 1,
      sym__eol,
    STATE(285), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3361] = 3,
    ACTIONS(1192), 1,
      aux_sym__sep_token1,
    ACTIONS(1194), 1,
      sym__space,
    STATE(227), 1,
      sym__sep,
  [3371] = 3,
    ACTIONS(1196), 1,
      aux_sym__sep_token1,
    ACTIONS(1198), 1,
      sym__space,
    STATE(396), 1,
      sym__sep,
  [3381] = 3,
    ACTIONS(1200), 1,
      aux_sym__sep_token1,
    ACTIONS(1202), 1,
      sym__space,
    STATE(224), 1,
      sym__sep,
  [3391] = 2,
    STATE(423), 1,
      sym__boolean,
    ACTIONS(1204), 2,
      anon_sym_yes,
      anon_sym_no,
  [3399] = 3,
    ACTIONS(1206), 1,
      aux_sym__sep_token1,
    ACTIONS(1208), 1,
      sym__space,
    STATE(222), 1,
      sym__sep,
  [3409] = 3,
    ACTIONS(1210), 1,
      aux_sym__sep_token1,
    ACTIONS(1212), 1,
      sym__space,
    STATE(240), 1,
      sym__sep,
  [3419] = 3,
    ACTIONS(521), 1,
      aux_sym_string_token1,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      sym_string,
  [3429] = 3,
    ACTIONS(1214), 1,
      aux_sym__sep_token1,
    ACTIONS(1216), 1,
      sym__space,
    STATE(166), 1,
      sym__sep,
  [3439] = 2,
    STATE(406), 1,
      sym__boolean,
    ACTIONS(1218), 2,
      anon_sym_yes,
      anon_sym_no,
  [3447] = 3,
    ACTIONS(1220), 1,
      aux_sym__sep_token1,
    ACTIONS(1222), 1,
      sym__space,
    STATE(145), 1,
      sym__sep,
  [3457] = 3,
    ACTIONS(1224), 1,
      aux_sym__sep_token1,
    ACTIONS(1226), 1,
      sym__space,
    STATE(167), 1,
      sym__sep,
  [3467] = 2,
    STATE(408), 1,
      sym__boolean,
    ACTIONS(1228), 2,
      anon_sym_yes,
      anon_sym_no,
  [3475] = 1,
    ACTIONS(1230), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3481] = 3,
    ACTIONS(1232), 1,
      aux_sym__sep_token1,
    ACTIONS(1234), 1,
      sym__space,
    STATE(147), 1,
      sym__sep,
  [3491] = 2,
    STATE(414), 1,
      sym__boolean,
    ACTIONS(1236), 2,
      anon_sym_yes,
      anon_sym_no,
  [3499] = 3,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      aux_sym__log_verbose_repeat2,
  [3509] = 3,
    ACTIONS(1242), 1,
      aux_sym__sep_token1,
    ACTIONS(1244), 1,
      sym__space,
    STATE(168), 1,
      sym__sep,
  [3519] = 2,
    STATE(419), 1,
      sym__boolean,
    ACTIONS(1246), 2,
      anon_sym_yes,
      anon_sym_no,
  [3527] = 3,
    ACTIONS(1248), 1,
      aux_sym__sep_token1,
    ACTIONS(1250), 1,
      sym__space,
    STATE(67), 1,
      sym__sep,
  [3537] = 3,
    ACTIONS(1252), 1,
      sym__space,
    ACTIONS(1254), 1,
      sym__eol,
    STATE(284), 1,
      aux_sym__ignore_unknown_repeat1,
  [3547] = 3,
    ACTIONS(1256), 1,
      aux_sym__sep_token1,
    ACTIONS(1258), 1,
      sym__space,
    STATE(169), 1,
      sym__sep,
  [3557] = 3,
    ACTIONS(1260), 1,
      aux_sym__sep_token1,
    ACTIONS(1262), 1,
      sym__space,
    STATE(32), 1,
      sym__sep,
  [3567] = 1,
    ACTIONS(990), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3573] = 3,
    ACTIONS(1264), 1,
      aux_sym__sep_token1,
    ACTIONS(1266), 1,
      sym__space,
    STATE(43), 1,
      sym__sep,
  [3583] = 2,
    STATE(405), 1,
      sym__boolean,
    ACTIONS(1268), 2,
      anon_sym_yes,
      anon_sym_no,
  [3591] = 2,
    STATE(422), 1,
      sym__boolean,
    ACTIONS(1270), 2,
      anon_sym_yes,
      anon_sym_no,
  [3599] = 3,
    ACTIONS(1272), 1,
      sym__space,
    ACTIONS(1275), 1,
      sym__eol,
    STATE(242), 1,
      aux_sym__ignore_unknown_repeat1,
  [3609] = 3,
    ACTIONS(1277), 1,
      aux_sym__sep_token1,
    ACTIONS(1279), 1,
      sym__space,
    STATE(68), 1,
      sym__sep,
  [3619] = 3,
    ACTIONS(1281), 1,
      aux_sym__sep_token1,
    ACTIONS(1283), 1,
      sym__space,
    STATE(170), 1,
      sym__sep,
  [3629] = 3,
    ACTIONS(916), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(918), 1,
      sym_token,
    STATE(130), 1,
      aux_sym__token_string_repeat2,
  [3639] = 3,
    ACTIONS(1285), 1,
      aux_sym__sep_token1,
    ACTIONS(1287), 1,
      sym__space,
    STATE(171), 1,
      sym__sep,
  [3649] = 3,
    ACTIONS(1289), 1,
      aux_sym__sep_token1,
    ACTIONS(1291), 1,
      sym__space,
    STATE(156), 1,
      sym__sep,
  [3659] = 2,
    STATE(387), 1,
      sym__boolean,
    ACTIONS(1293), 2,
      anon_sym_yes,
      anon_sym_no,
  [3667] = 1,
    ACTIONS(981), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3673] = 2,
    STATE(386), 1,
      sym__boolean,
    ACTIONS(1295), 2,
      anon_sym_yes,
      anon_sym_no,
  [3681] = 3,
    ACTIONS(1297), 1,
      aux_sym__sep_token1,
    ACTIONS(1299), 1,
      sym__space,
    STATE(42), 1,
      sym__sep,
  [3691] = 3,
    ACTIONS(1301), 1,
      sym__space,
    ACTIONS(1304), 1,
      sym__eol,
    STATE(252), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3701] = 1,
    ACTIONS(1306), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3707] = 2,
    STATE(380), 1,
      sym__boolean,
    ACTIONS(1308), 2,
      anon_sym_yes,
      anon_sym_no,
  [3715] = 2,
    ACTIONS(1312), 1,
      sym_sig,
    ACTIONS(1310), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3723] = 3,
    ACTIONS(1314), 1,
      aux_sym__sep_token1,
    ACTIONS(1316), 1,
      sym__space,
    STATE(91), 1,
      sym__sep,
  [3733] = 2,
    STATE(344), 1,
      sym__boolean,
    ACTIONS(1318), 2,
      anon_sym_yes,
      anon_sym_no,
  [3741] = 1,
    ACTIONS(974), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3747] = 3,
    ACTIONS(1320), 1,
      sym__space,
    ACTIONS(1322), 1,
      sym__eol,
    STATE(279), 1,
      aux_sym_host_declaration_repeat1,
  [3757] = 2,
    STATE(306), 1,
      sym__boolean,
    ACTIONS(1324), 2,
      anon_sym_yes,
      anon_sym_no,
  [3765] = 3,
    ACTIONS(1326), 1,
      aux_sym__sep_token1,
    ACTIONS(1328), 1,
      sym__space,
    STATE(30), 1,
      sym__sep,
  [3775] = 3,
    ACTIONS(1330), 1,
      aux_sym__sep_token1,
    ACTIONS(1332), 1,
      sym__space,
    STATE(452), 1,
      sym__sep,
  [3785] = 3,
    ACTIONS(1334), 1,
      sym__space,
    ACTIONS(1336), 1,
      sym__eol,
    STATE(276), 1,
      aux_sym_host_declaration_repeat1,
  [3795] = 3,
    ACTIONS(1338), 1,
      aux_sym__sep_token1,
    ACTIONS(1340), 1,
      sym__space,
    STATE(72), 1,
      sym__sep,
  [3805] = 1,
    ACTIONS(953), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3811] = 2,
    ACTIONS(1342), 1,
      sym__number,
    ACTIONS(1344), 2,
      sym__space,
      sym__eol,
  [3819] = 2,
    ACTIONS(1346), 1,
      sym__number,
    ACTIONS(1344), 2,
      sym__space,
      sym__eol,
  [3827] = 2,
    ACTIONS(1348), 1,
      sym__number,
    ACTIONS(1344), 2,
      sym__space,
      sym__eol,
  [3835] = 2,
    ACTIONS(1350), 1,
      sym__number,
    ACTIONS(1344), 2,
      sym__space,
      sym__eol,
  [3843] = 3,
    ACTIONS(908), 1,
      anon_sym_COLON,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym__cnames_map_repeat1,
  [3853] = 3,
    ACTIONS(1355), 1,
      sym__space,
    ACTIONS(1358), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3863] = 3,
    ACTIONS(1065), 1,
      sym__space,
    ACTIONS(1360), 1,
      sym__eol,
    STATE(273), 1,
      aux_sym__canonical_domains_repeat1,
  [3873] = 3,
    ACTIONS(1362), 1,
      sym__space,
    ACTIONS(1365), 1,
      sym__eol,
    STATE(273), 1,
      aux_sym__canonical_domains_repeat1,
  [3883] = 3,
    ACTIONS(1085), 1,
      sym__space,
    ACTIONS(1367), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3893] = 3,
    ACTIONS(930), 1,
      aux_sym_time_token3,
    ACTIONS(932), 1,
      aux_sym_time_token4,
    ACTIONS(934), 1,
      aux_sym_time_token5,
  [3903] = 3,
    ACTIONS(1369), 1,
      sym__space,
    ACTIONS(1372), 1,
      sym__eol,
    STATE(276), 1,
      aux_sym_host_declaration_repeat1,
  [3913] = 3,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
    ACTIONS(1374), 1,
      anon_sym_COLON,
    STATE(270), 1,
      aux_sym__cnames_map_repeat1,
  [3923] = 3,
    ACTIONS(1376), 1,
      aux_sym__sep_token1,
    ACTIONS(1378), 1,
      sym__space,
    STATE(58), 1,
      sym__sep,
  [3933] = 3,
    ACTIONS(1380), 1,
      sym__space,
    ACTIONS(1382), 1,
      sym__eol,
    STATE(276), 1,
      aux_sym_host_declaration_repeat1,
  [3943] = 3,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_DQUOTE,
    STATE(231), 1,
      aux_sym__log_verbose_repeat2,
  [3953] = 2,
    ACTIONS(1388), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1386), 2,
      anon_sym_DQUOTE,
      sym_token,
  [3961] = 2,
    ACTIONS(1392), 1,
      sym__number,
    ACTIONS(1390), 2,
      anon_sym_none,
      sym_ipqos,
  [3969] = 2,
    ACTIONS(1396), 1,
      sym__number,
    ACTIONS(1394), 2,
      anon_sym_none,
      sym_ipqos,
  [3977] = 3,
    ACTIONS(1252), 1,
      sym__space,
    ACTIONS(1398), 1,
      sym__eol,
    STATE(242), 1,
      aux_sym__ignore_unknown_repeat1,
  [3987] = 3,
    ACTIONS(1188), 1,
      sym__space,
    ACTIONS(1400), 1,
      sym__eol,
    STATE(252), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3997] = 2,
    ACTIONS(1404), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1402), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [4005] = 2,
    ACTIONS(1406), 1,
      anon_sym_none,
    ACTIONS(1408), 1,
      aux_sym__escape_char_token2,
  [4012] = 1,
    ACTIONS(1410), 2,
      sym__space,
      sym__eol,
  [4017] = 2,
    ACTIONS(1412), 1,
      sym__space,
    ACTIONS(1414), 1,
      sym__eol,
  [4024] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4029] = 1,
    ACTIONS(1418), 2,
      sym__space,
      sym__eol,
  [4034] = 1,
    ACTIONS(1420), 2,
      sym__space,
      sym__eol,
  [4039] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4044] = 2,
    ACTIONS(1418), 1,
      sym__eol,
    ACTIONS(1422), 1,
      sym__space,
  [4051] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4056] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4061] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4066] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4071] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4076] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4081] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4086] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4091] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4096] = 1,
    ACTIONS(1424), 2,
      sym__space,
      sym__eol,
  [4101] = 1,
    ACTIONS(1426), 2,
      sym__space,
      sym__eol,
  [4106] = 1,
    ACTIONS(1428), 2,
      sym__space,
      sym__eol,
  [4111] = 1,
    ACTIONS(1426), 2,
      sym__space,
      sym__eol,
  [4116] = 1,
    ACTIONS(1430), 2,
      sym__space,
      sym__eol,
  [4121] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4126] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4131] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4136] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4141] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4146] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4151] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4156] = 1,
    ACTIONS(1432), 2,
      sym__space,
      sym__eol,
  [4161] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4166] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4171] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4176] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4181] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4186] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4191] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4196] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4201] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4206] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4211] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4216] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4221] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4226] = 1,
    ACTIONS(1434), 2,
      sym__space,
      sym__eol,
  [4231] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4236] = 1,
    ACTIONS(1436), 2,
      sym__space,
      sym__eol,
  [4241] = 2,
    ACTIONS(1438), 1,
      sym__space,
    ACTIONS(1440), 1,
      sym__eol,
  [4248] = 1,
    ACTIONS(1442), 2,
      sym__space,
      sym__eol,
  [4253] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4258] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4263] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4268] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4273] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4278] = 1,
    ACTIONS(1444), 2,
      sym__space,
      sym__eol,
  [4283] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4288] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4293] = 2,
    ACTIONS(932), 1,
      aux_sym_time_token4,
    ACTIONS(934), 1,
      aux_sym_time_token5,
  [4300] = 1,
    ACTIONS(1446), 2,
      sym__space,
      sym__eol,
  [4305] = 1,
    ACTIONS(1448), 2,
      sym__space,
      sym__eol,
  [4310] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4315] = 1,
    ACTIONS(1450), 2,
      sym__space,
      sym__eol,
  [4320] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4325] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4330] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4335] = 2,
    ACTIONS(457), 1,
      sym__space,
    ACTIONS(459), 1,
      sym__eol,
  [4342] = 1,
    ACTIONS(1452), 2,
      sym__space,
      sym__eol,
  [4347] = 1,
    ACTIONS(1454), 2,
      sym__space,
      sym__eol,
  [4352] = 1,
    ACTIONS(1344), 2,
      sym__space,
      sym__eol,
  [4357] = 1,
    ACTIONS(1456), 2,
      sym__space,
      sym__eol,
  [4362] = 1,
    ACTIONS(1458), 2,
      sym__space,
      sym__eol,
  [4367] = 2,
    ACTIONS(669), 1,
      sym__number,
    STATE(340), 1,
      sym_time,
  [4374] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4379] = 1,
    ACTIONS(1460), 2,
      sym__space,
      sym__eol,
  [4384] = 2,
    ACTIONS(1462), 1,
      anon_sym_inet,
    ACTIONS(1464), 1,
      anon_sym_inet6,
  [4391] = 1,
    ACTIONS(1466), 2,
      sym__space,
      sym__eol,
  [4396] = 1,
    ACTIONS(1083), 2,
      sym__space,
      sym__eol,
  [4401] = 1,
    ACTIONS(1468), 2,
      sym__space,
      sym__eol,
  [4406] = 1,
    ACTIONS(1470), 2,
      sym__space,
      sym__eol,
  [4411] = 2,
    ACTIONS(1472), 1,
      aux_sym_time_token4,
    ACTIONS(1474), 1,
      aux_sym_time_token5,
  [4418] = 1,
    ACTIONS(1476), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [4423] = 1,
    ACTIONS(1478), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [4428] = 1,
    ACTIONS(1480), 2,
      sym__space,
      sym__eol,
  [4433] = 1,
    ACTIONS(1482), 2,
      sym__space,
      sym__eol,
  [4438] = 1,
    ACTIONS(1095), 2,
      sym__space,
      sym__eol,
  [4443] = 1,
    ACTIONS(1484), 2,
      sym__space,
      sym__eol,
  [4448] = 1,
    ACTIONS(1486), 2,
      sym__space,
      sym__eol,
  [4453] = 1,
    ACTIONS(1275), 2,
      sym__space,
      sym__eol,
  [4458] = 1,
    ACTIONS(1488), 2,
      sym__space,
      sym__eol,
  [4463] = 1,
    ACTIONS(1490), 2,
      sym__space,
      sym__eol,
  [4468] = 1,
    ACTIONS(1492), 2,
      sym__space,
      sym__eol,
  [4473] = 1,
    ACTIONS(1494), 2,
      sym__space,
      sym__eol,
  [4478] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4483] = 1,
    ACTIONS(1416), 2,
      sym__space,
      sym__eol,
  [4488] = 1,
    ACTIONS(1496), 2,
      sym__space,
      sym__eol,
  [4493] = 1,
    ACTIONS(1498), 2,
      sym__space,
      sym__eol,
  [4498] = 1,
    ACTIONS(1500), 2,
      sym__space,
      sym__eol,
  [4503] = 2,
    ACTIONS(1502), 1,
      sym__space,
    ACTIONS(1504), 1,
      sym__eol,
  [4510] = 1,
    ACTIONS(1506), 2,
      sym__space,
      sym__eol,
  [4515] = 2,
    ACTIONS(1508), 1,
      sym__space,
    ACTIONS(1510), 1,
      sym__eol,
  [4522] = 1,
    ACTIONS(1512), 2,
      sym__space,
      sym__eol,
  [4527] = 1,
    ACTIONS(1514), 2,
      sym__space,
      sym__eol,
  [4532] = 1,
    ACTIONS(1516), 2,
      sym__space,
      sym__eol,
  [4537] = 1,
    ACTIONS(1518), 2,
      sym__space,
      sym__eol,
  [4542] = 1,
    ACTIONS(1520), 2,
      sym__space,
      sym__eol,
  [4547] = 1,
    ACTIONS(1522), 2,
      sym__space,
      sym__eol,
  [4552] = 1,
    ACTIONS(1524), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [4557] = 1,
    ACTIONS(1526), 2,
      sym__space,
      sym__eol,
  [4562] = 1,
    ACTIONS(1528), 2,
      sym__space,
      sym__eol,
  [4567] = 1,
    ACTIONS(1530), 2,
      sym__space,
      sym__eol,
  [4572] = 2,
    ACTIONS(669), 1,
      sym__number,
    STATE(407), 1,
      sym_time,
  [4579] = 1,
    ACTIONS(1532), 2,
      sym__space,
      sym__eol,
  [4584] = 2,
    ACTIONS(1534), 1,
      anon_sym_STAR,
    ACTIONS(1536), 1,
      sym__number,
  [4591] = 1,
    ACTIONS(1538), 2,
      sym__space,
      sym__eol,
  [4596] = 1,
    ACTIONS(1540), 2,
      sym__space,
      sym__eol,
  [4601] = 1,
    ACTIONS(1542), 2,
      sym__space,
      sym__eol,
  [4606] = 1,
    ACTIONS(1544), 2,
      sym__space,
      sym__eol,
  [4611] = 1,
    ACTIONS(1546), 2,
      sym__space,
      sym__eol,
  [4616] = 2,
    ACTIONS(1548), 1,
      sym__space,
    ACTIONS(1550), 1,
      sym__eol,
  [4623] = 1,
    ACTIONS(1552), 2,
      sym__space,
      sym__eol,
  [4628] = 1,
    ACTIONS(1554), 2,
      sym__space,
      sym__eol,
  [4633] = 1,
    ACTIONS(1556), 2,
      sym__space,
      sym__eol,
  [4638] = 1,
    ACTIONS(1558), 2,
      sym__space,
      sym__eol,
  [4643] = 1,
    ACTIONS(1560), 2,
      sym__space,
      sym__eol,
  [4648] = 1,
    ACTIONS(1562), 2,
      sym__space,
      sym__eol,
  [4653] = 2,
    ACTIONS(1117), 1,
      aux_sym_time_token4,
    ACTIONS(1119), 1,
      aux_sym_time_token5,
  [4660] = 1,
    ACTIONS(1164), 2,
      sym__space,
      sym__eol,
  [4665] = 1,
    ACTIONS(1564), 2,
      sym__space,
      sym__eol,
  [4670] = 1,
    ACTIONS(1566), 2,
      sym__space,
      sym__eol,
  [4675] = 1,
    ACTIONS(1568), 2,
      sym__space,
      sym__eol,
  [4680] = 1,
    ACTIONS(1570), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [4685] = 1,
    ACTIONS(1572), 2,
      sym__space,
      sym__eol,
  [4690] = 1,
    ACTIONS(1574), 2,
      sym__space,
      sym__eol,
  [4695] = 1,
    ACTIONS(1576), 2,
      sym__space,
      sym__eol,
  [4700] = 2,
    ACTIONS(1578), 1,
      anon_sym_STAR,
    ACTIONS(1580), 1,
      sym__number,
  [4707] = 1,
    ACTIONS(1582), 2,
      sym__space,
      sym__eol,
  [4712] = 1,
    ACTIONS(1584), 2,
      sym__space,
      sym__eol,
  [4717] = 1,
    ACTIONS(1586), 2,
      sym__space,
      sym__eol,
  [4722] = 1,
    ACTIONS(1588), 2,
      sym__space,
      sym__eol,
  [4727] = 1,
    ACTIONS(1590), 2,
      sym__space,
      sym__eol,
  [4732] = 1,
    ACTIONS(1592), 1,
      sym__eol,
  [4736] = 1,
    ACTIONS(1594), 1,
      sym_kex,
  [4740] = 1,
    ACTIONS(1596), 1,
      aux_sym_string_token2,
  [4744] = 1,
    ACTIONS(1598), 1,
      sym__var_name,
  [4748] = 1,
    ACTIONS(1119), 1,
      aux_sym_time_token5,
  [4752] = 1,
    ACTIONS(1550), 1,
      sym__eol,
  [4756] = 1,
    ACTIONS(1600), 1,
      sym_key_sig,
  [4760] = 1,
    ACTIONS(1602), 1,
      ts_builtin_sym_end,
  [4764] = 1,
    ACTIONS(1604), 1,
      anon_sym_COLON,
  [4768] = 1,
    ACTIONS(1606), 1,
      sym__space,
  [4772] = 1,
    ACTIONS(1608), 1,
      sym_cipher,
  [4776] = 1,
    ACTIONS(459), 1,
      sym__eol,
  [4780] = 1,
    ACTIONS(1610), 1,
      sym__number,
  [4784] = 1,
    ACTIONS(1612), 1,
      sym__var_name,
  [4788] = 1,
    ACTIONS(1614), 1,
      sym__number,
  [4792] = 1,
    ACTIONS(1616), 1,
      anon_sym_COLON,
  [4796] = 1,
    ACTIONS(1618), 1,
      sym__space,
  [4800] = 1,
    ACTIONS(1620), 1,
      sym__space,
  [4804] = 1,
    ACTIONS(1474), 1,
      aux_sym_time_token5,
  [4808] = 1,
    ACTIONS(1622), 1,
      sym_sig,
  [4812] = 1,
    ACTIONS(1624), 1,
      sym__number,
  [4816] = 1,
    ACTIONS(1626), 1,
      aux_sym_time_token5,
  [4820] = 1,
    ACTIONS(1628), 1,
      sym__var_name,
  [4824] = 1,
    ACTIONS(1630), 1,
      sym__number,
  [4828] = 1,
    ACTIONS(1632), 1,
      sym_key_sig,
  [4832] = 1,
    ACTIONS(934), 1,
      aux_sym_time_token5,
  [4836] = 1,
    ACTIONS(1634), 1,
      sym_verbosity,
  [4840] = 1,
    ACTIONS(1636), 1,
      sym__number,
  [4844] = 1,
    ACTIONS(1638), 1,
      sym_kex,
  [4848] = 1,
    ACTIONS(1640), 1,
      anon_sym_RBRACE,
  [4852] = 1,
    ACTIONS(1642), 1,
      sym_sig,
  [4856] = 1,
    ACTIONS(1644), 1,
      sym_key_sig,
  [4860] = 1,
    ACTIONS(1646), 1,
      anon_sym_DQUOTE,
  [4864] = 1,
    ACTIONS(1648), 1,
      sym_cipher,
  [4868] = 1,
    ACTIONS(1650), 1,
      anon_sym_RBRACE,
  [4872] = 1,
    ACTIONS(1414), 1,
      sym__eol,
  [4876] = 1,
    ACTIONS(1652), 1,
      anon_sym_RBRACE,
  [4880] = 1,
    ACTIONS(1654), 1,
      anon_sym_RBRACE,
  [4884] = 1,
    ACTIONS(1656), 1,
      anon_sym_RBRACE,
  [4888] = 1,
    ACTIONS(1658), 1,
      anon_sym_RBRACE,
  [4892] = 1,
    ACTIONS(1660), 1,
      sym__var_name,
  [4896] = 1,
    ACTIONS(1662), 1,
      sym__var_name,
  [4900] = 1,
    ACTIONS(1664), 1,
      sym__var_name,
  [4904] = 1,
    ACTIONS(1666), 1,
      sym__eol,
  [4908] = 1,
    ACTIONS(1668), 1,
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
  [SMALL_STATE(31)] = 916,
  [SMALL_STATE(32)] = 947,
  [SMALL_STATE(33)] = 980,
  [SMALL_STATE(34)] = 1005,
  [SMALL_STATE(35)] = 1030,
  [SMALL_STATE(36)] = 1053,
  [SMALL_STATE(37)] = 1076,
  [SMALL_STATE(38)] = 1098,
  [SMALL_STATE(39)] = 1120,
  [SMALL_STATE(40)] = 1143,
  [SMALL_STATE(41)] = 1162,
  [SMALL_STATE(42)] = 1185,
  [SMALL_STATE(43)] = 1208,
  [SMALL_STATE(44)] = 1231,
  [SMALL_STATE(45)] = 1252,
  [SMALL_STATE(46)] = 1275,
  [SMALL_STATE(47)] = 1298,
  [SMALL_STATE(48)] = 1321,
  [SMALL_STATE(49)] = 1342,
  [SMALL_STATE(50)] = 1363,
  [SMALL_STATE(51)] = 1384,
  [SMALL_STATE(52)] = 1405,
  [SMALL_STATE(53)] = 1425,
  [SMALL_STATE(54)] = 1437,
  [SMALL_STATE(55)] = 1449,
  [SMALL_STATE(56)] = 1467,
  [SMALL_STATE(57)] = 1483,
  [SMALL_STATE(58)] = 1499,
  [SMALL_STATE(59)] = 1519,
  [SMALL_STATE(60)] = 1535,
  [SMALL_STATE(61)] = 1555,
  [SMALL_STATE(62)] = 1575,
  [SMALL_STATE(63)] = 1595,
  [SMALL_STATE(64)] = 1615,
  [SMALL_STATE(65)] = 1635,
  [SMALL_STATE(66)] = 1655,
  [SMALL_STATE(67)] = 1672,
  [SMALL_STATE(68)] = 1691,
  [SMALL_STATE(69)] = 1708,
  [SMALL_STATE(70)] = 1725,
  [SMALL_STATE(71)] = 1742,
  [SMALL_STATE(72)] = 1759,
  [SMALL_STATE(73)] = 1774,
  [SMALL_STATE(74)] = 1785,
  [SMALL_STATE(75)] = 1802,
  [SMALL_STATE(76)] = 1819,
  [SMALL_STATE(77)] = 1836,
  [SMALL_STATE(78)] = 1853,
  [SMALL_STATE(79)] = 1870,
  [SMALL_STATE(80)] = 1887,
  [SMALL_STATE(81)] = 1900,
  [SMALL_STATE(82)] = 1915,
  [SMALL_STATE(83)] = 1932,
  [SMALL_STATE(84)] = 1949,
  [SMALL_STATE(85)] = 1964,
  [SMALL_STATE(86)] = 1981,
  [SMALL_STATE(87)] = 1998,
  [SMALL_STATE(88)] = 2015,
  [SMALL_STATE(89)] = 2030,
  [SMALL_STATE(90)] = 2045,
  [SMALL_STATE(91)] = 2056,
  [SMALL_STATE(92)] = 2072,
  [SMALL_STATE(93)] = 2086,
  [SMALL_STATE(94)] = 2102,
  [SMALL_STATE(95)] = 2114,
  [SMALL_STATE(96)] = 2124,
  [SMALL_STATE(97)] = 2138,
  [SMALL_STATE(98)] = 2148,
  [SMALL_STATE(99)] = 2160,
  [SMALL_STATE(100)] = 2174,
  [SMALL_STATE(101)] = 2184,
  [SMALL_STATE(102)] = 2198,
  [SMALL_STATE(103)] = 2214,
  [SMALL_STATE(104)] = 2228,
  [SMALL_STATE(105)] = 2240,
  [SMALL_STATE(106)] = 2252,
  [SMALL_STATE(107)] = 2262,
  [SMALL_STATE(108)] = 2274,
  [SMALL_STATE(109)] = 2286,
  [SMALL_STATE(110)] = 2300,
  [SMALL_STATE(111)] = 2312,
  [SMALL_STATE(112)] = 2326,
  [SMALL_STATE(113)] = 2340,
  [SMALL_STATE(114)] = 2353,
  [SMALL_STATE(115)] = 2364,
  [SMALL_STATE(116)] = 2375,
  [SMALL_STATE(117)] = 2386,
  [SMALL_STATE(118)] = 2397,
  [SMALL_STATE(119)] = 2408,
  [SMALL_STATE(120)] = 2419,
  [SMALL_STATE(121)] = 2428,
  [SMALL_STATE(122)] = 2439,
  [SMALL_STATE(123)] = 2450,
  [SMALL_STATE(124)] = 2461,
  [SMALL_STATE(125)] = 2470,
  [SMALL_STATE(126)] = 2481,
  [SMALL_STATE(127)] = 2490,
  [SMALL_STATE(128)] = 2501,
  [SMALL_STATE(129)] = 2512,
  [SMALL_STATE(130)] = 2521,
  [SMALL_STATE(131)] = 2534,
  [SMALL_STATE(132)] = 2545,
  [SMALL_STATE(133)] = 2554,
  [SMALL_STATE(134)] = 2565,
  [SMALL_STATE(135)] = 2572,
  [SMALL_STATE(136)] = 2585,
  [SMALL_STATE(137)] = 2592,
  [SMALL_STATE(138)] = 2603,
  [SMALL_STATE(139)] = 2614,
  [SMALL_STATE(140)] = 2623,
  [SMALL_STATE(141)] = 2636,
  [SMALL_STATE(142)] = 2647,
  [SMALL_STATE(143)] = 2658,
  [SMALL_STATE(144)] = 2669,
  [SMALL_STATE(145)] = 2680,
  [SMALL_STATE(146)] = 2689,
  [SMALL_STATE(147)] = 2700,
  [SMALL_STATE(148)] = 2709,
  [SMALL_STATE(149)] = 2720,
  [SMALL_STATE(150)] = 2731,
  [SMALL_STATE(151)] = 2742,
  [SMALL_STATE(152)] = 2753,
  [SMALL_STATE(153)] = 2764,
  [SMALL_STATE(154)] = 2775,
  [SMALL_STATE(155)] = 2786,
  [SMALL_STATE(156)] = 2797,
  [SMALL_STATE(157)] = 2806,
  [SMALL_STATE(158)] = 2815,
  [SMALL_STATE(159)] = 2826,
  [SMALL_STATE(160)] = 2837,
  [SMALL_STATE(161)] = 2848,
  [SMALL_STATE(162)] = 2859,
  [SMALL_STATE(163)] = 2868,
  [SMALL_STATE(164)] = 2877,
  [SMALL_STATE(165)] = 2885,
  [SMALL_STATE(166)] = 2895,
  [SMALL_STATE(167)] = 2903,
  [SMALL_STATE(168)] = 2911,
  [SMALL_STATE(169)] = 2921,
  [SMALL_STATE(170)] = 2929,
  [SMALL_STATE(171)] = 2937,
  [SMALL_STATE(172)] = 2945,
  [SMALL_STATE(173)] = 2955,
  [SMALL_STATE(174)] = 2965,
  [SMALL_STATE(175)] = 2975,
  [SMALL_STATE(176)] = 2985,
  [SMALL_STATE(177)] = 2995,
  [SMALL_STATE(178)] = 3005,
  [SMALL_STATE(179)] = 3015,
  [SMALL_STATE(180)] = 3025,
  [SMALL_STATE(181)] = 3035,
  [SMALL_STATE(182)] = 3045,
  [SMALL_STATE(183)] = 3055,
  [SMALL_STATE(184)] = 3065,
  [SMALL_STATE(185)] = 3075,
  [SMALL_STATE(186)] = 3085,
  [SMALL_STATE(187)] = 3093,
  [SMALL_STATE(188)] = 3103,
  [SMALL_STATE(189)] = 3113,
  [SMALL_STATE(190)] = 3121,
  [SMALL_STATE(191)] = 3129,
  [SMALL_STATE(192)] = 3139,
  [SMALL_STATE(193)] = 3149,
  [SMALL_STATE(194)] = 3155,
  [SMALL_STATE(195)] = 3161,
  [SMALL_STATE(196)] = 3171,
  [SMALL_STATE(197)] = 3181,
  [SMALL_STATE(198)] = 3191,
  [SMALL_STATE(199)] = 3201,
  [SMALL_STATE(200)] = 3211,
  [SMALL_STATE(201)] = 3221,
  [SMALL_STATE(202)] = 3231,
  [SMALL_STATE(203)] = 3241,
  [SMALL_STATE(204)] = 3251,
  [SMALL_STATE(205)] = 3261,
  [SMALL_STATE(206)] = 3271,
  [SMALL_STATE(207)] = 3281,
  [SMALL_STATE(208)] = 3289,
  [SMALL_STATE(209)] = 3297,
  [SMALL_STATE(210)] = 3303,
  [SMALL_STATE(211)] = 3311,
  [SMALL_STATE(212)] = 3321,
  [SMALL_STATE(213)] = 3331,
  [SMALL_STATE(214)] = 3341,
  [SMALL_STATE(215)] = 3351,
  [SMALL_STATE(216)] = 3361,
  [SMALL_STATE(217)] = 3371,
  [SMALL_STATE(218)] = 3381,
  [SMALL_STATE(219)] = 3391,
  [SMALL_STATE(220)] = 3399,
  [SMALL_STATE(221)] = 3409,
  [SMALL_STATE(222)] = 3419,
  [SMALL_STATE(223)] = 3429,
  [SMALL_STATE(224)] = 3439,
  [SMALL_STATE(225)] = 3447,
  [SMALL_STATE(226)] = 3457,
  [SMALL_STATE(227)] = 3467,
  [SMALL_STATE(228)] = 3475,
  [SMALL_STATE(229)] = 3481,
  [SMALL_STATE(230)] = 3491,
  [SMALL_STATE(231)] = 3499,
  [SMALL_STATE(232)] = 3509,
  [SMALL_STATE(233)] = 3519,
  [SMALL_STATE(234)] = 3527,
  [SMALL_STATE(235)] = 3537,
  [SMALL_STATE(236)] = 3547,
  [SMALL_STATE(237)] = 3557,
  [SMALL_STATE(238)] = 3567,
  [SMALL_STATE(239)] = 3573,
  [SMALL_STATE(240)] = 3583,
  [SMALL_STATE(241)] = 3591,
  [SMALL_STATE(242)] = 3599,
  [SMALL_STATE(243)] = 3609,
  [SMALL_STATE(244)] = 3619,
  [SMALL_STATE(245)] = 3629,
  [SMALL_STATE(246)] = 3639,
  [SMALL_STATE(247)] = 3649,
  [SMALL_STATE(248)] = 3659,
  [SMALL_STATE(249)] = 3667,
  [SMALL_STATE(250)] = 3673,
  [SMALL_STATE(251)] = 3681,
  [SMALL_STATE(252)] = 3691,
  [SMALL_STATE(253)] = 3701,
  [SMALL_STATE(254)] = 3707,
  [SMALL_STATE(255)] = 3715,
  [SMALL_STATE(256)] = 3723,
  [SMALL_STATE(257)] = 3733,
  [SMALL_STATE(258)] = 3741,
  [SMALL_STATE(259)] = 3747,
  [SMALL_STATE(260)] = 3757,
  [SMALL_STATE(261)] = 3765,
  [SMALL_STATE(262)] = 3775,
  [SMALL_STATE(263)] = 3785,
  [SMALL_STATE(264)] = 3795,
  [SMALL_STATE(265)] = 3805,
  [SMALL_STATE(266)] = 3811,
  [SMALL_STATE(267)] = 3819,
  [SMALL_STATE(268)] = 3827,
  [SMALL_STATE(269)] = 3835,
  [SMALL_STATE(270)] = 3843,
  [SMALL_STATE(271)] = 3853,
  [SMALL_STATE(272)] = 3863,
  [SMALL_STATE(273)] = 3873,
  [SMALL_STATE(274)] = 3883,
  [SMALL_STATE(275)] = 3893,
  [SMALL_STATE(276)] = 3903,
  [SMALL_STATE(277)] = 3913,
  [SMALL_STATE(278)] = 3923,
  [SMALL_STATE(279)] = 3933,
  [SMALL_STATE(280)] = 3943,
  [SMALL_STATE(281)] = 3953,
  [SMALL_STATE(282)] = 3961,
  [SMALL_STATE(283)] = 3969,
  [SMALL_STATE(284)] = 3977,
  [SMALL_STATE(285)] = 3987,
  [SMALL_STATE(286)] = 3997,
  [SMALL_STATE(287)] = 4005,
  [SMALL_STATE(288)] = 4012,
  [SMALL_STATE(289)] = 4017,
  [SMALL_STATE(290)] = 4024,
  [SMALL_STATE(291)] = 4029,
  [SMALL_STATE(292)] = 4034,
  [SMALL_STATE(293)] = 4039,
  [SMALL_STATE(294)] = 4044,
  [SMALL_STATE(295)] = 4051,
  [SMALL_STATE(296)] = 4056,
  [SMALL_STATE(297)] = 4061,
  [SMALL_STATE(298)] = 4066,
  [SMALL_STATE(299)] = 4071,
  [SMALL_STATE(300)] = 4076,
  [SMALL_STATE(301)] = 4081,
  [SMALL_STATE(302)] = 4086,
  [SMALL_STATE(303)] = 4091,
  [SMALL_STATE(304)] = 4096,
  [SMALL_STATE(305)] = 4101,
  [SMALL_STATE(306)] = 4106,
  [SMALL_STATE(307)] = 4111,
  [SMALL_STATE(308)] = 4116,
  [SMALL_STATE(309)] = 4121,
  [SMALL_STATE(310)] = 4126,
  [SMALL_STATE(311)] = 4131,
  [SMALL_STATE(312)] = 4136,
  [SMALL_STATE(313)] = 4141,
  [SMALL_STATE(314)] = 4146,
  [SMALL_STATE(315)] = 4151,
  [SMALL_STATE(316)] = 4156,
  [SMALL_STATE(317)] = 4161,
  [SMALL_STATE(318)] = 4166,
  [SMALL_STATE(319)] = 4171,
  [SMALL_STATE(320)] = 4176,
  [SMALL_STATE(321)] = 4181,
  [SMALL_STATE(322)] = 4186,
  [SMALL_STATE(323)] = 4191,
  [SMALL_STATE(324)] = 4196,
  [SMALL_STATE(325)] = 4201,
  [SMALL_STATE(326)] = 4206,
  [SMALL_STATE(327)] = 4211,
  [SMALL_STATE(328)] = 4216,
  [SMALL_STATE(329)] = 4221,
  [SMALL_STATE(330)] = 4226,
  [SMALL_STATE(331)] = 4231,
  [SMALL_STATE(332)] = 4236,
  [SMALL_STATE(333)] = 4241,
  [SMALL_STATE(334)] = 4248,
  [SMALL_STATE(335)] = 4253,
  [SMALL_STATE(336)] = 4258,
  [SMALL_STATE(337)] = 4263,
  [SMALL_STATE(338)] = 4268,
  [SMALL_STATE(339)] = 4273,
  [SMALL_STATE(340)] = 4278,
  [SMALL_STATE(341)] = 4283,
  [SMALL_STATE(342)] = 4288,
  [SMALL_STATE(343)] = 4293,
  [SMALL_STATE(344)] = 4300,
  [SMALL_STATE(345)] = 4305,
  [SMALL_STATE(346)] = 4310,
  [SMALL_STATE(347)] = 4315,
  [SMALL_STATE(348)] = 4320,
  [SMALL_STATE(349)] = 4325,
  [SMALL_STATE(350)] = 4330,
  [SMALL_STATE(351)] = 4335,
  [SMALL_STATE(352)] = 4342,
  [SMALL_STATE(353)] = 4347,
  [SMALL_STATE(354)] = 4352,
  [SMALL_STATE(355)] = 4357,
  [SMALL_STATE(356)] = 4362,
  [SMALL_STATE(357)] = 4367,
  [SMALL_STATE(358)] = 4374,
  [SMALL_STATE(359)] = 4379,
  [SMALL_STATE(360)] = 4384,
  [SMALL_STATE(361)] = 4391,
  [SMALL_STATE(362)] = 4396,
  [SMALL_STATE(363)] = 4401,
  [SMALL_STATE(364)] = 4406,
  [SMALL_STATE(365)] = 4411,
  [SMALL_STATE(366)] = 4418,
  [SMALL_STATE(367)] = 4423,
  [SMALL_STATE(368)] = 4428,
  [SMALL_STATE(369)] = 4433,
  [SMALL_STATE(370)] = 4438,
  [SMALL_STATE(371)] = 4443,
  [SMALL_STATE(372)] = 4448,
  [SMALL_STATE(373)] = 4453,
  [SMALL_STATE(374)] = 4458,
  [SMALL_STATE(375)] = 4463,
  [SMALL_STATE(376)] = 4468,
  [SMALL_STATE(377)] = 4473,
  [SMALL_STATE(378)] = 4478,
  [SMALL_STATE(379)] = 4483,
  [SMALL_STATE(380)] = 4488,
  [SMALL_STATE(381)] = 4493,
  [SMALL_STATE(382)] = 4498,
  [SMALL_STATE(383)] = 4503,
  [SMALL_STATE(384)] = 4510,
  [SMALL_STATE(385)] = 4515,
  [SMALL_STATE(386)] = 4522,
  [SMALL_STATE(387)] = 4527,
  [SMALL_STATE(388)] = 4532,
  [SMALL_STATE(389)] = 4537,
  [SMALL_STATE(390)] = 4542,
  [SMALL_STATE(391)] = 4547,
  [SMALL_STATE(392)] = 4552,
  [SMALL_STATE(393)] = 4557,
  [SMALL_STATE(394)] = 4562,
  [SMALL_STATE(395)] = 4567,
  [SMALL_STATE(396)] = 4572,
  [SMALL_STATE(397)] = 4579,
  [SMALL_STATE(398)] = 4584,
  [SMALL_STATE(399)] = 4591,
  [SMALL_STATE(400)] = 4596,
  [SMALL_STATE(401)] = 4601,
  [SMALL_STATE(402)] = 4606,
  [SMALL_STATE(403)] = 4611,
  [SMALL_STATE(404)] = 4616,
  [SMALL_STATE(405)] = 4623,
  [SMALL_STATE(406)] = 4628,
  [SMALL_STATE(407)] = 4633,
  [SMALL_STATE(408)] = 4638,
  [SMALL_STATE(409)] = 4643,
  [SMALL_STATE(410)] = 4648,
  [SMALL_STATE(411)] = 4653,
  [SMALL_STATE(412)] = 4660,
  [SMALL_STATE(413)] = 4665,
  [SMALL_STATE(414)] = 4670,
  [SMALL_STATE(415)] = 4675,
  [SMALL_STATE(416)] = 4680,
  [SMALL_STATE(417)] = 4685,
  [SMALL_STATE(418)] = 4690,
  [SMALL_STATE(419)] = 4695,
  [SMALL_STATE(420)] = 4700,
  [SMALL_STATE(421)] = 4707,
  [SMALL_STATE(422)] = 4712,
  [SMALL_STATE(423)] = 4717,
  [SMALL_STATE(424)] = 4722,
  [SMALL_STATE(425)] = 4727,
  [SMALL_STATE(426)] = 4732,
  [SMALL_STATE(427)] = 4736,
  [SMALL_STATE(428)] = 4740,
  [SMALL_STATE(429)] = 4744,
  [SMALL_STATE(430)] = 4748,
  [SMALL_STATE(431)] = 4752,
  [SMALL_STATE(432)] = 4756,
  [SMALL_STATE(433)] = 4760,
  [SMALL_STATE(434)] = 4764,
  [SMALL_STATE(435)] = 4768,
  [SMALL_STATE(436)] = 4772,
  [SMALL_STATE(437)] = 4776,
  [SMALL_STATE(438)] = 4780,
  [SMALL_STATE(439)] = 4784,
  [SMALL_STATE(440)] = 4788,
  [SMALL_STATE(441)] = 4792,
  [SMALL_STATE(442)] = 4796,
  [SMALL_STATE(443)] = 4800,
  [SMALL_STATE(444)] = 4804,
  [SMALL_STATE(445)] = 4808,
  [SMALL_STATE(446)] = 4812,
  [SMALL_STATE(447)] = 4816,
  [SMALL_STATE(448)] = 4820,
  [SMALL_STATE(449)] = 4824,
  [SMALL_STATE(450)] = 4828,
  [SMALL_STATE(451)] = 4832,
  [SMALL_STATE(452)] = 4836,
  [SMALL_STATE(453)] = 4840,
  [SMALL_STATE(454)] = 4844,
  [SMALL_STATE(455)] = 4848,
  [SMALL_STATE(456)] = 4852,
  [SMALL_STATE(457)] = 4856,
  [SMALL_STATE(458)] = 4860,
  [SMALL_STATE(459)] = 4864,
  [SMALL_STATE(460)] = 4868,
  [SMALL_STATE(461)] = 4872,
  [SMALL_STATE(462)] = 4876,
  [SMALL_STATE(463)] = 4880,
  [SMALL_STATE(464)] = 4884,
  [SMALL_STATE(465)] = 4888,
  [SMALL_STATE(466)] = 4892,
  [SMALL_STATE(467)] = 4896,
  [SMALL_STATE(468)] = 4900,
  [SMALL_STATE(469)] = 4904,
  [SMALL_STATE(470)] = 4908,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(278),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(172),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(173),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(174),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(176),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(177),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(178),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(179),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(180),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(181),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(183),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(184),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(185),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(191),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(192),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(195),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(197),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(198),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(199),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(200),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(201),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(202),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(203),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(205),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(206),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(211),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(212),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(213),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(214),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(216),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(217),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(218),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(220),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(221),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(223),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(225),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(226),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(229),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(232),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(234),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(236),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(237),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(239),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(243),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(244),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(246),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(247),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(251),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(256),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(261),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(262),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(264),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(437),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(7),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(172),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(173),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(174),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(176),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(177),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(178),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(179),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(180),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(181),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(183),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(184),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(185),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(191),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(192),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(195),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(197),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(198),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(199),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(200),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(201),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(202),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(203),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(205),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(206),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(211),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(212),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(213),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(214),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(216),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(217),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(218),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(220),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(221),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(223),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(225),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(226),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(229),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(232),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(234),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(236),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(237),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(239),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(243),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(244),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(246),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(247),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(251),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(256),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(261),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(262),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(264),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(333),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(15),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 15),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 15),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 42),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 42),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 17),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 17),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 6),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 6),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 17),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 17),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 42),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 42),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 6),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 6),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 10),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(53),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(439),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(53),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(90),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(90),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(468),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(95),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(467),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(95),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 12),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 12),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(100),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(466),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(100),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 27),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 27),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(56),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(56),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(120),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(120),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(448),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(129),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(129),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(470),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(81),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(81),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 12),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(139),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(139),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(89),
  [766] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(89),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(92),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2),
  [784] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(92),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat2, 2),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat2, 2), SHIFT_REPEAT(94),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(96),
  [805] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(96),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(126),
  [815] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(126),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(286),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(286),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(108),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 12),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2),
  [865] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(281),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(281),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 17),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 17),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 17),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 14),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 17),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 17),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(78),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 19),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 6),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 25),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 22),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 6),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 6),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(456),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 22),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 6),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(459),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 22),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(457),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 22),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 22),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(454),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 6),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 37), SHIFT_REPEAT(104),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 37),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 39),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 40),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 43),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 6),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 9),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 46),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 45),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 37), SHIFT_REPEAT(111),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 37),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 6),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 36),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 6),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(83),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 21), SHIFT_REPEAT(165),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 21),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(87),
  [1355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 24), SHIFT_REPEAT(60),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 24),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 15),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 21), SHIFT_REPEAT(82),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 21),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 16),
  [1369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 21), SHIFT_REPEAT(64),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 21),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 17),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 15),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 32),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 6),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 18),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 6),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 6),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 6),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 6),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 20),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 6),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 22),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 6),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 20),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 23),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 7),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 8),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 26),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 20),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 6),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 46),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 45),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 6),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 28),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 28),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 6),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 6),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 29),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 30),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 31),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 6),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 6),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 3, .production_id = 28),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 7),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 3, .production_id = 28),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 6),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 6),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 6),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 34),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 6),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 35),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 11),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 6),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 6),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 6),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 6),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 6),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 38),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward_value2, 3, .production_id = 44),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 7),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 6),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 6),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 6),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 6),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 6),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 6),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 11),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 7),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 6),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 6),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 36),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 41),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 6),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 6),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 6),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 6),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 6),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 6),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 6),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1602] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward_value1, 3, .production_id = 33),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward_value1, 1, .production_id = 13),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
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
