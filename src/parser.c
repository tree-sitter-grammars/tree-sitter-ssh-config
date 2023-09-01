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
#define STATE_COUNT 385
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 1
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 31

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
  anon_sym_DOLLAR = 47,
  aux_sym__forward_x11_token1 = 48,
  aux_sym__forward_x11_timeout_token1 = 49,
  aux_sym__forward_x11_trusted_token1 = 50,
  aux_sym__global_known_hosts_file_token1 = 51,
  aux_sym__gssapi_authentication_token1 = 52,
  aux_sym__gssapi_delegate_credentials_token1 = 53,
  aux_sym__hostbased_accepted_algorithms_token1 = 54,
  aux_sym__hostbased_accepted_algorithms_token2 = 55,
  aux_sym__hostbased_authentication_token1 = 56,
  aux_sym__host_key_algorithms_token1 = 57,
  aux_sym__host_key_alias_token1 = 58,
  aux_sym__hostname_token1 = 59,
  sym_cipher = 60,
  sym_key_sig = 61,
  sym_protocol_version = 62,
  sym_sig = 63,
  aux_sym__file_token_token1 = 64,
  aux_sym__hostname_token_token1 = 65,
  sym__var_name = 66,
  anon_sym_DOLLAR_LBRACE = 67,
  anon_sym_RBRACE = 68,
  aux_sym__hostname_string_token1 = 69,
  anon_sym_DQUOTE = 70,
  aux_sym__hostname_string_token2 = 71,
  aux_sym_string_token1 = 72,
  aux_sym_string_token2 = 73,
  anon_sym_QMARK = 74,
  anon_sym_yes = 75,
  anon_sym_no = 76,
  sym__number = 77,
  aux_sym_time_token1 = 78,
  aux_sym_time_token2 = 79,
  aux_sym_time_token3 = 80,
  aux_sym_time_token4 = 81,
  aux_sym_time_token5 = 82,
  sym_comment = 83,
  anon_sym_EQ = 84,
  sym__space = 85,
  aux_sym__eol_token1 = 86,
  sym_config = 87,
  sym_host_declaration = 88,
  sym__declarations = 89,
  sym_parameter = 90,
  sym__add_keys_to_agent = 91,
  sym__address_family = 92,
  sym__batch_mode = 93,
  sym__bind_address = 94,
  sym__bind_interface = 95,
  sym__canonical_domains = 96,
  sym__canonicalize_fallback_local = 97,
  sym__canonicalize_hostname = 98,
  sym__canonicalize_max_dots = 99,
  sym__canonicalize_permitted_cnames = 100,
  sym__cnames_map = 101,
  sym__ca_signature_algorithms = 102,
  sym__certificate_file = 103,
  sym__check_host_ip = 104,
  sym__ciphers = 105,
  sym__clear_all_forwardings = 106,
  sym__compression = 107,
  sym__connection_attempts = 108,
  sym__connect_timeout = 109,
  sym__control_master = 110,
  sym__control_persist = 111,
  sym__control_path = 112,
  sym__forward_value = 113,
  sym__enable_escape_command_line = 114,
  sym__enable_ssh_keysign = 115,
  sym__escape_char = 116,
  sym__exit_on_forward_failure = 117,
  sym__fingerprint_hash = 118,
  sym__fork_after_authentication = 119,
  sym__forward_agent = 120,
  sym__forward_x11 = 121,
  sym__forward_x11_timeout = 122,
  sym__forward_x11_trusted = 123,
  sym__global_known_hosts_file = 124,
  sym__gssapi_authentication = 125,
  sym__gssapi_delegate_credentials = 126,
  sym__hostbased_accepted_algorithms = 127,
  sym__hostbased_authentication = 128,
  sym__host_key_algorithms = 129,
  sym__host_key_alias = 130,
  sym__hostname = 131,
  sym__file_token = 132,
  sym__hostname_token = 133,
  sym_variable = 134,
  sym__hostname_string = 135,
  sym_string = 136,
  sym__file_pattern_vars = 137,
  sym_pattern = 138,
  sym__boolean = 139,
  sym_time = 140,
  sym__sep = 141,
  sym__eol = 142,
  aux_sym_config_repeat1 = 143,
  aux_sym_host_declaration_repeat1 = 144,
  aux_sym__declarations_repeat1 = 145,
  aux_sym__canonical_domains_repeat1 = 146,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 147,
  aux_sym__cnames_map_repeat1 = 148,
  aux_sym__ca_signature_algorithms_repeat1 = 149,
  aux_sym__ciphers_repeat1 = 150,
  aux_sym__global_known_hosts_file_repeat1 = 151,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 152,
  aux_sym__hostname_string_repeat1 = 153,
  aux_sym__hostname_string_repeat2 = 154,
  aux_sym__file_pattern_vars_repeat1 = 155,
  aux_sym__file_pattern_vars_repeat2 = 156,
  aux_sym_pattern_repeat1 = 157,
  aux_sym_pattern_repeat2 = 158,
  alias_sym_number = 159,
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
  [anon_sym_DOLLAR] = "variable",
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
  [sym_cipher] = "cipher",
  [sym_key_sig] = "key_sig",
  [sym_protocol_version] = "protocol_version",
  [sym_sig] = "sig",
  [aux_sym__file_token_token1] = "token",
  [aux_sym__hostname_token_token1] = "token",
  [sym__var_name] = "_var_name",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [aux_sym__hostname_string_token1] = "_hostname_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__hostname_string_token2] = "_hostname_string_token2",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_QMARK] = "\?",
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
  [aux_sym__eol_token1] = "_eol_token1",
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
  [sym__forward_value] = "_forward_value",
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
  [sym__file_token] = "_file_token",
  [sym__hostname_token] = "_hostname_token",
  [sym_variable] = "variable",
  [sym__hostname_string] = "_hostname_string",
  [sym_string] = "string",
  [sym__file_pattern_vars] = "_file_pattern_vars",
  [sym_pattern] = "pattern",
  [sym__boolean] = "_boolean",
  [sym_time] = "time",
  [sym__sep] = "_sep",
  [sym__eol] = "_eol",
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
  [aux_sym__hostname_string_repeat1] = "_hostname_string_repeat1",
  [aux_sym__hostname_string_repeat2] = "_hostname_string_repeat2",
  [aux_sym__file_pattern_vars_repeat1] = "_file_pattern_vars_repeat1",
  [aux_sym__file_pattern_vars_repeat2] = "_file_pattern_vars_repeat2",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_pattern_repeat2] = "pattern_repeat2",
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
  [anon_sym_DOLLAR] = sym_variable,
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
  [sym_cipher] = sym_cipher,
  [sym_key_sig] = sym_key_sig,
  [sym_protocol_version] = sym_protocol_version,
  [sym_sig] = sym_sig,
  [aux_sym__file_token_token1] = aux_sym__file_token_token1,
  [aux_sym__hostname_token_token1] = aux_sym__file_token_token1,
  [sym__var_name] = sym__var_name,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__hostname_string_token1] = aux_sym__hostname_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__hostname_string_token2] = aux_sym__hostname_string_token2,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [aux_sym__eol_token1] = aux_sym__eol_token1,
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
  [sym__forward_value] = sym__forward_value,
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
  [sym__file_token] = sym__file_token,
  [sym__hostname_token] = sym__hostname_token,
  [sym_variable] = sym_variable,
  [sym__hostname_string] = sym__hostname_string,
  [sym_string] = sym_string,
  [sym__file_pattern_vars] = sym__file_pattern_vars,
  [sym_pattern] = sym_pattern,
  [sym__boolean] = sym__boolean,
  [sym_time] = sym_time,
  [sym__sep] = sym__sep,
  [sym__eol] = sym__eol,
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
  [aux_sym__hostname_string_repeat1] = aux_sym__hostname_string_repeat1,
  [aux_sym__hostname_string_repeat2] = aux_sym__hostname_string_repeat2,
  [aux_sym__file_pattern_vars_repeat1] = aux_sym__file_pattern_vars_repeat1,
  [aux_sym__file_pattern_vars_repeat2] = aux_sym__file_pattern_vars_repeat2,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_pattern_repeat2] = aux_sym_pattern_repeat2,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
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
  [sym_cipher] = {
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
  [aux_sym__hostname_token_token1] = {
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
  [aux_sym__hostname_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostname_string_token2] = {
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
  [anon_sym_QMARK] = {
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
  [aux_sym__eol_token1] = {
    .visible = false,
    .named = false,
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
  [sym__forward_value] = {
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
  [sym__file_token] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname_token] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__hostname_string] = {
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
  [sym__eol] = {
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
  [aux_sym__hostname_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostname_string_repeat2] = {
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
  [aux_sym_pattern_repeat2] = {
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
  field_keyword = 3,
  field_name = 4,
  field_port = 5,
  field_source_domain_list = 6,
  field_target_domain_list = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_bind_address] = "bind_address",
  [field_keyword] = "keyword",
  [field_name] = "name",
  [field_port] = "port",
  [field_source_domain_list] = "source_domain_list",
  [field_target_domain_list] = "target_domain_list",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 4},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 4},
  [11] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 7},
  [15] = {.index = 31, .length = 3},
  [16] = {.index = 31, .length = 3},
  [17] = {.index = 34, .length = 1},
  [18] = {.index = 35, .length = 2},
  [19] = {.index = 37, .length = 4},
  [20] = {.index = 41, .length = 3},
  [21] = {.index = 44, .length = 6},
  [22] = {.index = 50, .length = 2},
  [23] = {.index = 52, .length = 1},
  [26] = {.index = 53, .length = 2},
  [27] = {.index = 55, .length = 3},
  [28] = {.index = 58, .length = 3},
  [29] = {.index = 61, .length = 4},
  [30] = {.index = 65, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_port, 0},
  [1] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
  [3] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
  [7] =
    {field_bind_address, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [9] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [12] =
    {field_argument, 2},
    {field_keyword, 0},
  [14] =
    {field_keyword, 0},
  [15] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [19] =
    {field_bind_address, 0},
    {field_port, 2},
  [21] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [24] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [31] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [34] =
    {field_argument, 1},
  [35] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [37] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [41] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [44] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [50] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [52] =
    {field_name, 1},
  [53] =
    {field_argument, 1},
    {field_argument, 2},
  [55] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [58] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [61] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [65] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_number,
  },
  [7] = {
    [2] = alias_sym_number,
  },
  [10] = {
    [0] = sym_pattern,
  },
  [11] = {
    [2] = alias_sym_number,
  },
  [12] = {
    [0] = sym_string,
  },
  [16] = {
    [3] = sym_variable,
  },
  [24] = {
    [0] = sym_pattern,
    [1] = sym_pattern,
    [2] = sym_pattern,
  },
  [25] = {
    [0] = sym_string,
    [1] = sym_string,
    [2] = sym_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__hostname_string_repeat1, 2,
    aux_sym__hostname_string_repeat1,
    sym_string,
  aux_sym__hostname_string_repeat2, 2,
    aux_sym__hostname_string_repeat2,
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
  [51] = 31,
  [52] = 30,
  [53] = 32,
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
  [64] = 30,
  [65] = 31,
  [66] = 50,
  [67] = 67,
  [68] = 32,
  [69] = 50,
  [70] = 32,
  [71] = 34,
  [72] = 72,
  [73] = 73,
  [74] = 33,
  [75] = 30,
  [76] = 31,
  [77] = 57,
  [78] = 57,
  [79] = 55,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 32,
  [87] = 87,
  [88] = 62,
  [89] = 31,
  [90] = 30,
  [91] = 31,
  [92] = 30,
  [93] = 32,
  [94] = 33,
  [95] = 32,
  [96] = 34,
  [97] = 97,
  [98] = 34,
  [99] = 30,
  [100] = 100,
  [101] = 31,
  [102] = 34,
  [103] = 103,
  [104] = 33,
  [105] = 33,
  [106] = 106,
  [107] = 33,
  [108] = 108,
  [109] = 34,
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
  [120] = 34,
  [121] = 121,
  [122] = 122,
  [123] = 33,
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
  [143] = 31,
  [144] = 30,
  [145] = 32,
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
  [159] = 34,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 33,
  [164] = 164,
  [165] = 165,
  [166] = 32,
  [167] = 30,
  [168] = 168,
  [169] = 31,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 32,
  [176] = 30,
  [177] = 31,
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
  [249] = 125,
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
  [313] = 34,
  [314] = 314,
  [315] = 315,
  [316] = 33,
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
  [329] = 34,
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
  [348] = 33,
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
  [371] = 368,
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
  [384] = 380,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(339);
      if (lookahead == '!') ADVANCE(341);
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '$') ADVANCE(389);
      if (lookahead == '%') ADVANCE(416);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '2') ADVANCE(406);
      if (lookahead == ':') ADVANCE(358);
      if (lookahead == '=') ADVANCE(892);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead == '^') ADVANCE(365);
      if (lookahead == '}') ADVANCE(412);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(410);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(410);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(410);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(895);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(895);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(341);
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(895);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '%') ADVANCE(418);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(895);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(895);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(895);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(895);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '0') ADVANCE(884);
      if (lookahead == ':') ADVANCE(358);
      if (lookahead == '=') ADVANCE(892);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead == 'y') ADVANCE(195);
      if (lookahead == '}') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(885);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(895);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '3') ADVANCE(183);
      if (lookahead == '^') ADVANCE(365);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(887);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(888);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(889);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(890);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(886);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(341);
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '=') ADVANCE(892);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '%') ADVANCE(418);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '=') ADVANCE(892);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '%') ADVANCE(418);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(413);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '%') ADVANCE(424);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '%') ADVANCE(417);
      if (lookahead == '=') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '%') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(413);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '%') ADVANCE(423);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '=') ADVANCE(892);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '=') ADVANCE(892);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(413);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(413);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == '#') ADVANCE(875);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead == '0') ADVANCE(877);
      if (lookahead == 'A') ADVANCE(539);
      if (lookahead == 'B') ADVANCE(482);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'E') ADVANCE(689);
      if (lookahead == 'F') ADVANCE(626);
      if (lookahead == 'G') ADVANCE(476);
      if (lookahead == 'H') ADVANCE(742);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(877);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == '$') ADVANCE(390);
      if (lookahead == '=') ADVANCE(893);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'y') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == '$') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'y') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(877);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == '=') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(877);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == ':') ADVANCE(358);
      if (lookahead == '?') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 27:
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '3') ADVANCE(183);
      if (lookahead == '=') ADVANCE(892);
      if (lookahead == '^') ADVANCE(365);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 'w') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(206);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(334);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(289);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(271);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(205);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '@') ADVANCE(269);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(184);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(301);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(306);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(207);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(258);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(319);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(171);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(173);
      END_STATE();
    case 61:
      if (lookahead == '0') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == '0') ADVANCE(119);
      END_STATE();
    case 63:
      if (lookahead == '0') ADVANCE(37);
      END_STATE();
    case 64:
      if (lookahead == '1') ADVANCE(407);
      END_STATE();
    case 65:
      if (lookahead == '1') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '2') ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == '1') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == '1') ADVANCE(405);
      END_STATE();
    case 69:
      if (lookahead == '1') ADVANCE(132);
      END_STATE();
    case 70:
      if (lookahead == '1') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == '1') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == '1') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == '1') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == '1') ADVANCE(138);
      END_STATE();
    case 75:
      if (lookahead == '2') ADVANCE(407);
      END_STATE();
    case 76:
      if (lookahead == '2') ADVANCE(63);
      END_STATE();
    case 77:
      if (lookahead == '2') ADVANCE(405);
      END_STATE();
    case 78:
      if (lookahead == '2') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == '2') ADVANCE(130);
      if (lookahead == '9') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == '2') ADVANCE(109);
      END_STATE();
    case 81:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == '2') ADVANCE(107);
      if (lookahead == '3') ADVANCE(128);
      if (lookahead == '5') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == '2') ADVANCE(107);
      if (lookahead == '5') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == '2') ADVANCE(30);
      END_STATE();
    case 85:
      if (lookahead == '2') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == '2') ADVANCE(35);
      END_STATE();
    case 87:
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == '2') ADVANCE(111);
      if (lookahead == '3') ADVANCE(129);
      if (lookahead == '5') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == '2') ADVANCE(111);
      if (lookahead == '5') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == '2') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == '2') ADVANCE(39);
      END_STATE();
    case 92:
      if (lookahead == '2') ADVANCE(42);
      END_STATE();
    case 93:
      if (lookahead == '2') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == '2') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == '2') ADVANCE(46);
      END_STATE();
    case 96:
      if (lookahead == '2') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == '2') ADVANCE(118);
      END_STATE();
    case 98:
      if (lookahead == '2') ADVANCE(50);
      END_STATE();
    case 99:
      if (lookahead == '2') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 101:
      if (lookahead == '3') ADVANCE(62);
      END_STATE();
    case 102:
      if (lookahead == '4') ADVANCE(407);
      END_STATE();
    case 103:
      if (lookahead == '4') ADVANCE(405);
      END_STATE();
    case 104:
      if (lookahead == '5') ADVANCE(385);
      END_STATE();
    case 105:
      if (lookahead == '5') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == '5') ADVANCE(65);
      END_STATE();
    case 107:
      if (lookahead == '5') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == '5') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == '5') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == '5') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == '5') ADVANCE(124);
      END_STATE();
    case 112:
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 113:
      if (lookahead == '5') ADVANCE(69);
      END_STATE();
    case 114:
      if (lookahead == '5') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == '5') ADVANCE(71);
      END_STATE();
    case 116:
      if (lookahead == '5') ADVANCE(115);
      END_STATE();
    case 117:
      if (lookahead == '5') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == '5') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == '5') ADVANCE(137);
      END_STATE();
    case 120:
      if (lookahead == '5') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == '6') ADVANCE(386);
      END_STATE();
    case 122:
      if (lookahead == '6') ADVANCE(407);
      END_STATE();
    case 123:
      if (lookahead == '6') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == '6') ADVANCE(405);
      END_STATE();
    case 125:
      if (lookahead == '6') ADVANCE(40);
      END_STATE();
    case 126:
      if (lookahead == '6') ADVANCE(31);
      END_STATE();
    case 127:
      if (lookahead == '6') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == '8') ADVANCE(102);
      END_STATE();
    case 129:
      if (lookahead == '8') ADVANCE(103);
      END_STATE();
    case 130:
      if (lookahead == '8') ADVANCE(31);
      END_STATE();
    case 131:
      if (lookahead == '9') ADVANCE(407);
      END_STATE();
    case 132:
      if (lookahead == '9') ADVANCE(136);
      END_STATE();
    case 133:
      if (lookahead == '9') ADVANCE(405);
      END_STATE();
    case 134:
      if (lookahead == '9') ADVANCE(40);
      END_STATE();
    case 135:
      if (lookahead == '=') ADVANCE(892);
      if (lookahead == '^') ADVANCE(382);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(380);
      END_STATE();
    case 136:
      if (lookahead == '@') ADVANCE(265);
      END_STATE();
    case 137:
      if (lookahead == '@') ADVANCE(268);
      END_STATE();
    case 138:
      if (lookahead == '@') ADVANCE(269);
      END_STATE();
    case 139:
      if (lookahead == '^') ADVANCE(382);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(380);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(230);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == 'k') ADVANCE(28);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 215:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 216:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 217:
      if (lookahead == 'h') ADVANCE(146);
      END_STATE();
    case 218:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 219:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 220:
      if (lookahead == 'h') ADVANCE(149);
      END_STATE();
    case 221:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 222:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 223:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 224:
      if (lookahead == 'h') ADVANCE(151);
      END_STATE();
    case 225:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 236:
      if (lookahead == 'k') ADVANCE(343);
      END_STATE();
    case 237:
      if (lookahead == 'k') ADVANCE(372);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 239:
      if (lookahead == 'k') ADVANCE(53);
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 240:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 242:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 243:
      if (lookahead == 'm') ADVANCE(407);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 245:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(882);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 270:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 271:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 272:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 273:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 274:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 275:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 276:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 277:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(880);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 301:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 302:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 303:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 304:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 310:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 311:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 312:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 313:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 314:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 315:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 316:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 332:
      if (lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 333:
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 334:
      if (lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 335:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 336:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 337:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(878);
      END_STATE();
    case 338:
      if (eof) ADVANCE(339);
      if (lookahead == '\n') ADVANCE(895);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == '#') ADVANCE(875);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead == '0') ADVANCE(877);
      if (lookahead == 'A') ADVANCE(539);
      if (lookahead == 'B') ADVANCE(482);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'E') ADVANCE(689);
      if (lookahead == 'F') ADVANCE(626);
      if (lookahead == 'G') ADVANCE(476);
      if (lookahead == 'H') ADVANCE(718);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(876);
      if (lookahead != 0) ADVANCE(877);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'K') ADVANCE(563);
      if (lookahead == 'b') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(411);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_protocol_version);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__hostname_string_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__hostname_string_token1);
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__hostname_string_token1);
      if (lookahead == '{') ADVANCE(411);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__hostname_string_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(408);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(408);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__hostname_string_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(409);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__hostname_string_token1);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(408);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__hostname_string_token2);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__hostname_string_token2);
      if (lookahead == '{') ADVANCE(411);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__hostname_string_token2);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(409);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__hostname_string_token2);
      if (aux_sym__file_token_token1_character_set_2(lookahead)) ADVANCE(408);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '1') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '1') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(477);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(746);
      if (lookahead == 'l') ADVANCE(561);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(531);
      if (lookahead == 'K') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(540);
      if (lookahead == 'I') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(604);
      if (lookahead == 'X') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'C') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'C') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'C') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'C') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'D') ADVANCE(722);
      if (lookahead == 'i') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'D') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'E') ADVANCE(810);
      if (lookahead == 'S') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'E') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'F') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'F') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'F') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'F') ADVANCE(506);
      if (lookahead == 'H') ADVANCE(741);
      if (lookahead == 'M') ADVANCE(485);
      if (lookahead == 'P') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'F') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'F') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'F') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'H') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'H') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'H') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'H') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'I') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'I') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'K') ADVANCE(549);
      if (lookahead == 'r') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'K') ADVANCE(563);
      if (lookahead == 'b') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'K') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'K') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'L') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'M') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'M') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'M') ADVANCE(509);
      if (lookahead == 'P') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'N') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'O') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'P') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'S') ADVANCE(475);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'S') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'T') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'T') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'T') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(823);
      if (lookahead == 'i') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(828);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'b') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'b') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'u') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(690);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(688);
      if (lookahead == 'r') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'k') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'k') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'k') ADVANCE(432);
      if (lookahead == 'w') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead == 'x') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'w') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'w') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'w') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'x') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'y') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'y') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'y') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'y') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'y') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'y') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'z') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(875);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(878);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(877);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__eol_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 338},
  [2] = {.lex_state = 338},
  [3] = {.lex_state = 338},
  [4] = {.lex_state = 338},
  [5] = {.lex_state = 338},
  [6] = {.lex_state = 338},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 338},
  [17] = {.lex_state = 338},
  [18] = {.lex_state = 338},
  [19] = {.lex_state = 338},
  [20] = {.lex_state = 338},
  [21] = {.lex_state = 338},
  [22] = {.lex_state = 338},
  [23] = {.lex_state = 338},
  [24] = {.lex_state = 338},
  [25] = {.lex_state = 338},
  [26] = {.lex_state = 338},
  [27] = {.lex_state = 338},
  [28] = {.lex_state = 338},
  [29] = {.lex_state = 338},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 338},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 338},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 338},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 27},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 338},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 338},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 338},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 338},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 25},
  [167] = {.lex_state = 24},
  [168] = {.lex_state = 25},
  [169] = {.lex_state = 25},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 139},
  [176] = {.lex_state = 135},
  [177] = {.lex_state = 139},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 338},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 338},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 25},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 338},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 338},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 338},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 25},
  [236] = {.lex_state = 338},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 338},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 338},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 338},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 338},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 338},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 338},
  [257] = {.lex_state = 338},
  [258] = {.lex_state = 338},
  [259] = {.lex_state = 338},
  [260] = {.lex_state = 338},
  [261] = {.lex_state = 338},
  [262] = {.lex_state = 338},
  [263] = {.lex_state = 338},
  [264] = {.lex_state = 338},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 338},
  [267] = {.lex_state = 338},
  [268] = {.lex_state = 338},
  [269] = {.lex_state = 338},
  [270] = {.lex_state = 338},
  [271] = {.lex_state = 338},
  [272] = {.lex_state = 338},
  [273] = {.lex_state = 338},
  [274] = {.lex_state = 338},
  [275] = {.lex_state = 338},
  [276] = {.lex_state = 338},
  [277] = {.lex_state = 338},
  [278] = {.lex_state = 338},
  [279] = {.lex_state = 338},
  [280] = {.lex_state = 338},
  [281] = {.lex_state = 338},
  [282] = {.lex_state = 338},
  [283] = {.lex_state = 338},
  [284] = {.lex_state = 338},
  [285] = {.lex_state = 338},
  [286] = {.lex_state = 338},
  [287] = {.lex_state = 338},
  [288] = {.lex_state = 338},
  [289] = {.lex_state = 338},
  [290] = {.lex_state = 338},
  [291] = {.lex_state = 338},
  [292] = {.lex_state = 338},
  [293] = {.lex_state = 338},
  [294] = {.lex_state = 338},
  [295] = {.lex_state = 338},
  [296] = {.lex_state = 338},
  [297] = {.lex_state = 338},
  [298] = {.lex_state = 338},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 338},
  [301] = {.lex_state = 338},
  [302] = {.lex_state = 338},
  [303] = {.lex_state = 338},
  [304] = {.lex_state = 338},
  [305] = {.lex_state = 338},
  [306] = {.lex_state = 338},
  [307] = {.lex_state = 338},
  [308] = {.lex_state = 338},
  [309] = {.lex_state = 338},
  [310] = {.lex_state = 338},
  [311] = {.lex_state = 338},
  [312] = {.lex_state = 338},
  [313] = {.lex_state = 25},
  [314] = {.lex_state = 338},
  [315] = {.lex_state = 338},
  [316] = {.lex_state = 25},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 338},
  [319] = {.lex_state = 338},
  [320] = {.lex_state = 338},
  [321] = {.lex_state = 338},
  [322] = {.lex_state = 338},
  [323] = {.lex_state = 338},
  [324] = {.lex_state = 338},
  [325] = {.lex_state = 8},
  [326] = {.lex_state = 338},
  [327] = {.lex_state = 338},
  [328] = {.lex_state = 338},
  [329] = {.lex_state = 139},
  [330] = {.lex_state = 338},
  [331] = {.lex_state = 139},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 338},
  [334] = {.lex_state = 7},
  [335] = {.lex_state = 338},
  [336] = {.lex_state = 338},
  [337] = {.lex_state = 338},
  [338] = {.lex_state = 338},
  [339] = {.lex_state = 338},
  [340] = {.lex_state = 338},
  [341] = {.lex_state = 338},
  [342] = {.lex_state = 338},
  [343] = {.lex_state = 338},
  [344] = {.lex_state = 338},
  [345] = {.lex_state = 338},
  [346] = {.lex_state = 338},
  [347] = {.lex_state = 338},
  [348] = {.lex_state = 139},
  [349] = {.lex_state = 338},
  [350] = {.lex_state = 338},
  [351] = {.lex_state = 338},
  [352] = {.lex_state = 338},
  [353] = {.lex_state = 338},
  [354] = {.lex_state = 338},
  [355] = {.lex_state = 338},
  [356] = {.lex_state = 338},
  [357] = {.lex_state = 338},
  [358] = {.lex_state = 338},
  [359] = {.lex_state = 338},
  [360] = {.lex_state = 338},
  [361] = {.lex_state = 7},
  [362] = {.lex_state = 337},
  [363] = {.lex_state = 27},
  [364] = {.lex_state = 27},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 7},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 7},
  [369] = {.lex_state = 7},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 7},
  [372] = {.lex_state = 7},
  [373] = {.lex_state = 7},
  [374] = {.lex_state = 8},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 8},
  [377] = {.lex_state = 27},
  [378] = {.lex_state = 336},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 336},
  [381] = {.lex_state = 7},
  [382] = {.lex_state = 7},
  [383] = {.lex_state = 8},
  [384] = {.lex_state = 336},
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
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_protocol_version] = ACTIONS(1),
    [aux_sym__file_token_token1] = ACTIONS(1),
    [aux_sym__hostname_token_token1] = ACTIONS(1),
    [sym__var_name] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__hostname_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__hostname_string_token2] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(375),
    [sym_host_declaration] = STATE(3),
    [sym_parameter] = STATE(231),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
    [sym__eol] = STATE(3),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(93),
    [sym__space] = ACTIONS(95),
    [aux_sym__eol_token1] = ACTIONS(97),
  },
  [2] = {
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(231),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
    [sym__eol] = STATE(2),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(99),
    [aux_sym_host_declaration_token1] = ACTIONS(101),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(104),
    [aux_sym__address_family_token1] = ACTIONS(107),
    [aux_sym__batch_mode_token1] = ACTIONS(110),
    [aux_sym__bind_address_token1] = ACTIONS(113),
    [aux_sym__bind_interface_token1] = ACTIONS(116),
    [aux_sym__canonical_domains_token1] = ACTIONS(119),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(122),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(125),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(128),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(131),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(134),
    [aux_sym__certificate_file_token1] = ACTIONS(137),
    [aux_sym__check_host_ip_token1] = ACTIONS(140),
    [aux_sym__ciphers_token1] = ACTIONS(143),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(146),
    [aux_sym__compression_token1] = ACTIONS(149),
    [aux_sym__connection_attempts_token1] = ACTIONS(152),
    [aux_sym__connect_timeout_token1] = ACTIONS(155),
    [aux_sym__control_master_token1] = ACTIONS(158),
    [aux_sym__control_persist_token1] = ACTIONS(161),
    [aux_sym__control_path_token1] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(167),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(170),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(173),
    [aux_sym__escape_char_token1] = ACTIONS(176),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(179),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(182),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(185),
    [aux_sym__forward_agent_token1] = ACTIONS(188),
    [aux_sym__forward_x11_token1] = ACTIONS(191),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(194),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(197),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(200),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(203),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(206),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(209),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(209),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(212),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(215),
    [aux_sym__host_key_alias_token1] = ACTIONS(218),
    [aux_sym__hostname_token1] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [aux_sym_string_token1] = ACTIONS(227),
    [sym__number] = ACTIONS(230),
    [sym_comment] = ACTIONS(233),
    [sym__space] = ACTIONS(236),
    [aux_sym__eol_token1] = ACTIONS(239),
  },
  [3] = {
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(231),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
    [sym__eol] = STATE(2),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(242),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(93),
    [sym__space] = ACTIONS(95),
    [aux_sym__eol_token1] = ACTIONS(244),
  },
  [4] = {
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(246),
    [aux_sym_host_declaration_token1] = ACTIONS(248),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(250),
    [aux_sym__address_family_token1] = ACTIONS(253),
    [aux_sym__batch_mode_token1] = ACTIONS(256),
    [aux_sym__bind_address_token1] = ACTIONS(259),
    [aux_sym__bind_interface_token1] = ACTIONS(262),
    [aux_sym__canonical_domains_token1] = ACTIONS(265),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(268),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(271),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(274),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(277),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(280),
    [aux_sym__certificate_file_token1] = ACTIONS(283),
    [aux_sym__check_host_ip_token1] = ACTIONS(286),
    [aux_sym__ciphers_token1] = ACTIONS(289),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(292),
    [aux_sym__compression_token1] = ACTIONS(295),
    [aux_sym__connection_attempts_token1] = ACTIONS(298),
    [aux_sym__connect_timeout_token1] = ACTIONS(301),
    [aux_sym__control_master_token1] = ACTIONS(304),
    [aux_sym__control_persist_token1] = ACTIONS(307),
    [aux_sym__control_path_token1] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(313),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(316),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(319),
    [aux_sym__escape_char_token1] = ACTIONS(322),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(325),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(328),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(331),
    [aux_sym__forward_agent_token1] = ACTIONS(334),
    [aux_sym__forward_x11_token1] = ACTIONS(337),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(340),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(343),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(346),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(349),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(352),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(355),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(355),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(358),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(361),
    [aux_sym__host_key_alias_token1] = ACTIONS(364),
    [aux_sym__hostname_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [aux_sym_string_token1] = ACTIONS(373),
    [sym__number] = ACTIONS(376),
    [sym_comment] = ACTIONS(379),
    [sym__space] = ACTIONS(382),
    [aux_sym__eol_token1] = ACTIONS(246),
  },
  [5] = {
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(385),
    [aux_sym_host_declaration_token1] = ACTIONS(387),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(389),
    [sym__space] = ACTIONS(391),
    [aux_sym__eol_token1] = ACTIONS(385),
  },
  [6] = {
    [sym_host_declaration] = STATE(23),
    [sym_parameter] = STATE(160),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
    [sym__eol] = STATE(23),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(393),
    [aux_sym__eol_token1] = ACTIONS(395),
  },
  [7] = {
    [sym__declarations] = STATE(17),
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(389),
    [sym__space] = ACTIONS(391),
  },
  [8] = {
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(389),
    [sym__space] = ACTIONS(391),
  },
  [9] = {
    [sym__declarations] = STATE(16),
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(389),
    [sym__space] = ACTIONS(391),
  },
  [10] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(389),
    [sym__space] = ACTIONS(391),
  },
  [11] = {
    [sym__declarations] = STATE(21),
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(389),
    [sym__space] = ACTIONS(391),
  },
  [12] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(389),
    [sym__space] = ACTIONS(391),
  },
  [13] = {
    [sym__declarations] = STATE(28),
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(389),
    [sym__space] = ACTIONS(391),
  },
  [14] = {
    [sym__declarations] = STATE(18),
    [sym_parameter] = STATE(254),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(389),
    [sym__space] = ACTIONS(391),
  },
  [15] = {
    [sym_parameter] = STATE(241),
    [sym__add_keys_to_agent] = STATE(311),
    [sym__address_family] = STATE(310),
    [sym__batch_mode] = STATE(309),
    [sym__bind_address] = STATE(308),
    [sym__bind_interface] = STATE(303),
    [sym__canonical_domains] = STATE(302),
    [sym__canonicalize_fallback_local] = STATE(301),
    [sym__canonicalize_hostname] = STATE(300),
    [sym__canonicalize_max_dots] = STATE(298),
    [sym__canonicalize_permitted_cnames] = STATE(296),
    [sym__ca_signature_algorithms] = STATE(294),
    [sym__certificate_file] = STATE(293),
    [sym__check_host_ip] = STATE(292),
    [sym__ciphers] = STATE(291),
    [sym__clear_all_forwardings] = STATE(290),
    [sym__compression] = STATE(288),
    [sym__connection_attempts] = STATE(287),
    [sym__connect_timeout] = STATE(285),
    [sym__control_master] = STATE(282),
    [sym__control_persist] = STATE(280),
    [sym__control_path] = STATE(279),
    [sym__forward_value] = STATE(277),
    [sym__enable_escape_command_line] = STATE(276),
    [sym__enable_ssh_keysign] = STATE(274),
    [sym__escape_char] = STATE(272),
    [sym__exit_on_forward_failure] = STATE(271),
    [sym__fingerprint_hash] = STATE(270),
    [sym__fork_after_authentication] = STATE(264),
    [sym__forward_agent] = STATE(262),
    [sym__forward_x11] = STATE(261),
    [sym__forward_x11_timeout] = STATE(260),
    [sym__forward_x11_trusted] = STATE(336),
    [sym__global_known_hosts_file] = STATE(259),
    [sym__gssapi_authentication] = STATE(258),
    [sym__gssapi_delegate_credentials] = STATE(352),
    [sym__hostbased_accepted_algorithms] = STATE(273),
    [sym__hostbased_authentication] = STATE(275),
    [sym__host_key_algorithms] = STATE(281),
    [sym__host_key_alias] = STATE(284),
    [sym__hostname] = STATE(286),
    [sym_string] = STATE(372),
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
    [anon_sym_STAR] = ACTIONS(49),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(51),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(53),
    [aux_sym__escape_char_token1] = ACTIONS(55),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(57),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(59),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(61),
    [aux_sym__forward_agent_token1] = ACTIONS(63),
    [aux_sym__forward_x11_token1] = ACTIONS(65),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(67),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(69),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(71),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(73),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(77),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(79),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(81),
    [aux_sym__host_key_alias_token1] = ACTIONS(83),
    [aux_sym__hostname_token1] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_string_token1] = ACTIONS(89),
    [sym__number] = ACTIONS(91),
    [sym_comment] = ACTIONS(397),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(399), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(401), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [54] = 2,
    ACTIONS(403), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(405), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [108] = 2,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(409), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [162] = 2,
    ACTIONS(246), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(248), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [216] = 2,
    ACTIONS(411), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(413), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [270] = 2,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(417), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [324] = 2,
    ACTIONS(419), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(421), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [378] = 2,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(423), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [432] = 2,
    ACTIONS(425), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(427), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [486] = 2,
    ACTIONS(429), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(431), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [540] = 2,
    ACTIONS(433), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(435), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [594] = 2,
    ACTIONS(437), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(439), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [648] = 2,
    ACTIONS(441), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(443), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [702] = 2,
    ACTIONS(445), 3,
      ts_builtin_sym_end,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(447), 46,
      aux_sym_host_declaration_token1,
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
      anon_sym_STAR,
      aux_sym__enable_escape_command_line_token1,
      aux_sym__enable_ssh_keysign_token1,
      aux_sym__escape_char_token1,
      aux_sym__exit_on_forward_failure_token1,
      aux_sym__fingerprint_hash_token1,
      aux_sym__fork_after_authentication_token1,
      aux_sym__forward_agent_token1,
      aux_sym__forward_x11_token1,
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
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__number,
      sym_comment,
  [756] = 3,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(451), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(449), 12,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [778] = 3,
    ACTIONS(455), 1,
      sym__space,
    ACTIONS(451), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(449), 12,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [800] = 3,
    ACTIONS(461), 1,
      sym__space,
    ACTIONS(459), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(457), 12,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [822] = 2,
    ACTIONS(459), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(457), 12,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [841] = 2,
    ACTIONS(465), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(463), 12,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      anon_sym_md5,
      anon_sym_sha256,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [860] = 6,
    ACTIONS(469), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(471), 1,
      aux_sym__hostname_string_token1,
    STATE(36), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(473), 2,
      sym__space,
      aux_sym__eol_token1,
    STATE(58), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(467), 3,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_QMARK,
  [883] = 6,
    ACTIONS(478), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(481), 1,
      aux_sym__hostname_string_token1,
    STATE(36), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(484), 2,
      sym__space,
      aux_sym__eol_token1,
    STATE(58), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(475), 3,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_QMARK,
  [906] = 7,
    ACTIONS(469), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(471), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(304), 1,
      sym__file_pattern_vars,
    STATE(58), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(467), 3,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_QMARK,
  [931] = 7,
    ACTIONS(469), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(471), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(327), 1,
      sym__file_pattern_vars,
    STATE(58), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(467), 3,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_QMARK,
  [956] = 8,
    ACTIONS(488), 1,
      anon_sym_BANG,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      aux_sym__eol_token1,
    STATE(14), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(257), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [982] = 8,
    ACTIONS(488), 1,
      anon_sym_BANG,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      aux_sym__eol_token1,
    STATE(9), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(257), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1008] = 8,
    ACTIONS(488), 1,
      anon_sym_BANG,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      aux_sym__eol_token1,
    STATE(10), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(257), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1034] = 6,
    ACTIONS(505), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      aux_sym__hostname_string_token2,
    STATE(42), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(60), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(502), 3,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_QMARK,
  [1056] = 6,
    ACTIONS(515), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym__hostname_string_token2,
    STATE(42), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(60), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(513), 3,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_QMARK,
  [1078] = 8,
    ACTIONS(488), 1,
      anon_sym_BANG,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      aux_sym__eol_token1,
    STATE(11), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(257), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1104] = 7,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      anon_sym_none,
    ACTIONS(527), 1,
      aux_sym__hostname_string_token1,
    STATE(69), 1,
      aux_sym_pattern_repeat1,
    STATE(157), 1,
      sym__cnames_map,
    STATE(158), 1,
      sym_pattern,
    ACTIONS(525), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1127] = 5,
    ACTIONS(515), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(519), 1,
      aux_sym__hostname_string_token2,
    STATE(43), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(60), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(513), 3,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_QMARK,
  [1146] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym_string_token1,
    ACTIONS(529), 1,
      anon_sym_DOLLAR,
    ACTIONS(531), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(355), 2,
      sym_string,
      sym__boolean,
  [1164] = 6,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      anon_sym_BANG,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(138), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1184] = 4,
    ACTIONS(537), 1,
      anon_sym_confirm,
    ACTIONS(539), 1,
      sym__number,
    STATE(305), 2,
      sym__boolean,
      sym_time,
    ACTIONS(535), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1200] = 4,
    ACTIONS(545), 1,
      aux_sym__hostname_string_token1,
    STATE(57), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(543), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(541), 3,
      anon_sym_COMMA,
      sym__space,
      aux_sym__eol_token1,
  [1216] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(547), 1,
      sym__space,
    ACTIONS(449), 5,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1230] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(549), 1,
      anon_sym_EQ,
    ACTIONS(449), 5,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1244] = 3,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(551), 1,
      sym__space,
    ACTIONS(457), 5,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1258] = 6,
    ACTIONS(553), 1,
      aux_sym_time_token1,
    ACTIONS(555), 1,
      aux_sym_time_token2,
    ACTIONS(557), 1,
      aux_sym_time_token3,
    ACTIONS(559), 1,
      aux_sym_time_token4,
    ACTIONS(561), 1,
      aux_sym_time_token5,
    ACTIONS(563), 2,
      sym__space,
      aux_sym__eol_token1,
  [1278] = 2,
    ACTIONS(567), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(565), 6,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_QMARK,
      sym__space,
      aux_sym__eol_token1,
  [1290] = 6,
    ACTIONS(488), 1,
      anon_sym_BANG,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(257), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1310] = 4,
    ACTIONS(574), 1,
      aux_sym__hostname_string_token1,
    STATE(57), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(571), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(569), 3,
      anon_sym_COMMA,
      sym__space,
      aux_sym__eol_token1,
  [1326] = 2,
    ACTIONS(579), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(577), 6,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_QMARK,
      sym__space,
      aux_sym__eol_token1,
  [1338] = 6,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      aux_sym__hostname_string_token1,
    STATE(69), 1,
      aux_sym_pattern_repeat1,
    STATE(158), 1,
      sym_pattern,
    STATE(268), 1,
      sym__cnames_map,
    ACTIONS(525), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1358] = 2,
    ACTIONS(583), 1,
      aux_sym__hostname_string_token2,
    ACTIONS(581), 5,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1369] = 5,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(267), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1386] = 5,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(587), 1,
      aux_sym__hostname_string_token1,
    STATE(50), 1,
      aux_sym_pattern_repeat1,
    STATE(127), 1,
      sym_pattern,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1403] = 5,
    ACTIONS(589), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(591), 1,
      aux_sym__hostname_string_token1,
    STATE(87), 1,
      aux_sym__hostname_string_repeat1,
    STATE(149), 1,
      sym__hostname_token,
    ACTIONS(593), 2,
      sym__space,
      aux_sym__eol_token1,
  [1420] = 2,
    ACTIONS(595), 1,
      anon_sym_EQ,
    ACTIONS(449), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [1431] = 2,
    ACTIONS(597), 1,
      sym__space,
    ACTIONS(449), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [1442] = 4,
    ACTIONS(601), 1,
      aux_sym__hostname_string_token1,
    STATE(77), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(541), 2,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(599), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1457] = 5,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(128), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1474] = 3,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(603), 1,
      sym__space,
    ACTIONS(457), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1487] = 4,
    ACTIONS(607), 1,
      aux_sym__hostname_string_token1,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(605), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1502] = 2,
    ACTIONS(609), 1,
      sym__space,
    ACTIONS(459), 5,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [1513] = 2,
    ACTIONS(465), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(463), 5,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1524] = 6,
    ACTIONS(589), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(591), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym__hostname_string_repeat1,
    STATE(149), 1,
      sym__hostname_token,
    STATE(340), 1,
      sym__hostname_string,
  [1543] = 5,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(587), 1,
      aux_sym__hostname_string_token1,
    STATE(50), 1,
      aux_sym_pattern_repeat1,
    STATE(152), 1,
      sym_pattern,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1560] = 2,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(457), 5,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1571] = 2,
    ACTIONS(613), 1,
      anon_sym_EQ,
    ACTIONS(451), 5,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [1582] = 2,
    ACTIONS(615), 1,
      sym__space,
    ACTIONS(451), 5,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [1593] = 4,
    ACTIONS(620), 1,
      aux_sym__hostname_string_token1,
    STATE(77), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(569), 2,
      sym__space,
      aux_sym__eol_token1,
    ACTIONS(617), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1608] = 4,
    ACTIONS(626), 1,
      aux_sym__hostname_string_token1,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(623), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1623] = 2,
    ACTIONS(567), 1,
      aux_sym__hostname_string_token2,
    ACTIONS(565), 5,
      anon_sym_STAR,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1634] = 5,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(587), 1,
      aux_sym__hostname_string_token1,
    STATE(50), 1,
      aux_sym_pattern_repeat1,
    STATE(131), 1,
      sym_pattern,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1651] = 5,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(202), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1668] = 5,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(339), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1685] = 5,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(295), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1702] = 5,
    ACTIONS(492), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_pattern_repeat1,
    STATE(341), 1,
      sym_pattern,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1719] = 3,
    ACTIONS(631), 1,
      anon_sym_auto,
    STATE(323), 1,
      sym__boolean,
    ACTIONS(629), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1732] = 2,
    ACTIONS(633), 1,
      sym__space,
    ACTIONS(457), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [1743] = 5,
    ACTIONS(635), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(638), 1,
      aux_sym__hostname_string_token1,
    STATE(87), 1,
      aux_sym__hostname_string_repeat1,
    STATE(149), 1,
      sym__hostname_token,
    ACTIONS(641), 2,
      sym__space,
      aux_sym__eol_token1,
  [1760] = 5,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      aux_sym__hostname_string_token1,
    STATE(69), 1,
      aux_sym_pattern_repeat1,
    STATE(127), 1,
      sym_pattern,
    ACTIONS(525), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1777] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(643), 1,
      sym__space,
    ACTIONS(449), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1790] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(645), 1,
      anon_sym_EQ,
    ACTIONS(449), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1803] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(647), 1,
      sym__space,
    ACTIONS(449), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1816] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(649), 1,
      anon_sym_EQ,
    ACTIONS(449), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1829] = 3,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(651), 1,
      sym__space,
    ACTIONS(457), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1842] = 2,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(457), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1852] = 3,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(653), 1,
      sym__space,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1864] = 2,
    ACTIONS(465), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(463), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1874] = 4,
    ACTIONS(658), 1,
      anon_sym_DQUOTE,
    ACTIONS(660), 1,
      aux_sym__hostname_string_token2,
    STATE(97), 1,
      aux_sym_pattern_repeat2,
    ACTIONS(655), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1888] = 1,
    ACTIONS(463), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [1896] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(663), 1,
      anon_sym_EQ,
    ACTIONS(449), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1908] = 5,
    ACTIONS(665), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(669), 1,
      aux_sym__hostname_string_token2,
    STATE(108), 1,
      aux_sym__hostname_string_repeat2,
    STATE(242), 1,
      sym__hostname_token,
  [1924] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(671), 1,
      sym__space,
    ACTIONS(449), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1936] = 2,
    ACTIONS(465), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(463), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1946] = 4,
    ACTIONS(675), 1,
      anon_sym_DQUOTE,
    ACTIONS(677), 1,
      aux_sym__hostname_string_token2,
    STATE(97), 1,
      aux_sym_pattern_repeat2,
    ACTIONS(673), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1960] = 1,
    ACTIONS(457), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
      sym_key_sig,
  [1968] = 1,
    ACTIONS(459), 5,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [1976] = 3,
    ACTIONS(539), 1,
      sym__number,
    ACTIONS(679), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(326), 2,
      sym__boolean,
      sym_time,
  [1988] = 2,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(457), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [1998] = 5,
    ACTIONS(681), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    ACTIONS(686), 1,
      aux_sym__hostname_string_token2,
    STATE(108), 1,
      aux_sym__hostname_string_repeat2,
    STATE(242), 1,
      sym__hostname_token,
  [2014] = 1,
    ACTIONS(465), 5,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_yes,
      anon_sym_no,
  [2022] = 2,
    ACTIONS(691), 1,
      sym_cipher,
    ACTIONS(689), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2031] = 3,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(695), 2,
      sym__space,
      aux_sym__eol_token1,
  [2042] = 3,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(695), 2,
      sym__space,
      aux_sym__eol_token1,
  [2053] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(699), 2,
      sym__space,
      aux_sym__eol_token1,
  [2064] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(703), 2,
      sym__space,
      aux_sym__eol_token1,
  [2075] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(703), 2,
      sym__space,
      aux_sym__eol_token1,
  [2086] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(707), 2,
      sym__space,
      aux_sym__eol_token1,
  [2097] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(707), 2,
      sym__space,
      aux_sym__eol_token1,
  [2108] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(709), 2,
      sym__space,
      aux_sym__eol_token1,
  [2119] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(709), 2,
      sym__space,
      aux_sym__eol_token1,
  [2130] = 2,
    ACTIONS(465), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2139] = 4,
    ACTIONS(711), 1,
      sym__space,
    ACTIONS(713), 1,
      aux_sym__eol_token1,
    STATE(8), 1,
      sym__eol,
    STATE(252), 1,
      aux_sym_host_declaration_repeat1,
  [2152] = 1,
    ACTIONS(715), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      aux_sym__eol_token1,
  [2159] = 2,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
  [2168] = 4,
    ACTIONS(717), 1,
      sym__space,
    ACTIONS(719), 1,
      aux_sym__eol_token1,
    STATE(12), 1,
      sym__eol,
    STATE(252), 1,
      aux_sym_host_declaration_repeat1,
  [2181] = 3,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(724), 2,
      sym__space,
      aux_sym__eol_token1,
  [2192] = 4,
    ACTIONS(726), 1,
      aux_sym_time_token2,
    ACTIONS(728), 1,
      aux_sym_time_token3,
    ACTIONS(730), 1,
      aux_sym_time_token4,
    ACTIONS(732), 1,
      aux_sym_time_token5,
  [2205] = 1,
    ACTIONS(724), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      aux_sym__eol_token1,
  [2212] = 4,
    ACTIONS(734), 1,
      sym__space,
    ACTIONS(736), 1,
      aux_sym__eol_token1,
    STATE(7), 1,
      sym__eol,
    STATE(121), 1,
      aux_sym_host_declaration_repeat1,
  [2225] = 2,
    ACTIONS(740), 1,
      sym_key_sig,
    ACTIONS(738), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2234] = 2,
    ACTIONS(744), 1,
      sym_key_sig,
    ACTIONS(742), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2243] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(746), 2,
      sym__space,
      aux_sym__eol_token1,
  [2254] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(748), 2,
      sym__space,
      aux_sym__eol_token1,
  [2265] = 3,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(753), 2,
      sym__space,
      aux_sym__eol_token1,
  [2276] = 3,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(755), 2,
      sym__space,
      aux_sym__eol_token1,
  [2287] = 3,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(760), 2,
      sym__space,
      aux_sym__eol_token1,
  [2298] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(762), 2,
      sym__space,
      aux_sym__eol_token1,
  [2309] = 3,
    ACTIONS(766), 1,
      aux_sym__hostname_string_token2,
    STATE(103), 1,
      aux_sym_pattern_repeat2,
    ACTIONS(764), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2320] = 4,
    ACTIONS(768), 1,
      sym__space,
    ACTIONS(770), 1,
      aux_sym__eol_token1,
    STATE(13), 1,
      sym__eol,
    STATE(124), 1,
      aux_sym_host_declaration_repeat1,
  [2333] = 3,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(775), 2,
      sym__space,
      aux_sym__eol_token1,
  [2344] = 4,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    ACTIONS(781), 1,
      aux_sym__eol_token1,
    STATE(334), 1,
      sym__sep,
  [2357] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(783), 2,
      sym__space,
      aux_sym__eol_token1,
  [2368] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(785), 2,
      sym__space,
      aux_sym__eol_token1,
  [2379] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(787), 1,
      sym__space,
    ACTIONS(449), 2,
      aux_sym__hostname_token_token1,
      anon_sym_DQUOTE,
  [2390] = 3,
    ACTIONS(451), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(789), 1,
      anon_sym_EQ,
    ACTIONS(449), 2,
      aux_sym__hostname_token_token1,
      anon_sym_DQUOTE,
  [2401] = 3,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(791), 1,
      sym__space,
    ACTIONS(457), 2,
      aux_sym__hostname_token_token1,
      anon_sym_DQUOTE,
  [2412] = 3,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(793), 2,
      sym__space,
      aux_sym__eol_token1,
  [2423] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(795), 2,
      sym__space,
      aux_sym__eol_token1,
  [2434] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(797), 2,
      sym__space,
      aux_sym__eol_token1,
  [2445] = 2,
    ACTIONS(801), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(799), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      aux_sym__eol_token1,
  [2454] = 4,
    ACTIONS(665), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(669), 1,
      aux_sym__hostname_string_token2,
    STATE(100), 1,
      aux_sym__hostname_string_repeat2,
    STATE(242), 1,
      sym__hostname_token,
  [2467] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(803), 2,
      sym__space,
      aux_sym__eol_token1,
  [2478] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(805), 2,
      sym__space,
      aux_sym__eol_token1,
  [2489] = 2,
    STATE(342), 1,
      sym__boolean,
    ACTIONS(807), 2,
      anon_sym_yes,
      anon_sym_no,
  [2497] = 3,
    ACTIONS(809), 1,
      sym__space,
    ACTIONS(812), 1,
      aux_sym__eol_token1,
    STATE(154), 1,
      aux_sym__canonical_domains_repeat1,
  [2507] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(49), 1,
      sym__sep,
  [2517] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(299), 1,
      sym__sep,
  [2527] = 3,
    ACTIONS(814), 1,
      sym__space,
    ACTIONS(816), 1,
      aux_sym__eol_token1,
    STATE(220), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [2537] = 3,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    ACTIONS(820), 1,
      anon_sym_COLON,
    STATE(223), 1,
      aux_sym__cnames_map_repeat1,
  [2547] = 2,
    ACTIONS(465), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(463), 2,
      aux_sym__hostname_token_token1,
      anon_sym_DQUOTE,
  [2555] = 3,
    ACTIONS(822), 1,
      sym__space,
    ACTIONS(824), 1,
      aux_sym__eol_token1,
    STATE(29), 1,
      sym__eol,
  [2565] = 2,
    STATE(346), 1,
      sym__boolean,
    ACTIONS(826), 2,
      anon_sym_yes,
      anon_sym_no,
  [2573] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(153), 1,
      sym__sep,
  [2583] = 2,
    ACTIONS(459), 1,
      aux_sym__hostname_string_token1,
    ACTIONS(457), 2,
      aux_sym__hostname_token_token1,
      anon_sym_DQUOTE,
  [2591] = 3,
    ACTIONS(828), 1,
      anon_sym_EQ,
    ACTIONS(830), 1,
      sym__space,
    STATE(84), 1,
      sym__sep,
  [2601] = 3,
    ACTIONS(828), 1,
      anon_sym_EQ,
    ACTIONS(830), 1,
      sym__space,
    STATE(82), 1,
      sym__sep,
  [2611] = 2,
    ACTIONS(832), 1,
      sym__space,
    ACTIONS(459), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [2619] = 2,
    ACTIONS(834), 1,
      anon_sym_EQ,
    ACTIONS(451), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [2627] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym_string_token1,
    STATE(343), 1,
      sym_string,
  [2637] = 2,
    ACTIONS(836), 1,
      sym__space,
    ACTIONS(451), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [2645] = 3,
    ACTIONS(828), 1,
      anon_sym_EQ,
    ACTIONS(830), 1,
      sym__space,
    STATE(81), 1,
      sym__sep,
  [2655] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(244), 1,
      sym__sep,
  [2665] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(243), 1,
      sym__sep,
  [2675] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(373), 1,
      sym__sep,
  [2685] = 3,
    ACTIONS(838), 1,
      anon_sym_EQ,
    ACTIONS(840), 1,
      sym__space,
    STATE(45), 1,
      sym__sep,
  [2695] = 3,
    ACTIONS(457), 1,
      anon_sym_none,
    ACTIONS(459), 1,
      aux_sym__escape_char_token2,
    ACTIONS(842), 1,
      sym__space,
  [2705] = 3,
    ACTIONS(449), 1,
      anon_sym_none,
    ACTIONS(451), 1,
      aux_sym__escape_char_token2,
    ACTIONS(844), 1,
      anon_sym_EQ,
  [2715] = 3,
    ACTIONS(449), 1,
      anon_sym_none,
    ACTIONS(451), 1,
      aux_sym__escape_char_token2,
    ACTIONS(846), 1,
      sym__space,
  [2725] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(240), 1,
      sym__sep,
  [2735] = 3,
    ACTIONS(848), 1,
      anon_sym_EQ,
    ACTIONS(850), 1,
      sym__space,
    STATE(37), 1,
      sym__sep,
  [2745] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(239), 1,
      sym__sep,
  [2755] = 3,
    ACTIONS(852), 1,
      anon_sym_EQ,
    ACTIONS(854), 1,
      sym__space,
    STATE(110), 1,
      sym__sep,
  [2765] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(237), 1,
      sym__sep,
  [2775] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(233), 1,
      sym__sep,
  [2785] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(361), 1,
      sym__sep,
  [2795] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(382), 1,
      sym__sep,
  [2805] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(85), 1,
      sym__sep,
  [2815] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(106), 1,
      sym__sep,
  [2825] = 3,
    ACTIONS(856), 1,
      sym__space,
    ACTIONS(858), 1,
      aux_sym__eol_token1,
    STATE(236), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [2835] = 3,
    ACTIONS(848), 1,
      anon_sym_EQ,
    ACTIONS(850), 1,
      sym__space,
    STATE(38), 1,
      sym__sep,
  [2845] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(228), 1,
      sym__sep,
  [2855] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(226), 1,
      sym__sep,
  [2865] = 3,
    ACTIONS(860), 1,
      anon_sym_EQ,
    ACTIONS(862), 1,
      sym__space,
    STATE(331), 1,
      sym__sep,
  [2875] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(222), 1,
      sym__sep,
  [2885] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(332), 1,
      sym__sep,
  [2895] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(219), 1,
      sym__sep,
  [2905] = 3,
    ACTIONS(864), 1,
      anon_sym_EQ,
    ACTIONS(866), 1,
      sym__space,
    STATE(47), 1,
      sym__sep,
  [2915] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(217), 1,
      sym__sep,
  [2925] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(255), 1,
      sym__sep,
  [2935] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(209), 1,
      sym__sep,
  [2945] = 3,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(870), 1,
      sym__space,
    STATE(208), 1,
      sym__sep,
  [2955] = 1,
    ACTIONS(872), 3,
      anon_sym_COLON,
      sym__space,
      aux_sym__eol_token1,
  [2961] = 3,
    ACTIONS(874), 1,
      sym__space,
    ACTIONS(876), 1,
      aux_sym__eol_token1,
    STATE(218), 1,
      aux_sym__canonical_domains_repeat1,
  [2971] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(207), 1,
      sym__sep,
  [2981] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(206), 1,
      sym__sep,
  [2991] = 3,
    ACTIONS(852), 1,
      anon_sym_EQ,
    ACTIONS(854), 1,
      sym__space,
    STATE(129), 1,
      sym__sep,
  [3001] = 2,
    STATE(350), 1,
      sym__boolean,
    ACTIONS(878), 2,
      anon_sym_yes,
      anon_sym_no,
  [3009] = 2,
    STATE(351), 1,
      sym__boolean,
    ACTIONS(880), 2,
      anon_sym_yes,
      anon_sym_no,
  [3017] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym_string_token1,
    STATE(188), 1,
      sym_string,
  [3027] = 2,
    STATE(256), 1,
      sym__boolean,
    ACTIONS(882), 2,
      anon_sym_yes,
      anon_sym_no,
  [3035] = 3,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym__space,
    STATE(161), 1,
      sym__sep,
  [3045] = 3,
    ACTIONS(852), 1,
      anon_sym_EQ,
    ACTIONS(854), 1,
      sym__space,
    STATE(130), 1,
      sym__sep,
  [3055] = 2,
    ACTIONS(884), 1,
      sym__number,
    ACTIONS(886), 2,
      sym__space,
      aux_sym__eol_token1,
  [3063] = 2,
    ACTIONS(888), 1,
      sym__number,
    ACTIONS(886), 2,
      sym__space,
      aux_sym__eol_token1,
  [3071] = 2,
    ACTIONS(890), 1,
      sym__number,
    ACTIONS(886), 2,
      sym__space,
      aux_sym__eol_token1,
  [3079] = 2,
    ACTIONS(892), 1,
      sym__number,
    ACTIONS(886), 2,
      sym__space,
      aux_sym__eol_token1,
  [3087] = 3,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(870), 1,
      sym__space,
    STATE(168), 1,
      sym__sep,
  [3097] = 2,
    STATE(354), 1,
      sym__boolean,
    ACTIONS(894), 2,
      anon_sym_yes,
      anon_sym_no,
  [3105] = 3,
    ACTIONS(874), 1,
      sym__space,
    ACTIONS(896), 1,
      aux_sym__eol_token1,
    STATE(154), 1,
      aux_sym__canonical_domains_repeat1,
  [3115] = 2,
    STATE(357), 1,
      sym__boolean,
    ACTIONS(898), 2,
      anon_sym_yes,
      anon_sym_no,
  [3123] = 3,
    ACTIONS(814), 1,
      sym__space,
    ACTIONS(900), 1,
      aux_sym__eol_token1,
    STATE(250), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3133] = 3,
    ACTIONS(902), 1,
      anon_sym_EQ,
    ACTIONS(904), 1,
      sym__space,
    STATE(72), 1,
      sym__sep,
  [3143] = 2,
    STATE(359), 1,
      sym__boolean,
    ACTIONS(906), 2,
      anon_sym_yes,
      anon_sym_no,
  [3151] = 3,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_COLON,
    STATE(249), 1,
      aux_sym__cnames_map_repeat1,
  [3161] = 2,
    ACTIONS(910), 1,
      sym__number,
    ACTIONS(912), 2,
      sym__space,
      aux_sym__eol_token1,
  [3169] = 2,
    ACTIONS(914), 1,
      sym__number,
    ACTIONS(916), 2,
      sym__space,
      aux_sym__eol_token1,
  [3177] = 2,
    STATE(356), 1,
      sym__boolean,
    ACTIONS(918), 2,
      anon_sym_yes,
      anon_sym_no,
  [3185] = 2,
    ACTIONS(920), 1,
      sym__number,
    ACTIONS(916), 2,
      sym__space,
      aux_sym__eol_token1,
  [3193] = 2,
    STATE(349), 1,
      sym__boolean,
    ACTIONS(922), 2,
      anon_sym_yes,
      anon_sym_no,
  [3201] = 1,
    ACTIONS(924), 3,
      anon_sym_COLON,
      sym__space,
      aux_sym__eol_token1,
  [3207] = 3,
    ACTIONS(926), 1,
      aux_sym_time_token3,
    ACTIONS(928), 1,
      aux_sym_time_token4,
    ACTIONS(930), 1,
      aux_sym_time_token5,
  [3217] = 3,
    ACTIONS(395), 1,
      aux_sym__eol_token1,
    ACTIONS(932), 1,
      sym__space,
    STATE(23), 1,
      sym__eol,
  [3227] = 2,
    ACTIONS(934), 1,
      sym__number,
    ACTIONS(936), 2,
      sym__space,
      aux_sym__eol_token1,
  [3235] = 2,
    STATE(320), 1,
      sym__boolean,
    ACTIONS(938), 2,
      anon_sym_yes,
      anon_sym_no,
  [3243] = 2,
    ACTIONS(940), 1,
      sym__number,
    ACTIONS(936), 2,
      sym__space,
      aux_sym__eol_token1,
  [3251] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym_string_token1,
    STATE(283), 1,
      sym_string,
  [3261] = 3,
    ACTIONS(856), 1,
      sym__space,
    ACTIONS(942), 1,
      aux_sym__eol_token1,
    STATE(246), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3271] = 2,
    STATE(318), 1,
      sym__boolean,
    ACTIONS(944), 2,
      anon_sym_yes,
      anon_sym_no,
  [3279] = 2,
    ACTIONS(946), 1,
      sym__number,
    ACTIONS(936), 2,
      sym__space,
      aux_sym__eol_token1,
  [3287] = 2,
    STATE(312), 1,
      sym__boolean,
    ACTIONS(948), 2,
      anon_sym_yes,
      anon_sym_no,
  [3295] = 2,
    ACTIONS(952), 1,
      sym_sig,
    ACTIONS(950), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3303] = 3,
    ACTIONS(954), 1,
      sym__space,
    ACTIONS(956), 1,
      aux_sym__eol_token1,
    STATE(24), 1,
      sym__eol,
  [3313] = 2,
    ACTIONS(960), 1,
      aux_sym__hostname_string_token2,
    ACTIONS(958), 2,
      aux_sym__hostname_token_token1,
      anon_sym_DQUOTE,
  [3321] = 2,
    STATE(335), 1,
      sym__boolean,
    ACTIONS(962), 2,
      anon_sym_yes,
      anon_sym_no,
  [3329] = 2,
    STATE(337), 1,
      sym__boolean,
    ACTIONS(964), 2,
      anon_sym_yes,
      anon_sym_no,
  [3337] = 1,
    ACTIONS(775), 3,
      anon_sym_COMMA,
      sym__space,
      aux_sym__eol_token1,
  [3343] = 3,
    ACTIONS(966), 1,
      sym__space,
    ACTIONS(969), 1,
      aux_sym__eol_token1,
    STATE(246), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3353] = 1,
    ACTIONS(760), 3,
      anon_sym_COMMA,
      sym__space,
      aux_sym__eol_token1,
  [3359] = 1,
    ACTIONS(753), 3,
      anon_sym_COMMA,
      sym__space,
      aux_sym__eol_token1,
  [3365] = 3,
    ACTIONS(724), 1,
      anon_sym_COLON,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym__cnames_map_repeat1,
  [3375] = 3,
    ACTIONS(974), 1,
      sym__space,
    ACTIONS(977), 1,
      aux_sym__eol_token1,
    STATE(250), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3385] = 3,
    ACTIONS(979), 1,
      anon_sym_EQ,
    ACTIONS(981), 1,
      sym__space,
    STATE(48), 1,
      sym__sep,
  [3395] = 3,
    ACTIONS(983), 1,
      sym__space,
    ACTIONS(986), 1,
      aux_sym__eol_token1,
    STATE(252), 1,
      aux_sym_host_declaration_repeat1,
  [3405] = 3,
    ACTIONS(728), 1,
      aux_sym_time_token3,
    ACTIONS(730), 1,
      aux_sym_time_token4,
    ACTIONS(732), 1,
      aux_sym_time_token5,
  [3415] = 3,
    ACTIONS(988), 1,
      sym__space,
    ACTIONS(990), 1,
      aux_sym__eol_token1,
    STATE(19), 1,
      sym__eol,
  [3425] = 2,
    ACTIONS(539), 1,
      sym__number,
    STATE(353), 1,
      sym_time,
  [3432] = 1,
    ACTIONS(992), 2,
      sym__space,
      aux_sym__eol_token1,
  [3437] = 1,
    ACTIONS(994), 2,
      sym__space,
      aux_sym__eol_token1,
  [3442] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3447] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3452] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3457] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3462] = 1,
    ACTIONS(998), 2,
      sym__space,
      aux_sym__eol_token1,
  [3467] = 1,
    ACTIONS(1000), 2,
      sym__space,
      aux_sym__eol_token1,
  [3472] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3477] = 2,
    ACTIONS(730), 1,
      aux_sym_time_token4,
    ACTIONS(732), 1,
      aux_sym_time_token5,
  [3484] = 1,
    ACTIONS(1002), 2,
      sym__space,
      aux_sym__eol_token1,
  [3489] = 1,
    ACTIONS(1004), 2,
      sym__space,
      aux_sym__eol_token1,
  [3494] = 1,
    ACTIONS(1006), 2,
      sym__space,
      aux_sym__eol_token1,
  [3499] = 1,
    ACTIONS(1008), 2,
      sym__space,
      aux_sym__eol_token1,
  [3504] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3509] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3514] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3519] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3524] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3529] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3534] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3539] = 1,
    ACTIONS(1010), 2,
      sym__space,
      aux_sym__eol_token1,
  [3544] = 1,
    ACTIONS(1012), 2,
      sym__space,
      aux_sym__eol_token1,
  [3549] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3554] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3559] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3564] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3569] = 1,
    ACTIONS(1014), 2,
      sym__space,
      aux_sym__eol_token1,
  [3574] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3579] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3584] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3589] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3594] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3599] = 1,
    ACTIONS(1016), 2,
      sym__space,
      aux_sym__eol_token1,
  [3604] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3609] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3614] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3619] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3624] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3629] = 1,
    ACTIONS(1018), 2,
      sym__space,
      aux_sym__eol_token1,
  [3634] = 1,
    ACTIONS(1020), 2,
      sym__space,
      aux_sym__eol_token1,
  [3639] = 2,
    ACTIONS(956), 1,
      aux_sym__eol_token1,
    STATE(24), 1,
      sym__eol,
  [3646] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3651] = 2,
    ACTIONS(1022), 1,
      anon_sym_inet,
    ACTIONS(1024), 1,
      anon_sym_inet6,
  [3658] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3663] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3668] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3673] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3678] = 1,
    ACTIONS(1026), 2,
      sym__space,
      aux_sym__eol_token1,
  [3683] = 1,
    ACTIONS(781), 2,
      sym__space,
      aux_sym__eol_token1,
  [3688] = 1,
    ACTIONS(1028), 2,
      sym__space,
      aux_sym__eol_token1,
  [3693] = 1,
    ACTIONS(936), 2,
      sym__space,
      aux_sym__eol_token1,
  [3698] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3703] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3708] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3713] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3718] = 1,
    ACTIONS(1030), 2,
      sym__space,
      aux_sym__eol_token1,
  [3723] = 1,
    ACTIONS(465), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [3728] = 2,
    ACTIONS(1032), 1,
      aux_sym__eol_token1,
    STATE(26), 1,
      sym__eol,
  [3735] = 2,
    ACTIONS(395), 1,
      aux_sym__eol_token1,
    STATE(23), 1,
      sym__eol,
  [3742] = 1,
    ACTIONS(459), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [3747] = 2,
    ACTIONS(928), 1,
      aux_sym_time_token4,
    ACTIONS(930), 1,
      aux_sym_time_token5,
  [3754] = 1,
    ACTIONS(1034), 2,
      sym__space,
      aux_sym__eol_token1,
  [3759] = 1,
    ACTIONS(1036), 2,
      sym__space,
      aux_sym__eol_token1,
  [3764] = 1,
    ACTIONS(1038), 2,
      sym__space,
      aux_sym__eol_token1,
  [3769] = 1,
    ACTIONS(1040), 2,
      sym__space,
      aux_sym__eol_token1,
  [3774] = 1,
    ACTIONS(1042), 2,
      sym__space,
      aux_sym__eol_token1,
  [3779] = 1,
    ACTIONS(1044), 2,
      sym__space,
      aux_sym__eol_token1,
  [3784] = 1,
    ACTIONS(916), 2,
      sym__space,
      aux_sym__eol_token1,
  [3789] = 2,
    ACTIONS(1046), 1,
      aux_sym_time_token4,
    ACTIONS(1048), 1,
      aux_sym_time_token5,
  [3796] = 1,
    ACTIONS(1050), 2,
      sym__space,
      aux_sym__eol_token1,
  [3801] = 1,
    ACTIONS(1052), 2,
      sym__space,
      aux_sym__eol_token1,
  [3806] = 1,
    ACTIONS(912), 2,
      sym__space,
      aux_sym__eol_token1,
  [3811] = 2,
    ACTIONS(463), 1,
      anon_sym_none,
    ACTIONS(465), 1,
      aux_sym__escape_char_token2,
  [3818] = 1,
    ACTIONS(1054), 2,
      sym__space,
      aux_sym__eol_token1,
  [3823] = 2,
    ACTIONS(1056), 1,
      anon_sym_none,
    ACTIONS(1058), 1,
      aux_sym__escape_char_token2,
  [3830] = 1,
    ACTIONS(1060), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [3835] = 1,
    ACTIONS(886), 2,
      sym__space,
      aux_sym__eol_token1,
  [3840] = 2,
    ACTIONS(539), 1,
      sym__number,
    STATE(263), 1,
      sym_time,
  [3847] = 1,
    ACTIONS(1062), 2,
      sym__space,
      aux_sym__eol_token1,
  [3852] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3857] = 1,
    ACTIONS(1064), 2,
      sym__space,
      aux_sym__eol_token1,
  [3862] = 2,
    ACTIONS(1066), 1,
      aux_sym__eol_token1,
    STATE(27), 1,
      sym__eol,
  [3869] = 1,
    ACTIONS(1068), 2,
      sym__space,
      aux_sym__eol_token1,
  [3874] = 1,
    ACTIONS(1070), 2,
      sym__space,
      aux_sym__eol_token1,
  [3879] = 1,
    ACTIONS(1072), 2,
      sym__space,
      aux_sym__eol_token1,
  [3884] = 1,
    ACTIONS(1074), 2,
      sym__space,
      aux_sym__eol_token1,
  [3889] = 1,
    ACTIONS(1076), 2,
      sym__space,
      aux_sym__eol_token1,
  [3894] = 1,
    ACTIONS(1078), 2,
      sym__space,
      aux_sym__eol_token1,
  [3899] = 1,
    ACTIONS(1080), 2,
      sym__space,
      aux_sym__eol_token1,
  [3904] = 1,
    ACTIONS(1082), 2,
      sym__space,
      aux_sym__eol_token1,
  [3909] = 2,
    ACTIONS(824), 1,
      aux_sym__eol_token1,
    STATE(29), 1,
      sym__eol,
  [3916] = 2,
    ACTIONS(457), 1,
      anon_sym_none,
    ACTIONS(459), 1,
      aux_sym__escape_char_token2,
  [3923] = 1,
    ACTIONS(1084), 2,
      sym__space,
      aux_sym__eol_token1,
  [3928] = 1,
    ACTIONS(1086), 2,
      sym__space,
      aux_sym__eol_token1,
  [3933] = 1,
    ACTIONS(1088), 2,
      sym__space,
      aux_sym__eol_token1,
  [3938] = 1,
    ACTIONS(996), 2,
      sym__space,
      aux_sym__eol_token1,
  [3943] = 1,
    ACTIONS(1090), 2,
      sym__space,
      aux_sym__eol_token1,
  [3948] = 1,
    ACTIONS(1092), 2,
      sym__space,
      aux_sym__eol_token1,
  [3953] = 1,
    ACTIONS(1094), 2,
      sym__space,
      aux_sym__eol_token1,
  [3958] = 1,
    ACTIONS(1096), 2,
      sym__space,
      aux_sym__eol_token1,
  [3963] = 1,
    ACTIONS(1098), 2,
      sym__space,
      aux_sym__eol_token1,
  [3968] = 1,
    ACTIONS(1100), 2,
      sym__space,
      aux_sym__eol_token1,
  [3973] = 1,
    ACTIONS(1102), 2,
      sym__space,
      aux_sym__eol_token1,
  [3978] = 1,
    ACTIONS(1104), 2,
      sym__space,
      aux_sym__eol_token1,
  [3983] = 1,
    ACTIONS(1106), 1,
      sym__number,
  [3987] = 1,
    ACTIONS(1108), 1,
      aux_sym_string_token2,
  [3991] = 1,
    ACTIONS(1110), 1,
      sym_key_sig,
  [3995] = 1,
    ACTIONS(1112), 1,
      sym_key_sig,
  [3999] = 1,
    ACTIONS(1114), 1,
      aux_sym_time_token5,
  [4003] = 1,
    ACTIONS(1116), 1,
      sym_sig,
  [4007] = 1,
    ACTIONS(1048), 1,
      aux_sym_time_token5,
  [4011] = 1,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
  [4015] = 1,
    ACTIONS(1120), 1,
      sym__number,
  [4019] = 1,
    ACTIONS(930), 1,
      aux_sym_time_token5,
  [4023] = 1,
    ACTIONS(1122), 1,
      anon_sym_RBRACE,
  [4027] = 1,
    ACTIONS(1124), 1,
      anon_sym_COLON,
  [4031] = 1,
    ACTIONS(1126), 1,
      sym__number,
  [4035] = 1,
    ACTIONS(1128), 1,
      sym_cipher,
  [4039] = 1,
    ACTIONS(1130), 1,
      ts_builtin_sym_end,
  [4043] = 1,
    ACTIONS(1132), 1,
      sym_cipher,
  [4047] = 1,
    ACTIONS(1134), 1,
      sym_key_sig,
  [4051] = 1,
    ACTIONS(1136), 1,
      sym__var_name,
  [4055] = 1,
    ACTIONS(1138), 1,
      anon_sym_DQUOTE,
  [4059] = 1,
    ACTIONS(1140), 1,
      sym__var_name,
  [4063] = 1,
    ACTIONS(1142), 1,
      sym_sig,
  [4067] = 1,
    ACTIONS(1144), 1,
      sym__number,
  [4071] = 1,
    ACTIONS(732), 1,
      aux_sym_time_token5,
  [4075] = 1,
    ACTIONS(1146), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 54,
  [SMALL_STATE(18)] = 108,
  [SMALL_STATE(19)] = 162,
  [SMALL_STATE(20)] = 216,
  [SMALL_STATE(21)] = 270,
  [SMALL_STATE(22)] = 324,
  [SMALL_STATE(23)] = 378,
  [SMALL_STATE(24)] = 432,
  [SMALL_STATE(25)] = 486,
  [SMALL_STATE(26)] = 540,
  [SMALL_STATE(27)] = 594,
  [SMALL_STATE(28)] = 648,
  [SMALL_STATE(29)] = 702,
  [SMALL_STATE(30)] = 756,
  [SMALL_STATE(31)] = 778,
  [SMALL_STATE(32)] = 800,
  [SMALL_STATE(33)] = 822,
  [SMALL_STATE(34)] = 841,
  [SMALL_STATE(35)] = 860,
  [SMALL_STATE(36)] = 883,
  [SMALL_STATE(37)] = 906,
  [SMALL_STATE(38)] = 931,
  [SMALL_STATE(39)] = 956,
  [SMALL_STATE(40)] = 982,
  [SMALL_STATE(41)] = 1008,
  [SMALL_STATE(42)] = 1034,
  [SMALL_STATE(43)] = 1056,
  [SMALL_STATE(44)] = 1078,
  [SMALL_STATE(45)] = 1104,
  [SMALL_STATE(46)] = 1127,
  [SMALL_STATE(47)] = 1146,
  [SMALL_STATE(48)] = 1164,
  [SMALL_STATE(49)] = 1184,
  [SMALL_STATE(50)] = 1200,
  [SMALL_STATE(51)] = 1216,
  [SMALL_STATE(52)] = 1230,
  [SMALL_STATE(53)] = 1244,
  [SMALL_STATE(54)] = 1258,
  [SMALL_STATE(55)] = 1278,
  [SMALL_STATE(56)] = 1290,
  [SMALL_STATE(57)] = 1310,
  [SMALL_STATE(58)] = 1326,
  [SMALL_STATE(59)] = 1338,
  [SMALL_STATE(60)] = 1358,
  [SMALL_STATE(61)] = 1369,
  [SMALL_STATE(62)] = 1386,
  [SMALL_STATE(63)] = 1403,
  [SMALL_STATE(64)] = 1420,
  [SMALL_STATE(65)] = 1431,
  [SMALL_STATE(66)] = 1442,
  [SMALL_STATE(67)] = 1457,
  [SMALL_STATE(68)] = 1474,
  [SMALL_STATE(69)] = 1487,
  [SMALL_STATE(70)] = 1502,
  [SMALL_STATE(71)] = 1513,
  [SMALL_STATE(72)] = 1524,
  [SMALL_STATE(73)] = 1543,
  [SMALL_STATE(74)] = 1560,
  [SMALL_STATE(75)] = 1571,
  [SMALL_STATE(76)] = 1582,
  [SMALL_STATE(77)] = 1593,
  [SMALL_STATE(78)] = 1608,
  [SMALL_STATE(79)] = 1623,
  [SMALL_STATE(80)] = 1634,
  [SMALL_STATE(81)] = 1651,
  [SMALL_STATE(82)] = 1668,
  [SMALL_STATE(83)] = 1685,
  [SMALL_STATE(84)] = 1702,
  [SMALL_STATE(85)] = 1719,
  [SMALL_STATE(86)] = 1732,
  [SMALL_STATE(87)] = 1743,
  [SMALL_STATE(88)] = 1760,
  [SMALL_STATE(89)] = 1777,
  [SMALL_STATE(90)] = 1790,
  [SMALL_STATE(91)] = 1803,
  [SMALL_STATE(92)] = 1816,
  [SMALL_STATE(93)] = 1829,
  [SMALL_STATE(94)] = 1842,
  [SMALL_STATE(95)] = 1852,
  [SMALL_STATE(96)] = 1864,
  [SMALL_STATE(97)] = 1874,
  [SMALL_STATE(98)] = 1888,
  [SMALL_STATE(99)] = 1896,
  [SMALL_STATE(100)] = 1908,
  [SMALL_STATE(101)] = 1924,
  [SMALL_STATE(102)] = 1936,
  [SMALL_STATE(103)] = 1946,
  [SMALL_STATE(104)] = 1960,
  [SMALL_STATE(105)] = 1968,
  [SMALL_STATE(106)] = 1976,
  [SMALL_STATE(107)] = 1988,
  [SMALL_STATE(108)] = 1998,
  [SMALL_STATE(109)] = 2014,
  [SMALL_STATE(110)] = 2022,
  [SMALL_STATE(111)] = 2031,
  [SMALL_STATE(112)] = 2042,
  [SMALL_STATE(113)] = 2053,
  [SMALL_STATE(114)] = 2064,
  [SMALL_STATE(115)] = 2075,
  [SMALL_STATE(116)] = 2086,
  [SMALL_STATE(117)] = 2097,
  [SMALL_STATE(118)] = 2108,
  [SMALL_STATE(119)] = 2119,
  [SMALL_STATE(120)] = 2130,
  [SMALL_STATE(121)] = 2139,
  [SMALL_STATE(122)] = 2152,
  [SMALL_STATE(123)] = 2159,
  [SMALL_STATE(124)] = 2168,
  [SMALL_STATE(125)] = 2181,
  [SMALL_STATE(126)] = 2192,
  [SMALL_STATE(127)] = 2205,
  [SMALL_STATE(128)] = 2212,
  [SMALL_STATE(129)] = 2225,
  [SMALL_STATE(130)] = 2234,
  [SMALL_STATE(131)] = 2243,
  [SMALL_STATE(132)] = 2254,
  [SMALL_STATE(133)] = 2265,
  [SMALL_STATE(134)] = 2276,
  [SMALL_STATE(135)] = 2287,
  [SMALL_STATE(136)] = 2298,
  [SMALL_STATE(137)] = 2309,
  [SMALL_STATE(138)] = 2320,
  [SMALL_STATE(139)] = 2333,
  [SMALL_STATE(140)] = 2344,
  [SMALL_STATE(141)] = 2357,
  [SMALL_STATE(142)] = 2368,
  [SMALL_STATE(143)] = 2379,
  [SMALL_STATE(144)] = 2390,
  [SMALL_STATE(145)] = 2401,
  [SMALL_STATE(146)] = 2412,
  [SMALL_STATE(147)] = 2423,
  [SMALL_STATE(148)] = 2434,
  [SMALL_STATE(149)] = 2445,
  [SMALL_STATE(150)] = 2454,
  [SMALL_STATE(151)] = 2467,
  [SMALL_STATE(152)] = 2478,
  [SMALL_STATE(153)] = 2489,
  [SMALL_STATE(154)] = 2497,
  [SMALL_STATE(155)] = 2507,
  [SMALL_STATE(156)] = 2517,
  [SMALL_STATE(157)] = 2527,
  [SMALL_STATE(158)] = 2537,
  [SMALL_STATE(159)] = 2547,
  [SMALL_STATE(160)] = 2555,
  [SMALL_STATE(161)] = 2565,
  [SMALL_STATE(162)] = 2573,
  [SMALL_STATE(163)] = 2583,
  [SMALL_STATE(164)] = 2591,
  [SMALL_STATE(165)] = 2601,
  [SMALL_STATE(166)] = 2611,
  [SMALL_STATE(167)] = 2619,
  [SMALL_STATE(168)] = 2627,
  [SMALL_STATE(169)] = 2637,
  [SMALL_STATE(170)] = 2645,
  [SMALL_STATE(171)] = 2655,
  [SMALL_STATE(172)] = 2665,
  [SMALL_STATE(173)] = 2675,
  [SMALL_STATE(174)] = 2685,
  [SMALL_STATE(175)] = 2695,
  [SMALL_STATE(176)] = 2705,
  [SMALL_STATE(177)] = 2715,
  [SMALL_STATE(178)] = 2725,
  [SMALL_STATE(179)] = 2735,
  [SMALL_STATE(180)] = 2745,
  [SMALL_STATE(181)] = 2755,
  [SMALL_STATE(182)] = 2765,
  [SMALL_STATE(183)] = 2775,
  [SMALL_STATE(184)] = 2785,
  [SMALL_STATE(185)] = 2795,
  [SMALL_STATE(186)] = 2805,
  [SMALL_STATE(187)] = 2815,
  [SMALL_STATE(188)] = 2825,
  [SMALL_STATE(189)] = 2835,
  [SMALL_STATE(190)] = 2845,
  [SMALL_STATE(191)] = 2855,
  [SMALL_STATE(192)] = 2865,
  [SMALL_STATE(193)] = 2875,
  [SMALL_STATE(194)] = 2885,
  [SMALL_STATE(195)] = 2895,
  [SMALL_STATE(196)] = 2905,
  [SMALL_STATE(197)] = 2915,
  [SMALL_STATE(198)] = 2925,
  [SMALL_STATE(199)] = 2935,
  [SMALL_STATE(200)] = 2945,
  [SMALL_STATE(201)] = 2955,
  [SMALL_STATE(202)] = 2961,
  [SMALL_STATE(203)] = 2971,
  [SMALL_STATE(204)] = 2981,
  [SMALL_STATE(205)] = 2991,
  [SMALL_STATE(206)] = 3001,
  [SMALL_STATE(207)] = 3009,
  [SMALL_STATE(208)] = 3017,
  [SMALL_STATE(209)] = 3027,
  [SMALL_STATE(210)] = 3035,
  [SMALL_STATE(211)] = 3045,
  [SMALL_STATE(212)] = 3055,
  [SMALL_STATE(213)] = 3063,
  [SMALL_STATE(214)] = 3071,
  [SMALL_STATE(215)] = 3079,
  [SMALL_STATE(216)] = 3087,
  [SMALL_STATE(217)] = 3097,
  [SMALL_STATE(218)] = 3105,
  [SMALL_STATE(219)] = 3115,
  [SMALL_STATE(220)] = 3123,
  [SMALL_STATE(221)] = 3133,
  [SMALL_STATE(222)] = 3143,
  [SMALL_STATE(223)] = 3151,
  [SMALL_STATE(224)] = 3161,
  [SMALL_STATE(225)] = 3169,
  [SMALL_STATE(226)] = 3177,
  [SMALL_STATE(227)] = 3185,
  [SMALL_STATE(228)] = 3193,
  [SMALL_STATE(229)] = 3201,
  [SMALL_STATE(230)] = 3207,
  [SMALL_STATE(231)] = 3217,
  [SMALL_STATE(232)] = 3227,
  [SMALL_STATE(233)] = 3235,
  [SMALL_STATE(234)] = 3243,
  [SMALL_STATE(235)] = 3251,
  [SMALL_STATE(236)] = 3261,
  [SMALL_STATE(237)] = 3271,
  [SMALL_STATE(238)] = 3279,
  [SMALL_STATE(239)] = 3287,
  [SMALL_STATE(240)] = 3295,
  [SMALL_STATE(241)] = 3303,
  [SMALL_STATE(242)] = 3313,
  [SMALL_STATE(243)] = 3321,
  [SMALL_STATE(244)] = 3329,
  [SMALL_STATE(245)] = 3337,
  [SMALL_STATE(246)] = 3343,
  [SMALL_STATE(247)] = 3353,
  [SMALL_STATE(248)] = 3359,
  [SMALL_STATE(249)] = 3365,
  [SMALL_STATE(250)] = 3375,
  [SMALL_STATE(251)] = 3385,
  [SMALL_STATE(252)] = 3395,
  [SMALL_STATE(253)] = 3405,
  [SMALL_STATE(254)] = 3415,
  [SMALL_STATE(255)] = 3425,
  [SMALL_STATE(256)] = 3432,
  [SMALL_STATE(257)] = 3437,
  [SMALL_STATE(258)] = 3442,
  [SMALL_STATE(259)] = 3447,
  [SMALL_STATE(260)] = 3452,
  [SMALL_STATE(261)] = 3457,
  [SMALL_STATE(262)] = 3462,
  [SMALL_STATE(263)] = 3467,
  [SMALL_STATE(264)] = 3472,
  [SMALL_STATE(265)] = 3477,
  [SMALL_STATE(266)] = 3484,
  [SMALL_STATE(267)] = 3489,
  [SMALL_STATE(268)] = 3494,
  [SMALL_STATE(269)] = 3499,
  [SMALL_STATE(270)] = 3504,
  [SMALL_STATE(271)] = 3509,
  [SMALL_STATE(272)] = 3514,
  [SMALL_STATE(273)] = 3519,
  [SMALL_STATE(274)] = 3524,
  [SMALL_STATE(275)] = 3529,
  [SMALL_STATE(276)] = 3534,
  [SMALL_STATE(277)] = 3539,
  [SMALL_STATE(278)] = 3544,
  [SMALL_STATE(279)] = 3549,
  [SMALL_STATE(280)] = 3554,
  [SMALL_STATE(281)] = 3559,
  [SMALL_STATE(282)] = 3564,
  [SMALL_STATE(283)] = 3569,
  [SMALL_STATE(284)] = 3574,
  [SMALL_STATE(285)] = 3579,
  [SMALL_STATE(286)] = 3584,
  [SMALL_STATE(287)] = 3589,
  [SMALL_STATE(288)] = 3594,
  [SMALL_STATE(289)] = 3599,
  [SMALL_STATE(290)] = 3604,
  [SMALL_STATE(291)] = 3609,
  [SMALL_STATE(292)] = 3614,
  [SMALL_STATE(293)] = 3619,
  [SMALL_STATE(294)] = 3624,
  [SMALL_STATE(295)] = 3629,
  [SMALL_STATE(296)] = 3634,
  [SMALL_STATE(297)] = 3639,
  [SMALL_STATE(298)] = 3646,
  [SMALL_STATE(299)] = 3651,
  [SMALL_STATE(300)] = 3658,
  [SMALL_STATE(301)] = 3663,
  [SMALL_STATE(302)] = 3668,
  [SMALL_STATE(303)] = 3673,
  [SMALL_STATE(304)] = 3678,
  [SMALL_STATE(305)] = 3683,
  [SMALL_STATE(306)] = 3688,
  [SMALL_STATE(307)] = 3693,
  [SMALL_STATE(308)] = 3698,
  [SMALL_STATE(309)] = 3703,
  [SMALL_STATE(310)] = 3708,
  [SMALL_STATE(311)] = 3713,
  [SMALL_STATE(312)] = 3718,
  [SMALL_STATE(313)] = 3723,
  [SMALL_STATE(314)] = 3728,
  [SMALL_STATE(315)] = 3735,
  [SMALL_STATE(316)] = 3742,
  [SMALL_STATE(317)] = 3747,
  [SMALL_STATE(318)] = 3754,
  [SMALL_STATE(319)] = 3759,
  [SMALL_STATE(320)] = 3764,
  [SMALL_STATE(321)] = 3769,
  [SMALL_STATE(322)] = 3774,
  [SMALL_STATE(323)] = 3779,
  [SMALL_STATE(324)] = 3784,
  [SMALL_STATE(325)] = 3789,
  [SMALL_STATE(326)] = 3796,
  [SMALL_STATE(327)] = 3801,
  [SMALL_STATE(328)] = 3806,
  [SMALL_STATE(329)] = 3811,
  [SMALL_STATE(330)] = 3818,
  [SMALL_STATE(331)] = 3823,
  [SMALL_STATE(332)] = 3830,
  [SMALL_STATE(333)] = 3835,
  [SMALL_STATE(334)] = 3840,
  [SMALL_STATE(335)] = 3847,
  [SMALL_STATE(336)] = 3852,
  [SMALL_STATE(337)] = 3857,
  [SMALL_STATE(338)] = 3862,
  [SMALL_STATE(339)] = 3869,
  [SMALL_STATE(340)] = 3874,
  [SMALL_STATE(341)] = 3879,
  [SMALL_STATE(342)] = 3884,
  [SMALL_STATE(343)] = 3889,
  [SMALL_STATE(344)] = 3894,
  [SMALL_STATE(345)] = 3899,
  [SMALL_STATE(346)] = 3904,
  [SMALL_STATE(347)] = 3909,
  [SMALL_STATE(348)] = 3916,
  [SMALL_STATE(349)] = 3923,
  [SMALL_STATE(350)] = 3928,
  [SMALL_STATE(351)] = 3933,
  [SMALL_STATE(352)] = 3938,
  [SMALL_STATE(353)] = 3943,
  [SMALL_STATE(354)] = 3948,
  [SMALL_STATE(355)] = 3953,
  [SMALL_STATE(356)] = 3958,
  [SMALL_STATE(357)] = 3963,
  [SMALL_STATE(358)] = 3968,
  [SMALL_STATE(359)] = 3973,
  [SMALL_STATE(360)] = 3978,
  [SMALL_STATE(361)] = 3983,
  [SMALL_STATE(362)] = 3987,
  [SMALL_STATE(363)] = 3991,
  [SMALL_STATE(364)] = 3995,
  [SMALL_STATE(365)] = 3999,
  [SMALL_STATE(366)] = 4003,
  [SMALL_STATE(367)] = 4007,
  [SMALL_STATE(368)] = 4011,
  [SMALL_STATE(369)] = 4015,
  [SMALL_STATE(370)] = 4019,
  [SMALL_STATE(371)] = 4023,
  [SMALL_STATE(372)] = 4027,
  [SMALL_STATE(373)] = 4031,
  [SMALL_STATE(374)] = 4035,
  [SMALL_STATE(375)] = 4039,
  [SMALL_STATE(376)] = 4043,
  [SMALL_STATE(377)] = 4047,
  [SMALL_STATE(378)] = 4051,
  [SMALL_STATE(379)] = 4055,
  [SMALL_STATE(380)] = 4059,
  [SMALL_STATE(381)] = 4063,
  [SMALL_STATE(382)] = 4067,
  [SMALL_STATE(383)] = 4071,
  [SMALL_STATE(384)] = 4075,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(251),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(155),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(156),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(162),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(164),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(165),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(170),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(171),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(172),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(173),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(174),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(178),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(179),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(180),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(181),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(182),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(183),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(184),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(185),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(186),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(187),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(189),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(372),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(190),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(191),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(192),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(193),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(194),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(195),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(196),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(197),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(198),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(199),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(200),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(203),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(204),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(205),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(210),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(211),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(216),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(221),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(362),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(229),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(319),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(315),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(6),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(155),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(156),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(162),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(164),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(165),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(170),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(171),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(172),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(173),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(174),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(178),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(179),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(180),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(181),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(182),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(183),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(184),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(185),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(186),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(187),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(189),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(372),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(190),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(191),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(192),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(193),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(194),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(195),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(196),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(197),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(198),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(199),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(200),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(203),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(204),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(205),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(210),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(211),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(216),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(221),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(362),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(229),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(319),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(254),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(15),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 13),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 13),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 6),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 6),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 13),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 13),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 15),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 15),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 29),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 29),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 29),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 29),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 6),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 6),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sep, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sep, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sep, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sep, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sep, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sep, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 10),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(58),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(380),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(58),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(60),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(384),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(60),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 23),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 23),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(57),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(57),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 12),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(77),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(77),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(78),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(78),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(149),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(149),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat2, 2), SHIFT_REPEAT(97),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat2, 2),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat2, 2), SHIFT_REPEAT(97),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(242),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(242),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 15),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 30),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 15),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 15),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 15),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(62),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 22),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 19),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(366),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 19),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(376),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 19),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(377),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 6),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 19),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 6),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 6),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 6),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 6),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 27),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 28),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 18), SHIFT_REPEAT(61),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 18),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 9),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 6),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 6),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 13),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 14),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 13),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 18), SHIFT_REPEAT(235),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 18),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(88),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 21), SHIFT_REPEAT(59),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 21),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 18), SHIFT_REPEAT(56),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 18),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 6),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 17),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 19),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 8),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 17),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 20),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 7),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 24),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 17),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 25),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 26),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 6),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 4, .production_id = 16),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 6),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 6),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value, 1, .production_id = 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 6),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 7),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 7),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 6),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 6),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 6),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 6),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 6),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 6),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 6),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 6),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 6),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 6),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 6),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value, 3, .production_id = 11),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 6),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 6),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 6),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 6),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 6),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 6),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 6),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 6),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 6),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 6),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 6),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 6),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
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
