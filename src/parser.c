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
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_config_token1 = 1,
  sym_cipher = 2,
  sym_cipher_auth = 3,
  sym_compression = 4,
  sym_kex = 5,
  sym_key = 6,
  sym_key_cert = 7,
  sym_key_plain = 8,
  sym_key_sig = 9,
  sym_mac = 10,
  sym_protocol_version = 11,
  sym_sig = 12,
  aux_sym__file_token_token1 = 13,
  aux_sym__hosts_token_token1 = 14,
  aux_sym__hostname_token_token1 = 15,
  aux_sym__proxy_token_token1 = 16,
  aux_sym__token_token1 = 17,
  anon_sym_DOLLAR_LBRACE = 18,
  aux_sym_variable_token1 = 19,
  anon_sym_RBRACE = 20,
  sym_comment = 21,
  sym__space = 22,
  sym_config = 23,
  aux_sym_config_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_config_token1] = "config_token1",
  [sym_cipher] = "cipher",
  [sym_cipher_auth] = "cipher_auth",
  [sym_compression] = "compression",
  [sym_kex] = "kex",
  [sym_key] = "key",
  [sym_key_cert] = "key_cert",
  [sym_key_plain] = "key_plain",
  [sym_key_sig] = "key_sig",
  [sym_mac] = "mac",
  [sym_protocol_version] = "protocol_version",
  [sym_sig] = "sig",
  [aux_sym__file_token_token1] = "token",
  [aux_sym__hosts_token_token1] = "token",
  [aux_sym__hostname_token_token1] = "token",
  [aux_sym__proxy_token_token1] = "token",
  [aux_sym__token_token1] = "token",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [sym__space] = "_space",
  [sym_config] = "config",
  [aux_sym_config_repeat1] = "config_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_config_token1] = aux_sym_config_token1,
  [sym_cipher] = sym_cipher,
  [sym_cipher_auth] = sym_cipher_auth,
  [sym_compression] = sym_compression,
  [sym_kex] = sym_kex,
  [sym_key] = sym_key,
  [sym_key_cert] = sym_key_cert,
  [sym_key_plain] = sym_key_plain,
  [sym_key_sig] = sym_key_sig,
  [sym_mac] = sym_mac,
  [sym_protocol_version] = sym_protocol_version,
  [sym_sig] = sym_sig,
  [aux_sym__file_token_token1] = aux_sym__file_token_token1,
  [aux_sym__hosts_token_token1] = aux_sym__file_token_token1,
  [aux_sym__hostname_token_token1] = aux_sym__file_token_token1,
  [aux_sym__proxy_token_token1] = aux_sym__file_token_token1,
  [aux_sym__token_token1] = aux_sym__file_token_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [sym__space] = sym__space,
  [sym_config] = sym_config,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
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
  [sym_cipher] = {
    .visible = true,
    .named = true,
  },
  [sym_cipher_auth] = {
    .visible = true,
    .named = true,
  },
  [sym_compression] = {
    .visible = true,
    .named = true,
  },
  [sym_kex] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_key_cert] = {
    .visible = true,
    .named = true,
  },
  [sym_key_plain] = {
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
  [aux_sym__token_token1] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(301);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '$') ADVANCE(299);
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == '2') ADVANCE(315);
      if (lookahead == '3') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'h') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(387);
      if (lookahead == 'w') ADVANCE(369);
      if (lookahead == 'z') ADVANCE(385);
      if (lookahead == '}') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(402);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(301);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(207);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '@') ADVANCE(229);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '@') ADVANCE(231);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '1') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(210);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(212);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '4') ADVANCE(18);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(213);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(273);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(268);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(279);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(285);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(296);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(223);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(132);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(133);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(136);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(137);
      END_STATE();
    case 29:
      if (lookahead == '0') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == '0') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == '0') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(309);
      END_STATE();
    case 33:
      if (lookahead == '1') ADVANCE(313);
      if (lookahead == '2') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == '1') ADVANCE(96);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == '1') ADVANCE(306);
      END_STATE();
    case 37:
      if (lookahead == '1') ADVANCE(306);
      if (lookahead == '2') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '6') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == '1') ADVANCE(98);
      END_STATE();
    case 40:
      if (lookahead == '1') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == '1') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == '1') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == '1') ADVANCE(101);
      END_STATE();
    case 45:
      if (lookahead == '1') ADVANCE(102);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(93);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(311);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(306);
      END_STATE();
    case 49:
      if (lookahead == '2') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == '2') ADVANCE(314);
      END_STATE();
    case 51:
      if (lookahead == '2') ADVANCE(2);
      END_STATE();
    case 52:
      if (lookahead == '2') ADVANCE(75);
      if (lookahead == '5') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == '2') ADVANCE(7);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(74);
      if (lookahead == '5') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == '2') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == '2') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == '2') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == '2') ADVANCE(78);
      if (lookahead == '3') ADVANCE(94);
      if (lookahead == '5') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == '2') ADVANCE(79);
      if (lookahead == '3') ADVANCE(95);
      if (lookahead == '5') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '2') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == '2') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == '2') ADVANCE(14);
      END_STATE();
    case 65:
      if (lookahead == '2') ADVANCE(16);
      END_STATE();
    case 66:
      if (lookahead == '2') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == '3') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == '4') ADVANCE(309);
      END_STATE();
    case 69:
      if (lookahead == '4') ADVANCE(8);
      END_STATE();
    case 70:
      if (lookahead == '4') ADVANCE(306);
      END_STATE();
    case 71:
      if (lookahead == '5') ADVANCE(313);
      END_STATE();
    case 72:
      if (lookahead == '5') ADVANCE(34);
      END_STATE();
    case 73:
      if (lookahead == '5') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == '5') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == '5') ADVANCE(87);
      END_STATE();
    case 76:
      if (lookahead == '5') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == '5') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == '5') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == '5') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == '5') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == '5') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == '5') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == '5') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == '5') ADVANCE(42);
      END_STATE();
    case 85:
      if (lookahead == '5') ADVANCE(43);
      END_STATE();
    case 86:
      if (lookahead == '6') ADVANCE(309);
      END_STATE();
    case 87:
      if (lookahead == '6') ADVANCE(311);
      END_STATE();
    case 88:
      if (lookahead == '6') ADVANCE(307);
      END_STATE();
    case 89:
      if (lookahead == '6') ADVANCE(306);
      END_STATE();
    case 90:
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 91:
      if (lookahead == '6') ADVANCE(314);
      END_STATE();
    case 92:
      if (lookahead == '6') ADVANCE(102);
      END_STATE();
    case 93:
      if (lookahead == '8') ADVANCE(8);
      END_STATE();
    case 94:
      if (lookahead == '8') ADVANCE(70);
      END_STATE();
    case 95:
      if (lookahead == '8') ADVANCE(68);
      END_STATE();
    case 96:
      if (lookahead == '9') ADVANCE(309);
      END_STATE();
    case 97:
      if (lookahead == '9') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 98:
      if (lookahead == '9') ADVANCE(9);
      END_STATE();
    case 99:
      if (lookahead == '@') ADVANCE(229);
      END_STATE();
    case 100:
      if (lookahead == '@') ADVANCE(230);
      END_STATE();
    case 101:
      if (lookahead == '@') ADVANCE(231);
      END_STATE();
    case 102:
      if (lookahead == '@') ADVANCE(232);
      END_STATE();
    case 103:
      if (lookahead == '@') ADVANCE(233);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(318);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(316);
      if (lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(316);
      if (lookahead == 'H' ||
          lookahead == 'I' ||
          lookahead == 'K' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(317);
      if (lookahead == 'C' ||
          lookahead == 'L' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'k' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(264);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 169:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 179:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 180:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 181:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 183:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 184:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 185:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 186:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 192:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 295:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 296:
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 297:
      if (lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 298:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 299:
      if (lookahead == '{') ADVANCE(319);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_compression);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_compression);
      if (lookahead == '@') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_compression);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(196);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_protocol_version);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__token_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '-') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '0') ADVANCE(326);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '1') ADVANCE(339);
      if (lookahead == '2') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '1') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '1') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '1') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '2') ADVANCE(352);
      if (lookahead == '9') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '2') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '2') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '2') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '2') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '5') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '5') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '5') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '5') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '5') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '6') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '6') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '7') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '8') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '9') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '9') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'b') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'b') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'c') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'c') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'c') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'c') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'd') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'f') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'f') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'h') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'h') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'h') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'h') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead == 's') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'i') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'i') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == 's') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'm') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'm') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'n') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'p') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 's') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 's') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 't') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'u') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'u') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'v') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'x') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(405);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_config_token1] = ACTIONS(1),
    [sym_cipher] = ACTIONS(1),
    [sym_cipher_auth] = ACTIONS(1),
    [sym_compression] = ACTIONS(1),
    [sym_kex] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_key_cert] = ACTIONS(1),
    [sym_key_plain] = ACTIONS(1),
    [sym_key_sig] = ACTIONS(1),
    [sym_mac] = ACTIONS(1),
    [sym_protocol_version] = ACTIONS(1),
    [sym_sig] = ACTIONS(1),
    [aux_sym__file_token_token1] = ACTIONS(1),
    [aux_sym__hosts_token_token1] = ACTIONS(1),
    [aux_sym__hostname_token_token1] = ACTIONS(1),
    [aux_sym__proxy_token_token1] = ACTIONS(1),
    [aux_sym__token_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(10),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_config_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__space] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__space,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_config_token1,
    STATE(3), 1,
      aux_sym_config_repeat1,
  [16] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_config_token1,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym__space,
    STATE(3), 1,
      aux_sym_config_repeat1,
  [32] = 1,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      sym_comment,
      sym__space,
  [39] = 1,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      sym_comment,
      sym__space,
  [46] = 1,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      sym_comment,
      sym__space,
  [53] = 3,
    ACTIONS(30), 1,
      aux_sym_config_token1,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(34), 1,
      sym__space,
  [63] = 2,
    ACTIONS(30), 1,
      aux_sym_config_token1,
    ACTIONS(34), 1,
      sym__space,
  [70] = 2,
    ACTIONS(36), 1,
      aux_sym_config_token1,
    ACTIONS(38), 1,
      sym__space,
  [77] = 1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
  [81] = 1,
    ACTIONS(36), 1,
      aux_sym_config_token1,
  [85] = 1,
    ACTIONS(42), 1,
      aux_sym_config_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 81,
  [SMALL_STATE(12)] = 85,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
