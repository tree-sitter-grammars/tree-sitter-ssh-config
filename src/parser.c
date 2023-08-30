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
#define STATE_COUNT 262
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 1
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 24

enum {
  aux_sym_config_token1 = 1,
  aux_sym_host_declaration_token1 = 2,
  anon_sym_BANG = 3,
  aux_sym__add_keys_to_agent_token1 = 4,
  anon_sym_ask = 5,
  anon_sym_confirm = 6,
  aux_sym__address_family_token1 = 7,
  anon_sym_inet = 8,
  anon_sym_inet6 = 9,
  aux_sym__batch_mode_token1 = 10,
  aux_sym__bind_address_token1 = 11,
  aux_sym__bind_interface_token1 = 12,
  aux_sym__canonical_domains_token1 = 13,
  aux_sym__canonicalize_fallback_local_token1 = 14,
  aux_sym__canonicalize_hostname_token1 = 15,
  aux_sym__canonicalize_max_dots_token1 = 16,
  aux_sym__canonicalize_permitted_cnames_token1 = 17,
  anon_sym_none = 18,
  anon_sym_COMMA = 19,
  anon_sym_COLON = 20,
  aux_sym__ca_signature_algorithms_token1 = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  aux_sym__certificate_file_token1 = 24,
  aux_sym__check_host_ip_token1 = 25,
  aux_sym__ciphers_token1 = 26,
  anon_sym_CARET = 27,
  aux_sym__clear_all_forwardings_token1 = 28,
  aux_sym__compression_token1 = 29,
  aux_sym__connection_attempts_token1 = 30,
  aux_sym__connect_timeout_token1 = 31,
  aux_sym__control_master_token1 = 32,
  anon_sym_auto = 33,
  anon_sym_autoask = 34,
  aux_sym__control_persist_token1 = 35,
  aux_sym__control_path_token1 = 36,
  sym_cipher = 37,
  sym_protocol_version = 38,
  sym_sig = 39,
  aux_sym__file_token_token1 = 40,
  anon_sym_DOLLAR_LBRACE = 41,
  aux_sym_variable_token1 = 42,
  anon_sym_RBRACE = 43,
  anon_sym_STAR = 44,
  anon_sym_QMARK = 45,
  aux_sym__file_pattern_token1 = 46,
  anon_sym_DQUOTE = 47,
  aux_sym__file_pattern_token2 = 48,
  anon_sym_yes = 49,
  anon_sym_no = 50,
  sym__number = 51,
  aux_sym_time_token1 = 52,
  aux_sym_time_token2 = 53,
  aux_sym_time_token3 = 54,
  aux_sym_time_token4 = 55,
  aux_sym_time_token5 = 56,
  sym_comment = 57,
  anon_sym_EQ = 58,
  sym__space = 59,
  sym_config = 60,
  sym_host_declaration = 61,
  sym__declarations = 62,
  sym_parameter = 63,
  sym__add_keys_to_agent = 64,
  sym__address_family = 65,
  sym__batch_mode = 66,
  sym__bind_address = 67,
  sym__bind_interface = 68,
  sym__canonical_domains = 69,
  sym__canonicalize_fallback_local = 70,
  sym__canonicalize_hostname = 71,
  sym__canonicalize_max_dots = 72,
  sym__canonicalize_permitted_cnames = 73,
  sym__cnames_map = 74,
  sym__ca_signature_algorithms = 75,
  sym__certificate_file = 76,
  sym__check_host_ip = 77,
  sym__ciphers = 78,
  sym__clear_all_forwardings = 79,
  sym__compression = 80,
  sym__connection_attempts = 81,
  sym__connect_timeout = 82,
  sym__control_master = 83,
  sym__control_persist = 84,
  sym__control_path = 85,
  sym__file_token = 86,
  sym_variable = 87,
  sym__file_pattern_vars = 88,
  sym__pattern = 89,
  sym__boolean = 90,
  sym_time = 91,
  sym__sep = 92,
  aux_sym_config_repeat1 = 93,
  aux_sym_host_declaration_repeat1 = 94,
  aux_sym__declarations_repeat1 = 95,
  aux_sym__canonical_domains_repeat1 = 96,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 97,
  aux_sym__cnames_map_repeat1 = 98,
  aux_sym__ca_signature_algorithms_repeat1 = 99,
  aux_sym__ciphers_repeat1 = 100,
  aux_sym__file_pattern_vars_repeat1 = 101,
  aux_sym__file_pattern_vars_repeat2 = 102,
  aux_sym__pattern_repeat1 = 103,
  aux_sym__pattern_repeat2 = 104,
  alias_sym_number = 105,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_config_token1] = "config_token1",
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
  [sym_cipher] = "cipher",
  [sym_protocol_version] = "protocol_version",
  [sym_sig] = "sig",
  [aux_sym__file_token_token1] = "token",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [aux_sym__file_pattern_token1] = "_file_pattern_token1",
  [anon_sym_DQUOTE] = "pattern",
  [aux_sym__file_pattern_token2] = "_file_pattern_token2",
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
  [sym__file_token] = "_file_token",
  [sym_variable] = "variable",
  [sym__file_pattern_vars] = "_file_pattern_vars",
  [sym__pattern] = "_pattern",
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
  [aux_sym__file_pattern_vars_repeat1] = "_file_pattern_vars_repeat1",
  [aux_sym__file_pattern_vars_repeat2] = "_file_pattern_vars_repeat2",
  [aux_sym__pattern_repeat1] = "_pattern_repeat1",
  [aux_sym__pattern_repeat2] = "_pattern_repeat2",
  [alias_sym_number] = "number",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_config_token1] = aux_sym_config_token1,
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
  [sym_cipher] = sym_cipher,
  [sym_protocol_version] = sym_protocol_version,
  [sym_sig] = sym_sig,
  [aux_sym__file_token_token1] = aux_sym__file_token_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym__file_pattern_token1] = aux_sym__file_pattern_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__file_pattern_token2] = aux_sym__file_pattern_token2,
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
  [sym__file_token] = sym__file_token,
  [sym_variable] = sym_variable,
  [sym__file_pattern_vars] = sym__file_pattern_vars,
  [sym__pattern] = sym__pattern,
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
  [aux_sym__file_pattern_vars_repeat1] = aux_sym__file_pattern_vars_repeat1,
  [aux_sym__file_pattern_vars_repeat2] = aux_sym__file_pattern_vars_repeat2,
  [aux_sym__pattern_repeat1] = aux_sym__pattern_repeat1,
  [aux_sym__pattern_repeat2] = aux_sym__pattern_repeat2,
  [alias_sym_number] = alias_sym_number,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_token1] = {
    .visible = false,
    .named = false,
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
  [sym_cipher] = {
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
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym__file_pattern_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__file_pattern_token2] = {
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
  [sym__file_token] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
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
  [aux_sym__file_pattern_vars_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_pattern_vars_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pattern_repeat2] = {
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
  field_keyword = 2,
  field_name = 3,
  field_source_domain_list = 4,
  field_target_domain_list = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_keyword] = "keyword",
  [field_name] = "name",
  [field_source_domain_list] = "source_domain_list",
  [field_target_domain_list] = "target_domain_list",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 4},
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 7},
  [10] = {.index = 23, .length = 3},
  [12] = {.index = 26, .length = 1},
  [13] = {.index = 27, .length = 2},
  [14] = {.index = 29, .length = 4},
  [15] = {.index = 33, .length = 3},
  [16] = {.index = 36, .length = 6},
  [17] = {.index = 42, .length = 2},
  [18] = {.index = 44, .length = 1},
  [19] = {.index = 45, .length = 2},
  [20] = {.index = 47, .length = 3},
  [21] = {.index = 50, .length = 3},
  [22] = {.index = 53, .length = 4},
  [23] = {.index = 57, .length = 4},
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
    {field_argument, 2},
    {field_keyword, 0},
  [8] =
    {field_keyword, 0},
  [9] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [13] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [16] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [23] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [26] =
    {field_argument, 1},
  [27] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [29] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [33] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [36] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [42] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [44] =
    {field_name, 1},
  [45] =
    {field_argument, 1},
    {field_argument, 2},
  [47] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [50] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [53] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [57] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = anon_sym_DQUOTE,
  },
  [5] = {
    [2] = alias_sym_number,
  },
  [11] = {
    [0] = anon_sym_DQUOTE,
    [1] = anon_sym_DQUOTE,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__file_pattern_vars_repeat1, 2,
    aux_sym__file_pattern_vars_repeat1,
    anon_sym_DQUOTE,
  aux_sym__file_pattern_vars_repeat2, 2,
    aux_sym__file_pattern_vars_repeat2,
    anon_sym_DQUOTE,
  aux_sym__pattern_repeat1, 2,
    aux_sym__pattern_repeat1,
    anon_sym_DQUOTE,
  aux_sym__pattern_repeat2, 2,
    aux_sym__pattern_repeat2,
    anon_sym_DQUOTE,
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
  [42] = 23,
  [43] = 22,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 24,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 26,
  [53] = 23,
  [54] = 22,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 61,
  [62] = 25,
  [63] = 63,
  [64] = 24,
  [65] = 22,
  [66] = 23,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 41,
  [72] = 41,
  [73] = 44,
  [74] = 74,
  [75] = 44,
  [76] = 24,
  [77] = 26,
  [78] = 23,
  [79] = 25,
  [80] = 68,
  [81] = 24,
  [82] = 22,
  [83] = 83,
  [84] = 84,
  [85] = 22,
  [86] = 23,
  [87] = 24,
  [88] = 68,
  [89] = 25,
  [90] = 90,
  [91] = 26,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 25,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 26,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 26,
  [114] = 114,
  [115] = 25,
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
  [161] = 108,
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
  [259] = 248,
  [260] = 260,
  [261] = 246,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(408);
      if (lookahead == '!') ADVANCE(411);
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '$') ADVANCE(456);
      if (lookahead == '%') ADVANCE(457);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '+') ADVANCE(430);
      if (lookahead == ',') ADVANCE(427);
      if (lookahead == '-') ADVANCE(431);
      if (lookahead == '2') ADVANCE(446);
      if (lookahead == ':') ADVANCE(428);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '^') ADVANCE(435);
      if (lookahead == '}') ADVANCE(451);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(450);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(450);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(450);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(450);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(409);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(411);
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(456);
      if (lookahead == '%') ADVANCE(457);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == ',') ADVANCE(427);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(430);
      if (lookahead == '-') ADVANCE(431);
      if (lookahead == '3') ADVANCE(158);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '^') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(467);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(468);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(469);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(466);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(411);
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(454);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '$') ADVANCE(456);
      if (lookahead == '%') ADVANCE(457);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(454);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '$') ADVANCE(456);
      if (lookahead == '%') ADVANCE(457);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(454);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '$') ADVANCE(460);
      if (lookahead == '%') ADVANCE(461);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(454);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(454);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(454);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(454);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == ',') ADVANCE(427);
      if (lookahead == ':') ADVANCE(428);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(454);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(192);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(279);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(346);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(365);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(280);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(368);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(142);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(143);
      END_STATE();
    case 34:
      if (lookahead == '0') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == '0') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == '1') ADVANCE(447);
      END_STATE();
    case 37:
      if (lookahead == '1') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == '1') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == '1') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(447);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(69);
      if (lookahead == '9') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(58);
      if (lookahead == '3') ADVANCE(68);
      if (lookahead == '5') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(58);
      if (lookahead == '5') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == '2') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == '2') ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == '2') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == '2') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == '2') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == '3') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(447);
      END_STATE();
    case 57:
      if (lookahead == '5') ADVANCE(37);
      END_STATE();
    case 58:
      if (lookahead == '5') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == '5') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '5') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == '5') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == '5') ADVANCE(40);
      END_STATE();
    case 63:
      if (lookahead == '5') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == '5') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == '6') ADVANCE(447);
      END_STATE();
    case 66:
      if (lookahead == '6') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == '6') ADVANCE(20);
      END_STATE();
    case 68:
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 69:
      if (lookahead == '8') ADVANCE(20);
      END_STATE();
    case 70:
      if (lookahead == '9') ADVANCE(447);
      END_STATE();
    case 71:
      if (lookahead == '9') ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == '@') ADVANCE(290);
      END_STATE();
    case 73:
      if (lookahead == '@') ADVANCE(304);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(246);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(200);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(244);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(395);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'I') ADVANCE(270);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(299);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(294);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(107);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(223);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'M') ADVANCE(104);
      if (lookahead == 'P') ADVANCE(184);
      END_STATE();
    case 89:
      if (lookahead == 'H') ADVANCE(301);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'K') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(302);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(291);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(123);
      if (lookahead == 'P') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 'P') ADVANCE(433);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(217);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(285);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(370);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 196:
      if (lookahead == 'f') ADVANCE(222);
      END_STATE();
    case 197:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 198:
      if (lookahead == 'f') ADVANCE(221);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(266);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(298);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(444);
      END_STATE();
    case 205:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 206:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 207:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 208:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 209:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 210:
      if (lookahead == 'h') ADVANCE(177);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 215:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 216:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 233:
      if (lookahead == 'k') ADVANCE(17);
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 234:
      if (lookahead == 'k') ADVANCE(413);
      END_STATE();
    case 235:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 236:
      if (lookahead == 'k') ADVANCE(442);
      END_STATE();
    case 237:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(414);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 253:
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 254:
      if (lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 255:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 256:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 257:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 258:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 259:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 260:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 261:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 305:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 306:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 307:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 308:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 309:
      if (lookahead == 'p') ADVANCE(390);
      END_STATE();
    case 310:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 311:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 351:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 352:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 353:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 355:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 356:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 358:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 359:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 360:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 361:
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 362:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 363:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 364:
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 397:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 398:
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 399:
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 400:
      if (lookahead == 'w') ADVANCE(117);
      END_STATE();
    case 401:
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 402:
      if (lookahead == 'y') ADVANCE(415);
      END_STATE();
    case 403:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 404:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 405:
      if (lookahead == 'z') ADVANCE(166);
      END_STATE();
    case 406:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 407:
      if (eof) ADVANCE(408);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '+') ADVANCE(430);
      if (lookahead == ',') ADVANCE(427);
      if (lookahead == '-') ADVANCE(431);
      if (lookahead == '0') ADVANCE(464);
      if (lookahead == ':') ADVANCE(428);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'B') ADVANCE(101);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 'w') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '}') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_protocol_version);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__file_pattern_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__file_pattern_token1);
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__file_pattern_token1);
      if (lookahead == '{') ADVANCE(449);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__file_pattern_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__file_pattern_token2);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__file_pattern_token2);
      if (lookahead == '{') ADVANCE(449);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__file_pattern_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 407},
  [2] = {.lex_state = 407},
  [3] = {.lex_state = 407},
  [4] = {.lex_state = 407},
  [5] = {.lex_state = 407},
  [6] = {.lex_state = 407},
  [7] = {.lex_state = 407},
  [8] = {.lex_state = 407},
  [9] = {.lex_state = 407},
  [10] = {.lex_state = 407},
  [11] = {.lex_state = 407},
  [12] = {.lex_state = 407},
  [13] = {.lex_state = 407},
  [14] = {.lex_state = 407},
  [15] = {.lex_state = 407},
  [16] = {.lex_state = 407},
  [17] = {.lex_state = 407},
  [18] = {.lex_state = 407},
  [19] = {.lex_state = 407},
  [20] = {.lex_state = 407},
  [21] = {.lex_state = 407},
  [22] = {.lex_state = 407},
  [23] = {.lex_state = 407},
  [24] = {.lex_state = 407},
  [25] = {.lex_state = 407},
  [26] = {.lex_state = 407},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 407},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 407},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 407},
  [84] = {.lex_state = 15},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 407},
  [93] = {.lex_state = 407},
  [94] = {.lex_state = 407},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 407},
  [97] = {.lex_state = 407},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 407},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 407},
  [102] = {.lex_state = 407},
  [103] = {.lex_state = 407},
  [104] = {.lex_state = 407},
  [105] = {.lex_state = 407},
  [106] = {.lex_state = 407},
  [107] = {.lex_state = 407},
  [108] = {.lex_state = 407},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 407},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 407},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 407},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 407},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 407},
  [119] = {.lex_state = 407},
  [120] = {.lex_state = 407},
  [121] = {.lex_state = 407},
  [122] = {.lex_state = 407},
  [123] = {.lex_state = 407},
  [124] = {.lex_state = 407},
  [125] = {.lex_state = 407},
  [126] = {.lex_state = 407},
  [127] = {.lex_state = 407},
  [128] = {.lex_state = 407},
  [129] = {.lex_state = 407},
  [130] = {.lex_state = 407},
  [131] = {.lex_state = 407},
  [132] = {.lex_state = 407},
  [133] = {.lex_state = 407},
  [134] = {.lex_state = 407},
  [135] = {.lex_state = 407},
  [136] = {.lex_state = 407},
  [137] = {.lex_state = 407},
  [138] = {.lex_state = 407},
  [139] = {.lex_state = 407},
  [140] = {.lex_state = 407},
  [141] = {.lex_state = 407},
  [142] = {.lex_state = 407},
  [143] = {.lex_state = 407},
  [144] = {.lex_state = 407},
  [145] = {.lex_state = 407},
  [146] = {.lex_state = 407},
  [147] = {.lex_state = 407},
  [148] = {.lex_state = 407},
  [149] = {.lex_state = 407},
  [150] = {.lex_state = 407},
  [151] = {.lex_state = 407},
  [152] = {.lex_state = 407},
  [153] = {.lex_state = 407},
  [154] = {.lex_state = 407},
  [155] = {.lex_state = 407},
  [156] = {.lex_state = 407},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 407},
  [159] = {.lex_state = 407},
  [160] = {.lex_state = 407},
  [161] = {.lex_state = 407},
  [162] = {.lex_state = 407},
  [163] = {.lex_state = 407},
  [164] = {.lex_state = 407},
  [165] = {.lex_state = 407},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 407},
  [168] = {.lex_state = 407},
  [169] = {.lex_state = 407},
  [170] = {.lex_state = 407},
  [171] = {.lex_state = 407},
  [172] = {.lex_state = 407},
  [173] = {.lex_state = 407},
  [174] = {.lex_state = 407},
  [175] = {.lex_state = 407},
  [176] = {.lex_state = 407},
  [177] = {.lex_state = 407},
  [178] = {.lex_state = 407},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 407},
  [181] = {.lex_state = 407},
  [182] = {.lex_state = 407},
  [183] = {.lex_state = 407},
  [184] = {.lex_state = 407},
  [185] = {.lex_state = 407},
  [186] = {.lex_state = 407},
  [187] = {.lex_state = 407},
  [188] = {.lex_state = 407},
  [189] = {.lex_state = 407},
  [190] = {.lex_state = 407},
  [191] = {.lex_state = 407},
  [192] = {.lex_state = 407},
  [193] = {.lex_state = 407},
  [194] = {.lex_state = 407},
  [195] = {.lex_state = 407},
  [196] = {.lex_state = 407},
  [197] = {.lex_state = 407},
  [198] = {.lex_state = 407},
  [199] = {.lex_state = 407},
  [200] = {.lex_state = 407},
  [201] = {.lex_state = 407},
  [202] = {.lex_state = 407},
  [203] = {.lex_state = 407},
  [204] = {.lex_state = 407},
  [205] = {.lex_state = 407},
  [206] = {.lex_state = 407},
  [207] = {.lex_state = 407},
  [208] = {.lex_state = 407},
  [209] = {.lex_state = 407},
  [210] = {.lex_state = 407},
  [211] = {.lex_state = 407},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 407},
  [214] = {.lex_state = 407},
  [215] = {.lex_state = 407},
  [216] = {.lex_state = 407},
  [217] = {.lex_state = 407},
  [218] = {.lex_state = 407},
  [219] = {.lex_state = 407},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 407},
  [222] = {.lex_state = 407},
  [223] = {.lex_state = 407},
  [224] = {.lex_state = 407},
  [225] = {.lex_state = 407},
  [226] = {.lex_state = 407},
  [227] = {.lex_state = 407},
  [228] = {.lex_state = 407},
  [229] = {.lex_state = 407},
  [230] = {.lex_state = 407},
  [231] = {.lex_state = 407},
  [232] = {.lex_state = 407},
  [233] = {.lex_state = 407},
  [234] = {.lex_state = 407},
  [235] = {.lex_state = 407},
  [236] = {.lex_state = 407},
  [237] = {.lex_state = 407},
  [238] = {.lex_state = 407},
  [239] = {.lex_state = 407},
  [240] = {.lex_state = 407},
  [241] = {.lex_state = 407},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 407},
  [246] = {.lex_state = 406},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 407},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 407},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 407},
  [253] = {.lex_state = 407},
  [254] = {.lex_state = 407},
  [255] = {.lex_state = 407},
  [256] = {.lex_state = 407},
  [257] = {.lex_state = 407},
  [258] = {.lex_state = 407},
  [259] = {.lex_state = 407},
  [260] = {.lex_state = 6},
  [261] = {.lex_state = 406},
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
    [sym_protocol_version] = ACTIONS(1),
    [aux_sym__file_token_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym__file_pattern_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__file_pattern_token2] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(242),
    [sym_host_declaration] = STATE(238),
    [sym_parameter] = STATE(238),
    [sym__add_keys_to_agent] = STATE(236),
    [sym__address_family] = STATE(235),
    [sym__batch_mode] = STATE(234),
    [sym__bind_address] = STATE(233),
    [sym__bind_interface] = STATE(232),
    [sym__canonical_domains] = STATE(231),
    [sym__canonicalize_fallback_local] = STATE(230),
    [sym__canonicalize_hostname] = STATE(229),
    [sym__canonicalize_max_dots] = STATE(228),
    [sym__canonicalize_permitted_cnames] = STATE(227),
    [sym__ca_signature_algorithms] = STATE(226),
    [sym__certificate_file] = STATE(216),
    [sym__check_host_ip] = STATE(214),
    [sym__ciphers] = STATE(208),
    [sym__clear_all_forwardings] = STATE(207),
    [sym__compression] = STATE(204),
    [sym__connection_attempts] = STATE(203),
    [sym__connect_timeout] = STATE(198),
    [sym__control_master] = STATE(197),
    [sym__control_persist] = STATE(193),
    [sym__control_path] = STATE(190),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_config_token1] = ACTIONS(5),
    [aux_sym_host_declaration_token1] = ACTIONS(7),
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
    [sym_comment] = ACTIONS(51),
    [sym__space] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 49,
    ACTIONS(7), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__space,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym_config_token1,
    STATE(3), 1,
      aux_sym_config_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(238), 2,
      sym_host_declaration,
      sym_parameter,
  [149] = 49,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_config_token1,
    ACTIONS(64), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(67), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(70), 1,
      aux_sym__address_family_token1,
    ACTIONS(73), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(76), 1,
      aux_sym__bind_address_token1,
    ACTIONS(79), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(82), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(85), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(88), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(91), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(94), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(97), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(100), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(103), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(106), 1,
      aux_sym__ciphers_token1,
    ACTIONS(109), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(112), 1,
      aux_sym__compression_token1,
    ACTIONS(115), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(118), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(121), 1,
      aux_sym__control_master_token1,
    ACTIONS(124), 1,
      aux_sym__control_persist_token1,
    ACTIONS(127), 1,
      aux_sym__control_path_token1,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__space,
    STATE(3), 1,
      aux_sym_config_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(238), 2,
      sym_host_declaration,
      sym_parameter,
  [298] = 47,
    ACTIONS(7), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(136), 1,
      aux_sym_config_token1,
    ACTIONS(138), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__space,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(178), 2,
      sym_host_declaration,
      sym_parameter,
  [441] = 47,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__space,
    STATE(13), 1,
      aux_sym__declarations_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(210), 1,
      sym__declarations,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [583] = 47,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__space,
    STATE(13), 1,
      aux_sym__declarations_repeat1,
    STATE(176), 1,
      sym__declarations,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [725] = 47,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__space,
    STATE(13), 1,
      aux_sym__declarations_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(206), 1,
      sym__declarations,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [867] = 47,
    ACTIONS(146), 1,
      aux_sym_config_token1,
    ACTIONS(148), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(151), 1,
      aux_sym__address_family_token1,
    ACTIONS(154), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(157), 1,
      aux_sym__bind_address_token1,
    ACTIONS(160), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(163), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(166), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(169), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(172), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(175), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(178), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(181), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(184), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(187), 1,
      aux_sym__ciphers_token1,
    ACTIONS(190), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(193), 1,
      aux_sym__compression_token1,
    ACTIONS(196), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(199), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(202), 1,
      aux_sym__control_master_token1,
    ACTIONS(205), 1,
      aux_sym__control_persist_token1,
    ACTIONS(208), 1,
      aux_sym__control_path_token1,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym__space,
    STATE(8), 1,
      aux_sym__declarations_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [1009] = 47,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__space,
    STATE(13), 1,
      aux_sym__declarations_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(194), 1,
      sym__declarations,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [1151] = 47,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__space,
    STATE(13), 1,
      aux_sym__declarations_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(215), 1,
      sym__declarations,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [1293] = 47,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__space,
    STATE(13), 1,
      aux_sym__declarations_repeat1,
    STATE(188), 1,
      sym__declarations,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [1435] = 47,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__space,
    STATE(13), 1,
      aux_sym__declarations_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(196), 1,
      sym__declarations,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [1577] = 47,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__space,
    ACTIONS(217), 1,
      aux_sym_config_token1,
    STATE(8), 1,
      aux_sym__declarations_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [1719] = 47,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__space,
    STATE(13), 1,
      aux_sym__declarations_repeat1,
    STATE(190), 1,
      sym__control_path,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(205), 1,
      sym__declarations,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
    STATE(239), 1,
      sym_parameter,
  [1861] = 44,
    ACTIONS(9), 1,
      aux_sym__add_keys_to_agent_token1,
    ACTIONS(11), 1,
      aux_sym__address_family_token1,
    ACTIONS(13), 1,
      aux_sym__batch_mode_token1,
    ACTIONS(15), 1,
      aux_sym__bind_address_token1,
    ACTIONS(17), 1,
      aux_sym__bind_interface_token1,
    ACTIONS(19), 1,
      aux_sym__canonical_domains_token1,
    ACTIONS(21), 1,
      aux_sym__canonicalize_fallback_local_token1,
    ACTIONS(23), 1,
      aux_sym__canonicalize_hostname_token1,
    ACTIONS(25), 1,
      aux_sym__canonicalize_max_dots_token1,
    ACTIONS(27), 1,
      aux_sym__canonicalize_permitted_cnames_token1,
    ACTIONS(29), 1,
      aux_sym__ca_signature_algorithms_token1,
    ACTIONS(31), 1,
      aux_sym__certificate_file_token1,
    ACTIONS(33), 1,
      aux_sym__check_host_ip_token1,
    ACTIONS(35), 1,
      aux_sym__ciphers_token1,
    ACTIONS(37), 1,
      aux_sym__clear_all_forwardings_token1,
    ACTIONS(39), 1,
      aux_sym__compression_token1,
    ACTIONS(41), 1,
      aux_sym__connection_attempts_token1,
    ACTIONS(43), 1,
      aux_sym__connect_timeout_token1,
    ACTIONS(45), 1,
      aux_sym__control_master_token1,
    ACTIONS(47), 1,
      aux_sym__control_persist_token1,
    ACTIONS(49), 1,
      aux_sym__control_path_token1,
    ACTIONS(219), 1,
      sym_comment,
    STATE(190), 1,
      sym__control_path,
    STATE(192), 1,
      sym_parameter,
    STATE(193), 1,
      sym__control_persist,
    STATE(197), 1,
      sym__control_master,
    STATE(198), 1,
      sym__connect_timeout,
    STATE(203), 1,
      sym__connection_attempts,
    STATE(204), 1,
      sym__compression,
    STATE(207), 1,
      sym__clear_all_forwardings,
    STATE(208), 1,
      sym__ciphers,
    STATE(214), 1,
      sym__check_host_ip,
    STATE(216), 1,
      sym__certificate_file,
    STATE(226), 1,
      sym__ca_signature_algorithms,
    STATE(227), 1,
      sym__canonicalize_permitted_cnames,
    STATE(228), 1,
      sym__canonicalize_max_dots,
    STATE(229), 1,
      sym__canonicalize_hostname,
    STATE(230), 1,
      sym__canonicalize_fallback_local,
    STATE(231), 1,
      sym__canonical_domains,
    STATE(232), 1,
      sym__bind_interface,
    STATE(233), 1,
      sym__bind_address,
    STATE(234), 1,
      sym__batch_mode,
    STATE(235), 1,
      sym__address_family,
    STATE(236), 1,
      sym__add_keys_to_agent,
  [1994] = 1,
    ACTIONS(59), 26,
      ts_builtin_sym_end,
      aux_sym_config_token1,
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
      sym_comment,
      sym__space,
  [2023] = 1,
    ACTIONS(221), 26,
      ts_builtin_sym_end,
      aux_sym_config_token1,
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
      sym_comment,
      sym__space,
  [2052] = 1,
    ACTIONS(223), 26,
      ts_builtin_sym_end,
      aux_sym_config_token1,
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
      sym_comment,
      sym__space,
  [2081] = 1,
    ACTIONS(146), 24,
      aux_sym_config_token1,
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
      sym_comment,
      sym__space,
  [2108] = 1,
    ACTIONS(225), 24,
      aux_sym_config_token1,
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
      sym_comment,
      sym__space,
  [2135] = 1,
    ACTIONS(227), 24,
      aux_sym_config_token1,
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
      sym_comment,
      sym__space,
  [2162] = 3,
    ACTIONS(233), 1,
      anon_sym_EQ,
    ACTIONS(231), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(229), 10,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [2182] = 3,
    ACTIONS(235), 1,
      sym__space,
    ACTIONS(231), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(229), 10,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [2202] = 3,
    ACTIONS(241), 1,
      sym__space,
    ACTIONS(239), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(237), 10,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [2222] = 2,
    ACTIONS(245), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(243), 10,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [2239] = 2,
    ACTIONS(239), 2,
      anon_sym_inet,
      anon_sym_auto,
    ACTIONS(237), 10,
      anon_sym_ask,
      anon_sym_confirm,
      anon_sym_inet6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_autoask,
      sym_sig,
      anon_sym_yes,
      anon_sym_no,
      sym__number,
  [2256] = 6,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      aux_sym__file_pattern_token1,
    STATE(27), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(247), 2,
      aux_sym_config_token1,
      sym__space,
    STATE(48), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(249), 3,
      aux_sym__file_token_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2279] = 7,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(262), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(183), 1,
      sym__file_pattern_vars,
    STATE(48), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(258), 3,
      aux_sym__file_token_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2304] = 6,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(262), 1,
      aux_sym__file_pattern_token1,
    STATE(27), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(266), 2,
      aux_sym_config_token1,
      sym__space,
    STATE(48), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(258), 3,
      aux_sym__file_token_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2327] = 7,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(262), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(221), 1,
      sym__file_pattern_vars,
    STATE(48), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(258), 3,
      aux_sym__file_token_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2352] = 6,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym__file_pattern_token2,
    STATE(31), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(63), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(268), 3,
      aux_sym__file_token_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2374] = 6,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      aux_sym__file_pattern_token2,
    STATE(31), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(63), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(279), 3,
      aux_sym__file_token_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2396] = 7,
    ACTIONS(287), 1,
      anon_sym_none,
    ACTIONS(291), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__pattern_repeat1,
    STATE(145), 1,
      sym__pattern,
    STATE(147), 1,
      sym__cnames_map,
    ACTIONS(289), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2419] = 7,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      aux_sym_config_token1,
    ACTIONS(297), 1,
      anon_sym_BANG,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(200), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2442] = 7,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_BANG,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(303), 1,
      aux_sym_config_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(200), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2465] = 7,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_BANG,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(305), 1,
      aux_sym_config_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(200), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2488] = 7,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_BANG,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(307), 1,
      aux_sym_config_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(200), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2511] = 5,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      aux_sym__file_pattern_token2,
    STATE(32), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(63), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(279), 3,
      aux_sym__file_token_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2530] = 6,
    ACTIONS(311), 1,
      aux_sym_time_token1,
    ACTIONS(313), 1,
      aux_sym_time_token2,
    ACTIONS(315), 1,
      aux_sym_time_token3,
    ACTIONS(317), 1,
      aux_sym_time_token4,
    ACTIONS(319), 1,
      aux_sym_time_token5,
    ACTIONS(309), 2,
      aux_sym_config_token1,
      sym__space,
  [2550] = 6,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(321), 1,
      anon_sym_BANG,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(162), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2570] = 4,
    ACTIONS(327), 1,
      aux_sym__file_pattern_token1,
    STATE(44), 1,
      aux_sym__pattern_repeat1,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(323), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2586] = 3,
    ACTIONS(231), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(329), 1,
      sym__space,
    ACTIONS(229), 5,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2600] = 3,
    ACTIONS(231), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(331), 1,
      anon_sym_EQ,
    ACTIONS(229), 5,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2614] = 4,
    ACTIONS(338), 1,
      aux_sym__file_pattern_token1,
    STATE(44), 1,
      aux_sym__pattern_repeat1,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(333), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2630] = 4,
    ACTIONS(343), 1,
      anon_sym_confirm,
    ACTIONS(345), 1,
      sym__number,
    STATE(218), 2,
      sym__boolean,
      sym_time,
    ACTIONS(341), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [2646] = 6,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_BANG,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(200), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2666] = 3,
    ACTIONS(239), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(347), 1,
      sym__space,
    ACTIONS(237), 5,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2680] = 2,
    ACTIONS(351), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(349), 6,
      aux_sym_config_token1,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
  [2692] = 2,
    ACTIONS(355), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(353), 6,
      aux_sym_config_token1,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
  [2704] = 6,
    ACTIONS(291), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__pattern_repeat1,
    STATE(145), 1,
      sym__pattern,
    STATE(182), 1,
      sym__cnames_map,
    ACTIONS(289), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2724] = 2,
    ACTIONS(355), 1,
      aux_sym__file_pattern_token2,
    ACTIONS(353), 5,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2735] = 2,
    ACTIONS(239), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(237), 5,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2746] = 3,
    ACTIONS(231), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(357), 1,
      sym__space,
    ACTIONS(229), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2759] = 3,
    ACTIONS(231), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(359), 1,
      anon_sym_EQ,
    ACTIONS(229), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2772] = 5,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(217), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2789] = 5,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(222), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2806] = 5,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(153), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2823] = 5,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      aux_sym__file_pattern_token1,
    STATE(41), 1,
      aux_sym__pattern_repeat1,
    STATE(114), 1,
      sym__pattern,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2840] = 5,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(181), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2857] = 5,
    ACTIONS(291), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__pattern_repeat1,
    STATE(114), 1,
      sym__pattern,
    ACTIONS(289), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2874] = 5,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      aux_sym__file_pattern_token1,
    STATE(41), 1,
      aux_sym__pattern_repeat1,
    STATE(104), 1,
      sym__pattern,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2891] = 2,
    ACTIONS(245), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(243), 5,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2902] = 2,
    ACTIONS(363), 1,
      aux_sym__file_pattern_token2,
    ACTIONS(361), 5,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2913] = 3,
    ACTIONS(239), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(365), 1,
      sym__space,
    ACTIONS(237), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2926] = 3,
    ACTIONS(231), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(367), 1,
      anon_sym_EQ,
    ACTIONS(229), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2939] = 3,
    ACTIONS(231), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(369), 1,
      sym__space,
    ACTIONS(229), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [2952] = 5,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      aux_sym__file_pattern_token1,
    STATE(41), 1,
      aux_sym__pattern_repeat1,
    STATE(106), 1,
      sym__pattern,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2969] = 2,
    ACTIONS(373), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(371), 5,
      aux_sym_config_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
  [2980] = 5,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(195), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2997] = 3,
    ACTIONS(377), 1,
      anon_sym_auto,
    STATE(199), 1,
      sym__boolean,
    ACTIONS(375), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [3010] = 4,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    STATE(75), 1,
      aux_sym__pattern_repeat1,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(323), 2,
      aux_sym_config_token1,
      sym__space,
  [3025] = 4,
    ACTIONS(291), 1,
      aux_sym__file_pattern_token1,
    STATE(73), 1,
      aux_sym__pattern_repeat1,
    ACTIONS(289), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [3040] = 4,
    ACTIONS(382), 1,
      aux_sym__file_pattern_token1,
    STATE(73), 1,
      aux_sym__pattern_repeat1,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(379), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3055] = 5,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym__file_pattern_token1,
    STATE(71), 1,
      aux_sym__pattern_repeat1,
    STATE(124), 1,
      sym__pattern,
    ACTIONS(299), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3072] = 4,
    ACTIONS(388), 1,
      aux_sym__file_pattern_token1,
    STATE(75), 1,
      aux_sym__pattern_repeat1,
    ACTIONS(333), 2,
      aux_sym_config_token1,
      sym__space,
    ACTIONS(385), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3087] = 3,
    ACTIONS(239), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(391), 1,
      sym__space,
    ACTIONS(237), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3100] = 2,
    ACTIONS(239), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(237), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3110] = 3,
    ACTIONS(231), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(393), 1,
      sym__space,
    ACTIONS(229), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3122] = 2,
    ACTIONS(245), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(243), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3132] = 2,
    ACTIONS(373), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(371), 4,
      aux_sym_config_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
  [3142] = 2,
    ACTIONS(395), 1,
      sym__space,
    ACTIONS(237), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
  [3152] = 3,
    ACTIONS(231), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(229), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3164] = 3,
    ACTIONS(345), 1,
      sym__number,
    ACTIONS(399), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(180), 2,
      sym__boolean,
      sym_time,
  [3176] = 4,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym__file_pattern_token2,
    STATE(90), 1,
      aux_sym__pattern_repeat2,
    ACTIONS(401), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3190] = 2,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(229), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
  [3200] = 2,
    ACTIONS(409), 1,
      sym__space,
    ACTIONS(229), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
  [3210] = 3,
    ACTIONS(239), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(411), 1,
      sym__space,
    ACTIONS(237), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3222] = 2,
    ACTIONS(373), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3232] = 2,
    ACTIONS(245), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(243), 4,
      anon_sym_none,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3242] = 4,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym__file_pattern_token2,
    STATE(90), 1,
      aux_sym__pattern_repeat2,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3256] = 2,
    ACTIONS(239), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(237), 4,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3266] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(421), 2,
      aux_sym_config_token1,
      sym__space,
  [3277] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(426), 2,
      aux_sym_config_token1,
      sym__space,
  [3288] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(430), 2,
      aux_sym_config_token1,
      sym__space,
  [3299] = 2,
    ACTIONS(434), 1,
      sym_cipher,
    ACTIONS(432), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3308] = 3,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(436), 2,
      aux_sym_config_token1,
      sym__space,
  [3319] = 3,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(436), 2,
      aux_sym_config_token1,
      sym__space,
  [3330] = 4,
    ACTIONS(440), 1,
      aux_sym_time_token2,
    ACTIONS(442), 1,
      aux_sym_time_token3,
    ACTIONS(444), 1,
      aux_sym_time_token4,
    ACTIONS(446), 1,
      aux_sym_time_token5,
  [3343] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(448), 2,
      aux_sym_config_token1,
      sym__space,
  [3354] = 2,
    ACTIONS(245), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(243), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3363] = 3,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(450), 2,
      aux_sym_config_token1,
      sym__space,
  [3374] = 3,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(454), 2,
      aux_sym_config_token1,
      sym__space,
  [3385] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(426), 2,
      aux_sym_config_token1,
      sym__space,
  [3396] = 3,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(456), 2,
      aux_sym_config_token1,
      sym__space,
  [3407] = 1,
    ACTIONS(458), 4,
      aux_sym_config_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
  [3414] = 3,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(460), 2,
      aux_sym_config_token1,
      sym__space,
  [3425] = 3,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(462), 2,
      aux_sym_config_token1,
      sym__space,
  [3436] = 3,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(464), 2,
      aux_sym_config_token1,
      sym__space,
  [3447] = 2,
    ACTIONS(239), 1,
      aux_sym__file_pattern_token1,
    ACTIONS(237), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3456] = 3,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(469), 2,
      aux_sym_config_token1,
      sym__space,
  [3467] = 2,
    ACTIONS(473), 1,
      aux_sym__file_pattern_token2,
    ACTIONS(471), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
  [3476] = 4,
    ACTIONS(475), 1,
      aux_sym_config_token1,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(184), 1,
      sym__sep,
  [3489] = 1,
    ACTIONS(237), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
  [3496] = 1,
    ACTIONS(464), 4,
      aux_sym_config_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
  [3503] = 1,
    ACTIONS(243), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_cipher,
  [3510] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(481), 2,
      aux_sym_config_token1,
      sym__space,
  [3521] = 3,
    ACTIONS(405), 1,
      aux_sym__file_pattern_token2,
    STATE(84), 1,
      aux_sym__pattern_repeat2,
    ACTIONS(401), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3532] = 2,
    ACTIONS(488), 1,
      sym__number,
    ACTIONS(486), 2,
      aux_sym_config_token1,
      sym__space,
  [3540] = 2,
    STATE(241), 1,
      sym__boolean,
    ACTIONS(490), 2,
      anon_sym_yes,
      anon_sym_no,
  [3548] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(45), 1,
      sym__sep,
  [3558] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(175), 1,
      sym__sep,
  [3568] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(169), 1,
      sym__sep,
  [3578] = 3,
    ACTIONS(492), 1,
      anon_sym_EQ,
    ACTIONS(494), 1,
      sym__space,
    STATE(55), 1,
      sym__sep,
  [3588] = 3,
    ACTIONS(496), 1,
      aux_sym_config_token1,
    ACTIONS(498), 1,
      sym__space,
    STATE(151), 1,
      aux_sym_host_declaration_repeat1,
  [3598] = 3,
    ACTIONS(500), 1,
      aux_sym_config_token1,
    ACTIONS(502), 1,
      sym__space,
    STATE(163), 1,
      aux_sym_host_declaration_repeat1,
  [3608] = 3,
    ACTIONS(492), 1,
      anon_sym_EQ,
    ACTIONS(494), 1,
      sym__space,
    STATE(56), 1,
      sym__sep,
  [3618] = 2,
    ACTIONS(504), 1,
      sym__number,
    ACTIONS(486), 2,
      aux_sym_config_token1,
      sym__space,
  [3626] = 2,
    ACTIONS(506), 1,
      sym__number,
    ACTIONS(486), 2,
      aux_sym_config_token1,
      sym__space,
  [3634] = 2,
    ACTIONS(508), 1,
      sym__number,
    ACTIONS(486), 2,
      aux_sym_config_token1,
      sym__space,
  [3642] = 3,
    ACTIONS(492), 1,
      anon_sym_EQ,
    ACTIONS(494), 1,
      sym__space,
    STATE(57), 1,
      sym__sep,
  [3652] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(173), 1,
      sym__sep,
  [3662] = 3,
    ACTIONS(510), 1,
      aux_sym_config_token1,
    ACTIONS(512), 1,
      sym__space,
    STATE(170), 1,
      aux_sym__canonical_domains_repeat1,
  [3672] = 3,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      sym__space,
    STATE(40), 1,
      sym__sep,
  [3682] = 3,
    ACTIONS(518), 1,
      aux_sym_config_token1,
    ACTIONS(520), 1,
      sym__space,
    STATE(172), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3692] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(119), 1,
      sym__sep,
  [3702] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(254), 1,
      sym__sep,
  [3712] = 3,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym__cnames_map_repeat1,
  [3722] = 3,
    ACTIONS(526), 1,
      anon_sym_EQ,
    ACTIONS(528), 1,
      sym__space,
    STATE(33), 1,
      sym__sep,
  [3732] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(171), 1,
      sym__sep,
  [3742] = 3,
    ACTIONS(530), 1,
      anon_sym_EQ,
    ACTIONS(532), 1,
      sym__space,
    STATE(30), 1,
      sym__sep,
  [3752] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(168), 1,
      sym__sep,
  [3762] = 3,
    ACTIONS(534), 1,
      anon_sym_EQ,
    ACTIONS(536), 1,
      sym__space,
    STATE(95), 1,
      sym__sep,
  [3772] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(167), 1,
      sym__sep,
  [3782] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(164), 1,
      sym__sep,
  [3792] = 3,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_COLON,
    STATE(137), 1,
      aux_sym__cnames_map_repeat1,
  [3802] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(255), 1,
      sym__sep,
  [3812] = 3,
    ACTIONS(520), 1,
      sym__space,
    ACTIONS(540), 1,
      aux_sym_config_token1,
    STATE(134), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3822] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(256), 1,
      sym__sep,
  [3832] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(70), 1,
      sym__sep,
  [3842] = 3,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      sym__space,
    STATE(83), 1,
      sym__sep,
  [3852] = 3,
    ACTIONS(542), 1,
      aux_sym_config_token1,
    ACTIONS(544), 1,
      sym__space,
    STATE(163), 1,
      aux_sym_host_declaration_repeat1,
  [3862] = 3,
    ACTIONS(530), 1,
      anon_sym_EQ,
    ACTIONS(532), 1,
      sym__space,
    STATE(28), 1,
      sym__sep,
  [3872] = 3,
    ACTIONS(512), 1,
      sym__space,
    ACTIONS(546), 1,
      aux_sym_config_token1,
    STATE(132), 1,
      aux_sym__canonical_domains_repeat1,
  [3882] = 2,
    ACTIONS(550), 1,
      sym__number,
    ACTIONS(548), 2,
      aux_sym_config_token1,
      sym__space,
  [3890] = 2,
    ACTIONS(554), 1,
      sym__number,
    ACTIONS(552), 2,
      aux_sym_config_token1,
      sym__space,
  [3898] = 2,
    ACTIONS(556), 1,
      sym__number,
    ACTIONS(552), 2,
      aux_sym_config_token1,
      sym__space,
  [3906] = 3,
    ACTIONS(558), 1,
      aux_sym_time_token3,
    ACTIONS(560), 1,
      aux_sym_time_token4,
    ACTIONS(562), 1,
      aux_sym_time_token5,
  [3916] = 2,
    ACTIONS(566), 1,
      sym__number,
    ACTIONS(564), 2,
      aux_sym_config_token1,
      sym__space,
  [3924] = 2,
    ACTIONS(568), 1,
      sym__number,
    ACTIONS(564), 2,
      aux_sym_config_token1,
      sym__space,
  [3932] = 2,
    ACTIONS(570), 1,
      sym__number,
    ACTIONS(564), 2,
      aux_sym_config_token1,
      sym__space,
  [3940] = 3,
    ACTIONS(464), 1,
      anon_sym_COLON,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__cnames_map_repeat1,
  [3950] = 3,
    ACTIONS(575), 1,
      aux_sym_config_token1,
    ACTIONS(577), 1,
      sym__space,
    STATE(125), 1,
      aux_sym_host_declaration_repeat1,
  [3960] = 3,
    ACTIONS(579), 1,
      aux_sym_config_token1,
    ACTIONS(581), 1,
      sym__space,
    STATE(163), 1,
      aux_sym_host_declaration_repeat1,
  [3970] = 2,
    STATE(191), 1,
      sym__boolean,
    ACTIONS(584), 2,
      anon_sym_yes,
      anon_sym_no,
  [3978] = 1,
    ACTIONS(421), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3984] = 3,
    ACTIONS(442), 1,
      aux_sym_time_token3,
    ACTIONS(444), 1,
      aux_sym_time_token4,
    ACTIONS(446), 1,
      aux_sym_time_token5,
  [3994] = 2,
    STATE(209), 1,
      sym__boolean,
    ACTIONS(586), 2,
      anon_sym_yes,
      anon_sym_no,
  [4002] = 2,
    STATE(213), 1,
      sym__boolean,
    ACTIONS(588), 2,
      anon_sym_yes,
      anon_sym_no,
  [4010] = 2,
    STATE(211), 1,
      sym__boolean,
    ACTIONS(590), 2,
      anon_sym_yes,
      anon_sym_no,
  [4018] = 3,
    ACTIONS(592), 1,
      aux_sym_config_token1,
    ACTIONS(594), 1,
      sym__space,
    STATE(170), 1,
      aux_sym__canonical_domains_repeat1,
  [4028] = 2,
    ACTIONS(599), 1,
      sym_sig,
    ACTIONS(597), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4036] = 3,
    ACTIONS(601), 1,
      aux_sym_config_token1,
    ACTIONS(603), 1,
      sym__space,
    STATE(172), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4046] = 2,
    STATE(240), 1,
      sym__boolean,
    ACTIONS(606), 2,
      anon_sym_yes,
      anon_sym_no,
  [4054] = 1,
    ACTIONS(481), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [4060] = 2,
    ACTIONS(608), 1,
      anon_sym_inet,
    ACTIONS(610), 1,
      anon_sym_inet6,
  [4067] = 1,
    ACTIONS(612), 2,
      aux_sym_config_token1,
      sym__space,
  [4072] = 1,
    ACTIONS(614), 2,
      aux_sym_config_token1,
      sym__space,
  [4077] = 2,
    ACTIONS(616), 1,
      aux_sym_config_token1,
    ACTIONS(618), 1,
      sym__space,
  [4084] = 2,
    ACTIONS(444), 1,
      aux_sym_time_token4,
    ACTIONS(446), 1,
      aux_sym_time_token5,
  [4091] = 1,
    ACTIONS(620), 2,
      aux_sym_config_token1,
      sym__space,
  [4096] = 1,
    ACTIONS(622), 2,
      aux_sym_config_token1,
      sym__space,
  [4101] = 1,
    ACTIONS(624), 2,
      aux_sym_config_token1,
      sym__space,
  [4106] = 1,
    ACTIONS(626), 2,
      aux_sym_config_token1,
      sym__space,
  [4111] = 2,
    ACTIONS(345), 1,
      sym__number,
    STATE(177), 1,
      sym_time,
  [4118] = 1,
    ACTIONS(486), 2,
      aux_sym_config_token1,
      sym__space,
  [4123] = 1,
    ACTIONS(628), 2,
      aux_sym_config_token1,
      sym__space,
  [4128] = 1,
    ACTIONS(630), 2,
      aux_sym_config_token1,
      sym__space,
  [4133] = 1,
    ACTIONS(632), 2,
      aux_sym_config_token1,
      sym__space,
  [4138] = 1,
    ACTIONS(634), 2,
      aux_sym_config_token1,
      sym__space,
  [4143] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4148] = 1,
    ACTIONS(638), 2,
      aux_sym_config_token1,
      sym__space,
  [4153] = 2,
    ACTIONS(640), 1,
      aux_sym_config_token1,
    ACTIONS(642), 1,
      sym__space,
  [4160] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4165] = 1,
    ACTIONS(644), 2,
      aux_sym_config_token1,
      sym__space,
  [4170] = 1,
    ACTIONS(646), 2,
      aux_sym_config_token1,
      sym__space,
  [4175] = 1,
    ACTIONS(648), 2,
      aux_sym_config_token1,
      sym__space,
  [4180] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4185] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4190] = 1,
    ACTIONS(650), 2,
      aux_sym_config_token1,
      sym__space,
  [4195] = 1,
    ACTIONS(652), 2,
      aux_sym_config_token1,
      sym__space,
  [4200] = 1,
    ACTIONS(654), 2,
      aux_sym_config_token1,
      sym__space,
  [4205] = 1,
    ACTIONS(564), 2,
      aux_sym_config_token1,
      sym__space,
  [4210] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4215] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4220] = 1,
    ACTIONS(656), 2,
      aux_sym_config_token1,
      sym__space,
  [4225] = 1,
    ACTIONS(658), 2,
      aux_sym_config_token1,
      sym__space,
  [4230] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4235] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4240] = 1,
    ACTIONS(660), 2,
      aux_sym_config_token1,
      sym__space,
  [4245] = 1,
    ACTIONS(662), 2,
      aux_sym_config_token1,
      sym__space,
  [4250] = 1,
    ACTIONS(664), 2,
      aux_sym_config_token1,
      sym__space,
  [4255] = 2,
    ACTIONS(560), 1,
      aux_sym_time_token4,
    ACTIONS(562), 1,
      aux_sym_time_token5,
  [4262] = 1,
    ACTIONS(666), 2,
      aux_sym_config_token1,
      sym__space,
  [4267] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4272] = 1,
    ACTIONS(668), 2,
      aux_sym_config_token1,
      sym__space,
  [4277] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4282] = 1,
    ACTIONS(670), 2,
      aux_sym_config_token1,
      sym__space,
  [4287] = 1,
    ACTIONS(475), 2,
      aux_sym_config_token1,
      sym__space,
  [4292] = 1,
    ACTIONS(552), 2,
      aux_sym_config_token1,
      sym__space,
  [4297] = 2,
    ACTIONS(672), 1,
      aux_sym_time_token4,
    ACTIONS(674), 1,
      aux_sym_time_token5,
  [4304] = 1,
    ACTIONS(676), 2,
      aux_sym_config_token1,
      sym__space,
  [4309] = 1,
    ACTIONS(678), 2,
      aux_sym_config_token1,
      sym__space,
  [4314] = 1,
    ACTIONS(548), 2,
      aux_sym_config_token1,
      sym__space,
  [4319] = 1,
    ACTIONS(680), 2,
      aux_sym_config_token1,
      sym__space,
  [4324] = 1,
    ACTIONS(682), 2,
      aux_sym_config_token1,
      sym__space,
  [4329] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4334] = 1,
    ACTIONS(684), 2,
      aux_sym_config_token1,
      sym__space,
  [4339] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4344] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4349] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4354] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4359] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4364] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4369] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4374] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4379] = 1,
    ACTIONS(636), 2,
      aux_sym_config_token1,
      sym__space,
  [4384] = 1,
    ACTIONS(686), 2,
      aux_sym_config_token1,
      sym__space,
  [4389] = 2,
    ACTIONS(136), 1,
      aux_sym_config_token1,
    ACTIONS(140), 1,
      sym__space,
  [4396] = 2,
    ACTIONS(688), 1,
      aux_sym_config_token1,
    ACTIONS(690), 1,
      sym__space,
  [4403] = 1,
    ACTIONS(692), 2,
      aux_sym_config_token1,
      sym__space,
  [4408] = 1,
    ACTIONS(694), 2,
      aux_sym_config_token1,
      sym__space,
  [4413] = 1,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
  [4417] = 1,
    ACTIONS(698), 1,
      aux_sym_time_token5,
  [4421] = 1,
    ACTIONS(700), 1,
      sym_cipher,
  [4425] = 1,
    ACTIONS(702), 1,
      sym_sig,
  [4429] = 1,
    ACTIONS(704), 1,
      aux_sym_variable_token1,
  [4433] = 1,
    ACTIONS(674), 1,
      aux_sym_time_token5,
  [4437] = 1,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
  [4441] = 1,
    ACTIONS(562), 1,
      aux_sym_time_token5,
  [4445] = 1,
    ACTIONS(708), 1,
      sym_sig,
  [4449] = 1,
    ACTIONS(710), 1,
      sym_cipher,
  [4453] = 1,
    ACTIONS(712), 1,
      aux_sym_config_token1,
  [4457] = 1,
    ACTIONS(640), 1,
      aux_sym_config_token1,
  [4461] = 1,
    ACTIONS(714), 1,
      sym__number,
  [4465] = 1,
    ACTIONS(716), 1,
      sym__number,
  [4469] = 1,
    ACTIONS(718), 1,
      sym__number,
  [4473] = 1,
    ACTIONS(720), 1,
      aux_sym_config_token1,
  [4477] = 1,
    ACTIONS(616), 1,
      aux_sym_config_token1,
  [4481] = 1,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
  [4485] = 1,
    ACTIONS(446), 1,
      aux_sym_time_token5,
  [4489] = 1,
    ACTIONS(724), 1,
      aux_sym_variable_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 149,
  [SMALL_STATE(4)] = 298,
  [SMALL_STATE(5)] = 441,
  [SMALL_STATE(6)] = 583,
  [SMALL_STATE(7)] = 725,
  [SMALL_STATE(8)] = 867,
  [SMALL_STATE(9)] = 1009,
  [SMALL_STATE(10)] = 1151,
  [SMALL_STATE(11)] = 1293,
  [SMALL_STATE(12)] = 1435,
  [SMALL_STATE(13)] = 1577,
  [SMALL_STATE(14)] = 1719,
  [SMALL_STATE(15)] = 1861,
  [SMALL_STATE(16)] = 1994,
  [SMALL_STATE(17)] = 2023,
  [SMALL_STATE(18)] = 2052,
  [SMALL_STATE(19)] = 2081,
  [SMALL_STATE(20)] = 2108,
  [SMALL_STATE(21)] = 2135,
  [SMALL_STATE(22)] = 2162,
  [SMALL_STATE(23)] = 2182,
  [SMALL_STATE(24)] = 2202,
  [SMALL_STATE(25)] = 2222,
  [SMALL_STATE(26)] = 2239,
  [SMALL_STATE(27)] = 2256,
  [SMALL_STATE(28)] = 2279,
  [SMALL_STATE(29)] = 2304,
  [SMALL_STATE(30)] = 2327,
  [SMALL_STATE(31)] = 2352,
  [SMALL_STATE(32)] = 2374,
  [SMALL_STATE(33)] = 2396,
  [SMALL_STATE(34)] = 2419,
  [SMALL_STATE(35)] = 2442,
  [SMALL_STATE(36)] = 2465,
  [SMALL_STATE(37)] = 2488,
  [SMALL_STATE(38)] = 2511,
  [SMALL_STATE(39)] = 2530,
  [SMALL_STATE(40)] = 2550,
  [SMALL_STATE(41)] = 2570,
  [SMALL_STATE(42)] = 2586,
  [SMALL_STATE(43)] = 2600,
  [SMALL_STATE(44)] = 2614,
  [SMALL_STATE(45)] = 2630,
  [SMALL_STATE(46)] = 2646,
  [SMALL_STATE(47)] = 2666,
  [SMALL_STATE(48)] = 2680,
  [SMALL_STATE(49)] = 2692,
  [SMALL_STATE(50)] = 2704,
  [SMALL_STATE(51)] = 2724,
  [SMALL_STATE(52)] = 2735,
  [SMALL_STATE(53)] = 2746,
  [SMALL_STATE(54)] = 2759,
  [SMALL_STATE(55)] = 2772,
  [SMALL_STATE(56)] = 2789,
  [SMALL_STATE(57)] = 2806,
  [SMALL_STATE(58)] = 2823,
  [SMALL_STATE(59)] = 2840,
  [SMALL_STATE(60)] = 2857,
  [SMALL_STATE(61)] = 2874,
  [SMALL_STATE(62)] = 2891,
  [SMALL_STATE(63)] = 2902,
  [SMALL_STATE(64)] = 2913,
  [SMALL_STATE(65)] = 2926,
  [SMALL_STATE(66)] = 2939,
  [SMALL_STATE(67)] = 2952,
  [SMALL_STATE(68)] = 2969,
  [SMALL_STATE(69)] = 2980,
  [SMALL_STATE(70)] = 2997,
  [SMALL_STATE(71)] = 3010,
  [SMALL_STATE(72)] = 3025,
  [SMALL_STATE(73)] = 3040,
  [SMALL_STATE(74)] = 3055,
  [SMALL_STATE(75)] = 3072,
  [SMALL_STATE(76)] = 3087,
  [SMALL_STATE(77)] = 3100,
  [SMALL_STATE(78)] = 3110,
  [SMALL_STATE(79)] = 3122,
  [SMALL_STATE(80)] = 3132,
  [SMALL_STATE(81)] = 3142,
  [SMALL_STATE(82)] = 3152,
  [SMALL_STATE(83)] = 3164,
  [SMALL_STATE(84)] = 3176,
  [SMALL_STATE(85)] = 3190,
  [SMALL_STATE(86)] = 3200,
  [SMALL_STATE(87)] = 3210,
  [SMALL_STATE(88)] = 3222,
  [SMALL_STATE(89)] = 3232,
  [SMALL_STATE(90)] = 3242,
  [SMALL_STATE(91)] = 3256,
  [SMALL_STATE(92)] = 3266,
  [SMALL_STATE(93)] = 3277,
  [SMALL_STATE(94)] = 3288,
  [SMALL_STATE(95)] = 3299,
  [SMALL_STATE(96)] = 3308,
  [SMALL_STATE(97)] = 3319,
  [SMALL_STATE(98)] = 3330,
  [SMALL_STATE(99)] = 3343,
  [SMALL_STATE(100)] = 3354,
  [SMALL_STATE(101)] = 3363,
  [SMALL_STATE(102)] = 3374,
  [SMALL_STATE(103)] = 3385,
  [SMALL_STATE(104)] = 3396,
  [SMALL_STATE(105)] = 3407,
  [SMALL_STATE(106)] = 3414,
  [SMALL_STATE(107)] = 3425,
  [SMALL_STATE(108)] = 3436,
  [SMALL_STATE(109)] = 3447,
  [SMALL_STATE(110)] = 3456,
  [SMALL_STATE(111)] = 3467,
  [SMALL_STATE(112)] = 3476,
  [SMALL_STATE(113)] = 3489,
  [SMALL_STATE(114)] = 3496,
  [SMALL_STATE(115)] = 3503,
  [SMALL_STATE(116)] = 3510,
  [SMALL_STATE(117)] = 3521,
  [SMALL_STATE(118)] = 3532,
  [SMALL_STATE(119)] = 3540,
  [SMALL_STATE(120)] = 3548,
  [SMALL_STATE(121)] = 3558,
  [SMALL_STATE(122)] = 3568,
  [SMALL_STATE(123)] = 3578,
  [SMALL_STATE(124)] = 3588,
  [SMALL_STATE(125)] = 3598,
  [SMALL_STATE(126)] = 3608,
  [SMALL_STATE(127)] = 3618,
  [SMALL_STATE(128)] = 3626,
  [SMALL_STATE(129)] = 3634,
  [SMALL_STATE(130)] = 3642,
  [SMALL_STATE(131)] = 3652,
  [SMALL_STATE(132)] = 3662,
  [SMALL_STATE(133)] = 3672,
  [SMALL_STATE(134)] = 3682,
  [SMALL_STATE(135)] = 3692,
  [SMALL_STATE(136)] = 3702,
  [SMALL_STATE(137)] = 3712,
  [SMALL_STATE(138)] = 3722,
  [SMALL_STATE(139)] = 3732,
  [SMALL_STATE(140)] = 3742,
  [SMALL_STATE(141)] = 3752,
  [SMALL_STATE(142)] = 3762,
  [SMALL_STATE(143)] = 3772,
  [SMALL_STATE(144)] = 3782,
  [SMALL_STATE(145)] = 3792,
  [SMALL_STATE(146)] = 3802,
  [SMALL_STATE(147)] = 3812,
  [SMALL_STATE(148)] = 3822,
  [SMALL_STATE(149)] = 3832,
  [SMALL_STATE(150)] = 3842,
  [SMALL_STATE(151)] = 3852,
  [SMALL_STATE(152)] = 3862,
  [SMALL_STATE(153)] = 3872,
  [SMALL_STATE(154)] = 3882,
  [SMALL_STATE(155)] = 3890,
  [SMALL_STATE(156)] = 3898,
  [SMALL_STATE(157)] = 3906,
  [SMALL_STATE(158)] = 3916,
  [SMALL_STATE(159)] = 3924,
  [SMALL_STATE(160)] = 3932,
  [SMALL_STATE(161)] = 3940,
  [SMALL_STATE(162)] = 3950,
  [SMALL_STATE(163)] = 3960,
  [SMALL_STATE(164)] = 3970,
  [SMALL_STATE(165)] = 3978,
  [SMALL_STATE(166)] = 3984,
  [SMALL_STATE(167)] = 3994,
  [SMALL_STATE(168)] = 4002,
  [SMALL_STATE(169)] = 4010,
  [SMALL_STATE(170)] = 4018,
  [SMALL_STATE(171)] = 4028,
  [SMALL_STATE(172)] = 4036,
  [SMALL_STATE(173)] = 4046,
  [SMALL_STATE(174)] = 4054,
  [SMALL_STATE(175)] = 4060,
  [SMALL_STATE(176)] = 4067,
  [SMALL_STATE(177)] = 4072,
  [SMALL_STATE(178)] = 4077,
  [SMALL_STATE(179)] = 4084,
  [SMALL_STATE(180)] = 4091,
  [SMALL_STATE(181)] = 4096,
  [SMALL_STATE(182)] = 4101,
  [SMALL_STATE(183)] = 4106,
  [SMALL_STATE(184)] = 4111,
  [SMALL_STATE(185)] = 4118,
  [SMALL_STATE(186)] = 4123,
  [SMALL_STATE(187)] = 4128,
  [SMALL_STATE(188)] = 4133,
  [SMALL_STATE(189)] = 4138,
  [SMALL_STATE(190)] = 4143,
  [SMALL_STATE(191)] = 4148,
  [SMALL_STATE(192)] = 4153,
  [SMALL_STATE(193)] = 4160,
  [SMALL_STATE(194)] = 4165,
  [SMALL_STATE(195)] = 4170,
  [SMALL_STATE(196)] = 4175,
  [SMALL_STATE(197)] = 4180,
  [SMALL_STATE(198)] = 4185,
  [SMALL_STATE(199)] = 4190,
  [SMALL_STATE(200)] = 4195,
  [SMALL_STATE(201)] = 4200,
  [SMALL_STATE(202)] = 4205,
  [SMALL_STATE(203)] = 4210,
  [SMALL_STATE(204)] = 4215,
  [SMALL_STATE(205)] = 4220,
  [SMALL_STATE(206)] = 4225,
  [SMALL_STATE(207)] = 4230,
  [SMALL_STATE(208)] = 4235,
  [SMALL_STATE(209)] = 4240,
  [SMALL_STATE(210)] = 4245,
  [SMALL_STATE(211)] = 4250,
  [SMALL_STATE(212)] = 4255,
  [SMALL_STATE(213)] = 4262,
  [SMALL_STATE(214)] = 4267,
  [SMALL_STATE(215)] = 4272,
  [SMALL_STATE(216)] = 4277,
  [SMALL_STATE(217)] = 4282,
  [SMALL_STATE(218)] = 4287,
  [SMALL_STATE(219)] = 4292,
  [SMALL_STATE(220)] = 4297,
  [SMALL_STATE(221)] = 4304,
  [SMALL_STATE(222)] = 4309,
  [SMALL_STATE(223)] = 4314,
  [SMALL_STATE(224)] = 4319,
  [SMALL_STATE(225)] = 4324,
  [SMALL_STATE(226)] = 4329,
  [SMALL_STATE(227)] = 4334,
  [SMALL_STATE(228)] = 4339,
  [SMALL_STATE(229)] = 4344,
  [SMALL_STATE(230)] = 4349,
  [SMALL_STATE(231)] = 4354,
  [SMALL_STATE(232)] = 4359,
  [SMALL_STATE(233)] = 4364,
  [SMALL_STATE(234)] = 4369,
  [SMALL_STATE(235)] = 4374,
  [SMALL_STATE(236)] = 4379,
  [SMALL_STATE(237)] = 4384,
  [SMALL_STATE(238)] = 4389,
  [SMALL_STATE(239)] = 4396,
  [SMALL_STATE(240)] = 4403,
  [SMALL_STATE(241)] = 4408,
  [SMALL_STATE(242)] = 4413,
  [SMALL_STATE(243)] = 4417,
  [SMALL_STATE(244)] = 4421,
  [SMALL_STATE(245)] = 4425,
  [SMALL_STATE(246)] = 4429,
  [SMALL_STATE(247)] = 4433,
  [SMALL_STATE(248)] = 4437,
  [SMALL_STATE(249)] = 4441,
  [SMALL_STATE(250)] = 4445,
  [SMALL_STATE(251)] = 4449,
  [SMALL_STATE(252)] = 4453,
  [SMALL_STATE(253)] = 4457,
  [SMALL_STATE(254)] = 4461,
  [SMALL_STATE(255)] = 4465,
  [SMALL_STATE(256)] = 4469,
  [SMALL_STATE(257)] = 4473,
  [SMALL_STATE(258)] = 4477,
  [SMALL_STATE(259)] = 4481,
  [SMALL_STATE(260)] = 4485,
  [SMALL_STATE(261)] = 4489,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(133),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(120),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(121),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(122),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(123),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(126),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(130),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(131),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(135),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(136),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(138),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(139),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(140),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(141),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(142),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(143),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(144),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(146),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(148),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(149),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(150),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(152),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(238),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(120),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(121),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(122),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(123),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(126),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(130),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(131),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(135),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(136),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(138),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(139),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(140),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(141),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(142),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(143),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(144),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(146),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(148),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(149),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(150),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(152),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(239),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(15),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sep, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sep, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sep, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sep, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sep, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sep, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(48),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(246),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(48),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 3),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(63),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(261),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(63),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(68),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(68),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 18),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 18),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(88),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(88),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(80),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(80),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat2, 2), SHIFT_REPEAT(111),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern_repeat2, 2),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat2, 2), SHIFT_REPEAT(111),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(250),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 10),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 14),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 10),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 20),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 23),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 17),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, .production_id = 11),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 21),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(58),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 14),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern_repeat2, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern_repeat2, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(244),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 8),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 9),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 7),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(60),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 13),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 13), SHIFT_REPEAT(46),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 13),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 13), SHIFT_REPEAT(59),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 16),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 16), SHIFT_REPEAT(50),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 14),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 12),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 15),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 11),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 5),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 10),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 19),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 8),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 12),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 10),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 22),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 8),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 22),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 6),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 5),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 4),
  [696] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
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
