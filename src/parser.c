#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_let = 2,
  anon_sym_EQ = 3,
  anon_sym_SEMI = 4,
  anon_sym_enable = 5,
  anon_sym_disable = 6,
  anon_sym_unicode = 7,
  anon_sym_lazy = 8,
  anon_sym_PIPE = 9,
  anon_sym_BANG = 10,
  anon_sym_LT_LT = 11,
  anon_sym_GT_GT = 12,
  anon_sym_STAR = 13,
  anon_sym_PLUS = 14,
  anon_sym_QMARK = 15,
  anon_sym_LBRACE = 16,
  anon_sym_COMMA = 17,
  anon_sym_RBRACE = 18,
  anon_sym_greedy = 19,
  anon_sym_DOT = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_COLON = 23,
  anon_sym_atomic = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_DASH = 27,
  anon_sym_n = 28,
  anon_sym_r = 29,
  anon_sym_t = 30,
  anon_sym_a = 31,
  anon_sym_e = 32,
  anon_sym_f = 33,
  anon_sym_regex = 34,
  anon_sym_CARET = 35,
  anon_sym_DOLLAR = 36,
  anon_sym_PERCENT = 37,
  anon_sym_COLON_COLON = 38,
  anon_sym_range = 39,
  anon_sym_U = 40,
  aux_sym_codePoint_token1 = 41,
  sym_ident = 42,
  sym_number = 43,
  aux_sym_string_token1 = 44,
  aux_sym_string_token2 = 45,
  sym_source_file = 46,
  sym_expr = 47,
  sym_stmt = 48,
  sym_letDecl = 49,
  sym_modifier = 50,
  sym_modifierKw = 51,
  sym_boolSetting = 52,
  sym_orExpr = 53,
  sym_alternatives = 54,
  sym_alternative = 55,
  sym_fixExpr = 56,
  sym_lookaroundExpr = 57,
  sym_lookaroundPrefix = 58,
  sym_repetitionExpr = 59,
  sym_repetitionSuffix = 60,
  sym_repetitionCount = 61,
  sym_repetitionBraces = 62,
  sym_quantifier = 63,
  sym_atomExpr = 64,
  sym_group = 65,
  sym_groupKind = 66,
  sym_charSet = 67,
  sym_charSetInner = 68,
  sym_range = 69,
  sym_singleChar = 70,
  sym_nonPrintable = 71,
  sym_inlineRegex = 72,
  sym_boundary = 73,
  sym_reference = 74,
  sym_sign = 75,
  sym_numberRange = 76,
  sym_codePoint = 77,
  sym_string = 78,
  sym_stringOneChar = 79,
  aux_sym_alternatives_repeat1 = 80,
  aux_sym_alternative_repeat1 = 81,
  aux_sym_charSet_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_enable] = "enable",
  [anon_sym_disable] = "disable",
  [anon_sym_unicode] = "unicode",
  [anon_sym_lazy] = "lazy",
  [anon_sym_PIPE] = "|",
  [anon_sym_BANG] = "!",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_greedy] = "greedy",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_atomic] = "atomic",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_a] = "a",
  [anon_sym_e] = "e",
  [anon_sym_f] = "f",
  [anon_sym_regex] = "regex",
  [anon_sym_CARET] = "^",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_range] = "range",
  [anon_sym_U] = "U",
  [aux_sym_codePoint_token1] = "codePoint_token1",
  [sym_ident] = "ident",
  [sym_number] = "number",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_source_file] = "source_file",
  [sym_expr] = "expr",
  [sym_stmt] = "stmt",
  [sym_letDecl] = "letDecl",
  [sym_modifier] = "modifier",
  [sym_modifierKw] = "modifierKw",
  [sym_boolSetting] = "boolSetting",
  [sym_orExpr] = "orExpr",
  [sym_alternatives] = "alternatives",
  [sym_alternative] = "alternative",
  [sym_fixExpr] = "fixExpr",
  [sym_lookaroundExpr] = "lookaroundExpr",
  [sym_lookaroundPrefix] = "lookaroundPrefix",
  [sym_repetitionExpr] = "repetitionExpr",
  [sym_repetitionSuffix] = "repetitionSuffix",
  [sym_repetitionCount] = "repetitionCount",
  [sym_repetitionBraces] = "repetitionBraces",
  [sym_quantifier] = "quantifier",
  [sym_atomExpr] = "atomExpr",
  [sym_group] = "group",
  [sym_groupKind] = "groupKind",
  [sym_charSet] = "charSet",
  [sym_charSetInner] = "charSetInner",
  [sym_range] = "range",
  [sym_singleChar] = "singleChar",
  [sym_nonPrintable] = "nonPrintable",
  [sym_inlineRegex] = "inlineRegex",
  [sym_boundary] = "boundary",
  [sym_reference] = "reference",
  [sym_sign] = "sign",
  [sym_numberRange] = "numberRange",
  [sym_codePoint] = "codePoint",
  [sym_string] = "string",
  [sym_stringOneChar] = "stringOneChar",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
  [aux_sym_alternative_repeat1] = "alternative_repeat1",
  [aux_sym_charSet_repeat1] = "charSet_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_disable] = anon_sym_disable,
  [anon_sym_unicode] = anon_sym_unicode,
  [anon_sym_lazy] = anon_sym_lazy,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_greedy] = anon_sym_greedy,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_atomic] = anon_sym_atomic,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_U] = anon_sym_U,
  [aux_sym_codePoint_token1] = aux_sym_codePoint_token1,
  [sym_ident] = sym_ident,
  [sym_number] = sym_number,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_source_file] = sym_source_file,
  [sym_expr] = sym_expr,
  [sym_stmt] = sym_stmt,
  [sym_letDecl] = sym_letDecl,
  [sym_modifier] = sym_modifier,
  [sym_modifierKw] = sym_modifierKw,
  [sym_boolSetting] = sym_boolSetting,
  [sym_orExpr] = sym_orExpr,
  [sym_alternatives] = sym_alternatives,
  [sym_alternative] = sym_alternative,
  [sym_fixExpr] = sym_fixExpr,
  [sym_lookaroundExpr] = sym_lookaroundExpr,
  [sym_lookaroundPrefix] = sym_lookaroundPrefix,
  [sym_repetitionExpr] = sym_repetitionExpr,
  [sym_repetitionSuffix] = sym_repetitionSuffix,
  [sym_repetitionCount] = sym_repetitionCount,
  [sym_repetitionBraces] = sym_repetitionBraces,
  [sym_quantifier] = sym_quantifier,
  [sym_atomExpr] = sym_atomExpr,
  [sym_group] = sym_group,
  [sym_groupKind] = sym_groupKind,
  [sym_charSet] = sym_charSet,
  [sym_charSetInner] = sym_charSetInner,
  [sym_range] = sym_range,
  [sym_singleChar] = sym_singleChar,
  [sym_nonPrintable] = sym_nonPrintable,
  [sym_inlineRegex] = sym_inlineRegex,
  [sym_boundary] = sym_boundary,
  [sym_reference] = sym_reference,
  [sym_sign] = sym_sign,
  [sym_numberRange] = sym_numberRange,
  [sym_codePoint] = sym_codePoint,
  [sym_string] = sym_string,
  [sym_stringOneChar] = sym_stringOneChar,
  [aux_sym_alternatives_repeat1] = aux_sym_alternatives_repeat1,
  [aux_sym_alternative_repeat1] = aux_sym_alternative_repeat1,
  [aux_sym_charSet_repeat1] = aux_sym_charSet_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unicode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lazy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greedy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atomic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_codePoint_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_letDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_modifierKw] = {
    .visible = true,
    .named = true,
  },
  [sym_boolSetting] = {
    .visible = true,
    .named = true,
  },
  [sym_orExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_alternatives] = {
    .visible = true,
    .named = true,
  },
  [sym_alternative] = {
    .visible = true,
    .named = true,
  },
  [sym_fixExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_lookaroundExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_lookaroundPrefix] = {
    .visible = true,
    .named = true,
  },
  [sym_repetitionExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_repetitionSuffix] = {
    .visible = true,
    .named = true,
  },
  [sym_repetitionCount] = {
    .visible = true,
    .named = true,
  },
  [sym_repetitionBraces] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_atomExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_groupKind] = {
    .visible = true,
    .named = true,
  },
  [sym_charSet] = {
    .visible = true,
    .named = true,
  },
  [sym_charSetInner] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_singleChar] = {
    .visible = true,
    .named = true,
  },
  [sym_nonPrintable] = {
    .visible = true,
    .named = true,
  },
  [sym_inlineRegex] = {
    .visible = true,
    .named = true,
  },
  [sym_boundary] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_numberRange] = {
    .visible = true,
    .named = true,
  },
  [sym_codePoint] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_stringOneChar] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternative_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_charSet_repeat1] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 13,
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
  [60] = 16,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 27,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 42,
  [71] = 43,
  [72] = 41,
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
  [104] = 100,
  [105] = 105,
  [106] = 106,
  [107] = 85,
};

static inline bool anon_sym_BANG_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym_codePoint_token1_character_set_1(int32_t c) {
  return (c < 42786
    ? (c < 3542
      ? (c < 2654
        ? (c < 1984
          ? (c < 931
            ? (c < 736
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 890
                ? (c < 837
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 837 || (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1519
              ? (c < 1456
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1761
                ? (c < 1625
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1623)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1773 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1855 || (c >= 1869 && c <= 1969)))))))))
          : (c <= 2026 || (c < 2486
            ? (c < 2288
              ? (c < 2144
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2071 || (c < 2112
                    ? (c >= 2074 && c <= 2092)
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c < 2275
                    ? (c >= 2260 && c <= 2271)
                    : c <= 2281)))))
              : (c <= 2363 || (c < 2437
                ? (c < 2389
                  ? (c < 2382
                    ? (c >= 2365 && c <= 2380)
                    : c <= 2384)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2575
              ? (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2493 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2508 || (c < 2519
                    ? c == 2510
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)))))
              : (c <= 2576 || (c < 2622
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)))
                : (c <= 2626 || (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2636)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3046
          ? (c < 2877
            ? (c < 2768
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2764)))))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2812 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2969
              ? (c < 2918
                ? (c < 2902
                  ? (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2892)
                  : (c <= 2903 || (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)))
                : (c <= 2927 || (c < 2949
                  ? (c < 2946
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))))
              : (c <= 2970 || (c < 3006
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3020)
                  : (c <= 3024 || c == 3031))))))))
          : (c <= 3055 || (c < 3285
            ? (c < 3168
              ? (c < 3133
                ? (c < 3086
                  ? (c < 3077
                    ? (c >= 3072 && c <= 3075)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3148)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))
              : (c <= 3171 || (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3276)))))))
            : (c <= 3286 || (c < 3412
              ? (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3406
                    ? (c >= 3402 && c <= 3404)
                    : c <= 3406)))))
              : (c <= 3415 || (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3535 && c <= 3540)))))))))))))
      : (c <= 3542 || (c < 7040
        ? (c < 4808
          ? (c < 3953
            ? (c < 3749
              ? (c < 3661
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3654)))
                : (c <= 3661 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)
                  : (c <= 3716 || (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)))))
              : (c <= 3749 || (c < 3792
                ? (c < 3776
                  ? (c < 3771
                    ? (c >= 3751 && c <= 3769)
                    : c <= 3773)
                  : (c <= 3780 || (c < 3789
                    ? c == 3782
                    : c <= 3789)))
                : (c <= 3801 || (c < 3872
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3881 || (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)))))))
            : (c <= 3969 || (c < 4682
              ? (c < 4176
                ? (c < 4096
                  ? (c < 3993
                    ? (c >= 3976 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4150 || (c < 4155
                    ? c == 4152
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))
              : (c <= 4685 || (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))))
          : (c <= 4822 || (c < 6176
            ? (c < 5919
              ? (c < 5112
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5792
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5907)))))
              : (c <= 5939 || (c < 6070
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6067)))
                : (c <= 6088 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6121 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6456)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6617)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6860
                ? (c < 6800
                  ? (c < 6784
                    ? (c >= 6753 && c <= 6772)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6847
                    ? c == 6823
                    : c <= 6848)))
                : (c <= 6862 || (c < 6981
                  ? (c < 6965
                    ? (c >= 6912 && c <= 6963)
                    : c <= 6979)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))))))))
        : (c <= 7081 || (c < 8495
          ? (c < 8031
            ? (c < 7418
              ? (c < 7296
                ? (c < 7168
                  ? (c < 7143
                    ? (c >= 7084 && c <= 7141)
                    : c <= 7153)
                  : (c <= 7222 || (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)))))
              : (c <= 7418 || (c < 8008
                ? (c < 7680
                  ? (c < 7655
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7668)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))))
            : (c <= 8061 || (c < 8319
              ? (c < 8144
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))
                : (c <= 8147 || (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))))
              : (c <= 8319 || (c < 8473
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))))))
          : (c <= 8505 || (c < 11744
            ? (c < 11568
              ? (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 9398
                    ? (c >= 8544 && c <= 8584)
                    : c <= 9449)))
                : (c <= 11492 || (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))))
              : (c <= 11623 || (c < 11704
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))
            : (c <= 11775 || (c < 12704
              ? (c < 12353
                ? (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12329 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))))
              : (c <= 12735 || (c < 42512
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42619)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))))))))))
    : (c <= 42888 || (c < 70784
      ? (c < 66964
        ? (c < 64298
          ? (c < 43642
            ? (c < 43259
              ? (c < 43015
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43013)))
                : (c <= 43047 || (c < 43205
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43203)
                  : (c <= 43205 || (c < 43250
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43306)
                    : c <= 43346)
                  : (c <= 43388 || (c < 43444
                    ? (c >= 43392 && c <= 43442)
                    : c <= 43455)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)))))))
            : (c <= 43710 || (c < 43868
              ? (c < 43777
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43765)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))))
              : (c <= 43881 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64296)))))))))
          : (c <= 64310 || (c < 65596
            ? (c < 65296
              ? (c < 64467
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))))
              : (c <= 65305 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66504
              ? (c < 66208
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66426 || (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66720
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66729 || (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69415
          ? (c < 67968
            ? (c < 67592
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))))
              : (c <= 67592 || (c < 67712
                ? (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68416
              ? (c < 68121
                ? (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))))
              : (c <= 68437 || (c < 68864
                ? (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)))
                : (c <= 68903 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))))))))
          : (c <= 69415 || (c < 70272
            ? (c < 69968
              ? (c < 69745
                ? (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69701)))
                : (c <= 69749 || (c < 69840
                  ? (c < 69826
                    ? (c >= 69762 && c <= 69816)
                    : c <= 69826)
                  : (c <= 69864 || (c < 69956
                    ? (c >= 69888 && c <= 69938)
                    : c <= 69959)))))
              : (c <= 70002 || (c < 70108
                ? (c < 70081
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70079)
                  : (c <= 70084 || (c < 70106
                    ? (c >= 70094 && c <= 70095)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70199
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70196)
                  : (c <= 70199 || c == 70206))))))
            : (c <= 70278 || (c < 70453
              ? (c < 70400
                ? (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70376)))
                : (c <= 70403 || (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)))))
              : (c <= 70457 || (c < 70493
                ? (c < 70475
                  ? (c < 70471
                    ? (c >= 70461 && c <= 70468)
                    : c <= 70472)
                  : (c <= 70476 || (c < 70487
                    ? c == 70480
                    : c <= 70487)))
                : (c <= 70499 || (c < 70727
                  ? (c < 70723
                    ? (c >= 70656 && c <= 70721)
                    : c <= 70725)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70849 || (c < 119808
        ? (c < 73027
          ? (c < 72096
            ? (c < 71453
              ? (c < 71168
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71093 || (c < 71128
                    ? (c >= 71096 && c <= 71102)
                    : c <= 71133)))
                : (c <= 71230 || (c < 71296
                  ? (c < 71236
                    ? c == 71232
                    : c <= 71236)
                  : (c <= 71349 || (c < 71424
                    ? c == 71352
                    : c <= 71450)))))
              : (c <= 71466 || (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71736)
                  : (c <= 71903 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 71999
                    ? (c >= 71995 && c <= 71996)
                    : c <= 72002)))))))
            : (c <= 72103 || (c < 72760
              ? (c < 72245
                ? (c < 72161
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72159)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72242)))
                : (c <= 72254 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72343)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))
              : (c <= 72766 || (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? c == 72768
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c >= 73023 && c <= 73025)))))))))
          : (c <= 73027 || (c < 93053
            ? (c < 74880
              ? (c < 73107
                ? (c < 73063
                  ? (c < 73056
                    ? (c >= 73030 && c <= 73031)
                    : c <= 73061)
                  : (c <= 73064 || (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)))
                : (c <= 73110 || (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))))
              : (c <= 75075 || (c < 92784
                ? (c < 82944
                  ? (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)
                  : (c <= 83526 || (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)))
                : (c <= 92862 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)
                  : (c <= 92995 || (c >= 93027 && c <= 93047)))))))
            : (c <= 93071 || (c < 110581
              ? (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94179 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))
              : (c <= 110587 || (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || c == 113822))))))))))
        : (c <= 119892 || (c < 125184
          ? (c < 120598
            ? (c < 120086
              ? (c < 119982
                ? (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c < 119977
                    ? (c >= 119973 && c <= 119974)
                    : c <= 119980)))
                : (c <= 119993 || (c < 120005
                  ? (c < 119997
                    ? c == 119995
                    : c <= 120003)
                  : (c <= 120069 || (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)))))
              : (c <= 120092 || (c < 120146
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || (c < 120138
                    ? c == 120134
                    : c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 122918
              ? (c < 120772
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))
                : (c <= 120779 || (c < 122888
                  ? (c < 122880
                    ? (c >= 122624 && c <= 122654)
                    : c <= 122886)
                  : (c <= 122904 || (c < 122915
                    ? (c >= 122907 && c <= 122913)
                    : c <= 122916)))))
              : (c <= 122922 || (c < 124896
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)))
                : (c <= 124902 || (c < 124912
                  ? (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)
                  : (c <= 124926 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125251 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125259
                    ? c == 125255
                    : c <= 125259)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126635
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c < 126629
                    ? (c >= 126625 && c <= 126627)
                    : c <= 126633)))))
              : (c <= 126651 || (c < 177984
                ? (c < 127344
                  ? (c < 127312
                    ? (c >= 127280 && c <= 127305)
                    : c <= 127337)
                  : (c <= 127369 || (c < 173824
                    ? (c >= 131072 && c <= 173791)
                    : c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_ident_character_set_1(int32_t c) {
  return (c < 43015
    ? (c < 3585
      ? (c < 2649
        ? (c < 1869
          ? (c < 931
            ? (c < 748
              ? (c < 186
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 880
                  ? (c < 837
                    ? c == 750
                    : c <= 837)
                  : (c <= 884 || (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1519
              ? (c < 1456
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1761
                ? (c < 1625
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1623)
                  : (c <= 1631 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1791
                  ? (c < 1786
                    ? (c >= 1773 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1855)))))))))
          : (c <= 1969 || (c < 2486
            ? (c < 2275
              ? (c < 2112
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2071)
                    : c <= 2092)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c < 2260
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2271)))))
              : (c <= 2281 || (c < 2437
                ? (c < 2382
                  ? (c < 2365
                    ? (c >= 2288 && c <= 2363)
                    : c <= 2380)
                  : (c <= 2384 || (c < 2417
                    ? (c >= 2389 && c <= 2403)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2565
              ? (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2493 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2508 || (c < 2519
                    ? c == 2510
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2561 && c <= 2563)))))
              : (c <= 2570 || (c < 2616
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))
                : (c <= 2617 || (c < 2635
                  ? (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)
                  : (c <= 2636 || c == 2641))))))))))
        : (c <= 2652 || (c < 3072
          ? (c < 2877
            ? (c < 2763
              ? (c < 2707
                ? (c < 2689
                  ? (c < 2672
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)))
                : (c <= 2728 || (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2759
                    ? (c >= 2749 && c <= 2757)
                    : c <= 2761)))))
              : (c <= 2764 || (c < 2831
                ? (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2812 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2969
              ? (c < 2929
                ? (c < 2902
                  ? (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2892)
                  : (c <= 2903 || (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 3006
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3020)
                  : (c <= 3024 || c == 3031))))))))
          : (c <= 3075 || (c < 3296
            ? (c < 3200
              ? (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3148)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))
              : (c <= 3203 || (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3268 || (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3276)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))))
            : (c <= 3299 || (c < 3450
              ? (c < 3398
                ? (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c < 3406
                    ? (c >= 3402 && c <= 3404)
                    : c <= 3406)
                  : (c <= 3415 || (c >= 3423 && c <= 3427)))))
              : (c <= 3455 || (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c >= 3570 && c <= 3571)))))))))))))
      : (c <= 3642 || (c < 7401
        ? (c < 5024
          ? (c < 4176
            ? (c < 3789
              ? (c < 3724
                ? (c < 3713
                  ? (c < 3661
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3661)
                  : (c <= 3714 || (c < 3718
                    ? c == 3716
                    : c <= 3722)))
                : (c <= 3747 || (c < 3771
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3769)
                  : (c <= 3773 || (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)))))
              : (c <= 3789 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3969)))
                : (c <= 3991 || (c < 4152
                  ? (c < 4096
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4150)
                  : (c <= 4152 || (c >= 4155 && c <= 4159)))))))
            : (c <= 4239 || (c < 4746
              ? (c < 4348
                ? (c < 4295
                  ? (c < 4256
                    ? (c >= 4250 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))
                : (c <= 4680 || (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))))
              : (c <= 4749 || (c < 4808
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))
                : (c <= 4822 || (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))))))))
          : (c <= 5109 || (c < 6512
            ? (c < 6016
              ? (c < 5888
                ? (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))
                : (c <= 5907 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5939)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))))
              : (c <= 6067 || (c < 6320
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6070 && c <= 6088)
                    : c <= 6103)
                  : (c <= 6108 || (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6456 || (c >= 6480 && c <= 6509)))))))
            : (c <= 6516 || (c < 6981
              ? (c < 6823
                ? (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6683 || (c < 6753
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6772)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6860
                    ? (c >= 6847 && c <= 6848)
                    : c <= 6862)
                  : (c <= 6963 || (c >= 6965 && c <= 6979)))))
              : (c <= 6988 || (c < 7245
                ? (c < 7098
                  ? (c < 7084
                    ? (c >= 7040 && c <= 7081)
                    : c <= 7087)
                  : (c <= 7141 || (c < 7168
                    ? (c >= 7143 && c <= 7153)
                    : c <= 7222)))
                : (c <= 7247 || (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))))))))
        : (c <= 7404 || (c < 11506
          ? (c < 8178
            ? (c < 8027
              ? (c < 7680
                ? (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c < 7655
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7668)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)))))
              : (c <= 8027 || (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))))
            : (c <= 8180 || (c < 8486
              ? (c < 8455
                ? (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))))
              : (c <= 8486 || (c < 8526
                ? (c < 8495
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8493)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c < 9398
                    ? (c >= 8544 && c <= 8584)
                    : c <= 9449)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))))))
          : (c <= 11507 || (c < 12449
            ? (c < 11720
              ? (c < 11648
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))
              : (c <= 11726 || (c < 12321
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12293
                    ? c == 11823
                    : c <= 12295)))
                : (c <= 12329 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))))))
            : (c <= 12538 || (c < 42538
              ? (c < 13312
                ? (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)))
                : (c <= 19903 || (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))))
              : (c <= 42539 || (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42619)
                  : (c <= 42735 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43013)))))))))))))))
    : (c <= 43047 || (c < 71128
      ? (c < 67424
        ? (c < 64467
          ? (c < 43762
            ? (c < 43471
              ? (c < 43261
                ? (c < 43205
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43203)
                  : (c <= 43205 || (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)))
                : (c <= 43263 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43306)
                    : c <= 43346)
                  : (c <= 43388 || (c < 43444
                    ? (c >= 43392 && c <= 43442)
                    : c <= 43455)))))
              : (c <= 43471 || (c < 43642
                ? (c < 43520
                  ? (c < 43514
                    ? (c >= 43488 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43616
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43638)))
                : (c <= 43710 || (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))))))
            : (c <= 43765 || (c < 63744
              ? (c < 43824
                ? (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))
                : (c <= 43866 || (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))))
              : (c <= 64109 || (c < 64312
                ? (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))))))
          : (c <= 64829 || (c < 66304
            ? (c < 65498
              ? (c < 65313
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65338 || (c < 65474
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65470)
                  : (c <= 65479 || (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)))))
              : (c <= 65500 || (c < 65616
                ? (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))
            : (c <= 66335 || (c < 66864
              ? (c < 66513
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))
                : (c <= 66517 || (c < 66776
                  ? (c < 66736
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))))
              : (c <= 66915 || (c < 66979
                ? (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69745
          ? (c < 68192
            ? (c < 67808
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)))))
              : (c <= 67826 || (c < 68096
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)))
                : (c <= 68099 || (c < 68117
                  ? (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))))
            : (c <= 68220 || (c < 68864
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))
              : (c <= 68903 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69632 && c <= 69701)))))))))
          : (c <= 69749 || (c < 70400
            ? (c < 70108
              ? (c < 69968
                ? (c < 69840
                  ? (c < 69826
                    ? (c >= 69762 && c <= 69816)
                    : c <= 69826)
                  : (c <= 69864 || (c < 69956
                    ? (c >= 69888 && c <= 69938)
                    : c <= 69959)))
                : (c <= 70002 || (c < 70081
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70079)
                  : (c <= 70084 || (c < 70106
                    ? (c >= 70094 && c <= 70095)
                    : c <= 70106)))))
              : (c <= 70108 || (c < 70280
                ? (c < 70199
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70196)
                  : (c <= 70199 || (c < 70272
                    ? c == 70206
                    : c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70376)))))))
            : (c <= 70403 || (c < 70487
              ? (c < 70453
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)))
                : (c <= 70457 || (c < 70475
                  ? (c < 70471
                    ? (c >= 70461 && c <= 70468)
                    : c <= 70472)
                  : (c <= 70476 || c == 70480))))
              : (c <= 70487 || (c < 70784
                ? (c < 70723
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70721)
                  : (c <= 70725 || (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)))
                : (c <= 70849 || (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71093 || (c >= 71096 && c <= 71102)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73063
          ? (c < 72163
            ? (c < 71945
              ? (c < 71424
                ? (c < 71236
                  ? (c < 71232
                    ? (c >= 71168 && c <= 71230)
                    : c <= 71232)
                  : (c <= 71236 || (c < 71352
                    ? (c >= 71296 && c <= 71349)
                    : c <= 71352)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71488
                    ? (c >= 71453 && c <= 71466)
                    : c <= 71494)
                  : (c <= 71736 || (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 71999
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 71996)))
                : (c <= 72002 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72159 || c == 72161))))))
            : (c <= 72164 || (c < 72850
              ? (c < 72704
                ? (c < 72272
                  ? (c < 72245
                    ? (c >= 72192 && c <= 72242)
                    : c <= 72254)
                  : (c <= 72343 || (c < 72368
                    ? c == 72349
                    : c <= 72440)))
                : (c <= 72712 || (c < 72768
                  ? (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72766)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))))
              : (c <= 72871 || (c < 73020
                ? (c < 72968
                  ? (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)
                  : (c <= 72969 || (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)))
                : (c <= 73021 || (c < 73030
                  ? (c < 73027
                    ? (c >= 73023 && c <= 73025)
                    : c <= 73027)
                  : (c <= 73031 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94031
            ? (c < 82944
              ? (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73110 || (c < 73440
                    ? c == 73112
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))
              : (c <= 83526 || (c < 92992
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94087 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113792
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))
                : (c <= 113800 || (c < 119808
                  ? (c < 113822
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125255
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123136
              ? (c < 122880
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122886 || (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c >= 122918 && c <= 122922)))))
              : (c <= 123180 || (c < 124904
                ? (c < 123536
                  ? (c < 123214
                    ? (c >= 123191 && c <= 123197)
                    : c <= 123214)
                  : (c <= 123565 || (c < 124896
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125255 || (c < 126561
            ? (c < 126535
              ? (c < 126503
                ? (c < 126469
                  ? (c < 126464
                    ? c == 125259
                    : c <= 126467)
                  : (c <= 126495 || (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)))
                : (c <= 126503 || (c < 126521
                  ? (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)
                  : (c <= 126521 || (c < 126530
                    ? c == 126523
                    : c <= 126530)))))
              : (c <= 126535 || (c < 126551
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126635
              ? (c < 126590
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c < 126585
                    ? (c >= 126580 && c <= 126583)
                    : c <= 126588)))
                : (c <= 126590 || (c < 126625
                  ? (c < 126603
                    ? (c >= 126592 && c <= 126601)
                    : c <= 126619)
                  : (c <= 126627 || (c >= 126629 && c <= 126633)))))
              : (c <= 126651 || (c < 177984
                ? (c < 127344
                  ? (c < 127312
                    ? (c >= 127280 && c <= 127305)
                    : c <= 127337)
                  : (c <= 127369 || (c < 173824
                    ? (c >= 131072 && c <= 173791)
                    : c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_ident_character_set_2(int32_t c) {
  return (c < 43015
    ? (c < 3585
      ? (c < 2649
        ? (c < 1869
          ? (c < 931
            ? (c < 748
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 880
                  ? (c < 837
                    ? c == 750
                    : c <= 837)
                  : (c <= 884 || (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1519
              ? (c < 1456
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1761
                ? (c < 1625
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1623)
                  : (c <= 1631 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1791
                  ? (c < 1786
                    ? (c >= 1773 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1855)))))))))
          : (c <= 1969 || (c < 2486
            ? (c < 2275
              ? (c < 2112
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2071)
                    : c <= 2092)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c < 2260
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2271)))))
              : (c <= 2281 || (c < 2437
                ? (c < 2382
                  ? (c < 2365
                    ? (c >= 2288 && c <= 2363)
                    : c <= 2380)
                  : (c <= 2384 || (c < 2417
                    ? (c >= 2389 && c <= 2403)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2565
              ? (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2493 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2508 || (c < 2519
                    ? c == 2510
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2561 && c <= 2563)))))
              : (c <= 2570 || (c < 2616
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))
                : (c <= 2617 || (c < 2635
                  ? (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)
                  : (c <= 2636 || c == 2641))))))))))
        : (c <= 2652 || (c < 3072
          ? (c < 2877
            ? (c < 2763
              ? (c < 2707
                ? (c < 2689
                  ? (c < 2672
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)))
                : (c <= 2728 || (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2759
                    ? (c >= 2749 && c <= 2757)
                    : c <= 2761)))))
              : (c <= 2764 || (c < 2831
                ? (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2812 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2969
              ? (c < 2929
                ? (c < 2902
                  ? (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2892)
                  : (c <= 2903 || (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 3006
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3020)
                  : (c <= 3024 || c == 3031))))))))
          : (c <= 3075 || (c < 3296
            ? (c < 3200
              ? (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3148)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))
              : (c <= 3203 || (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3268 || (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3276)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))))
            : (c <= 3299 || (c < 3450
              ? (c < 3398
                ? (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c < 3406
                    ? (c >= 3402 && c <= 3404)
                    : c <= 3406)
                  : (c <= 3415 || (c >= 3423 && c <= 3427)))))
              : (c <= 3455 || (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c >= 3570 && c <= 3571)))))))))))))
      : (c <= 3642 || (c < 7401
        ? (c < 5024
          ? (c < 4176
            ? (c < 3789
              ? (c < 3724
                ? (c < 3713
                  ? (c < 3661
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3661)
                  : (c <= 3714 || (c < 3718
                    ? c == 3716
                    : c <= 3722)))
                : (c <= 3747 || (c < 3771
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3769)
                  : (c <= 3773 || (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)))))
              : (c <= 3789 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3969)))
                : (c <= 3991 || (c < 4152
                  ? (c < 4096
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4150)
                  : (c <= 4152 || (c >= 4155 && c <= 4159)))))))
            : (c <= 4239 || (c < 4746
              ? (c < 4348
                ? (c < 4295
                  ? (c < 4256
                    ? (c >= 4250 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))
                : (c <= 4680 || (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))))
              : (c <= 4749 || (c < 4808
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))
                : (c <= 4822 || (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))))))))
          : (c <= 5109 || (c < 6512
            ? (c < 6016
              ? (c < 5888
                ? (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))
                : (c <= 5907 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5939)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))))
              : (c <= 6067 || (c < 6320
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6070 && c <= 6088)
                    : c <= 6103)
                  : (c <= 6108 || (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6456 || (c >= 6480 && c <= 6509)))))))
            : (c <= 6516 || (c < 6981
              ? (c < 6823
                ? (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6683 || (c < 6753
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6772)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6860
                    ? (c >= 6847 && c <= 6848)
                    : c <= 6862)
                  : (c <= 6963 || (c >= 6965 && c <= 6979)))))
              : (c <= 6988 || (c < 7245
                ? (c < 7098
                  ? (c < 7084
                    ? (c >= 7040 && c <= 7081)
                    : c <= 7087)
                  : (c <= 7141 || (c < 7168
                    ? (c >= 7143 && c <= 7153)
                    : c <= 7222)))
                : (c <= 7247 || (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))))))))
        : (c <= 7404 || (c < 11506
          ? (c < 8178
            ? (c < 8027
              ? (c < 7680
                ? (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c < 7655
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7668)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)))))
              : (c <= 8027 || (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))))
            : (c <= 8180 || (c < 8486
              ? (c < 8455
                ? (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))))
              : (c <= 8486 || (c < 8526
                ? (c < 8495
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8493)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c < 9398
                    ? (c >= 8544 && c <= 8584)
                    : c <= 9449)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))))))
          : (c <= 11507 || (c < 12449
            ? (c < 11720
              ? (c < 11648
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))
              : (c <= 11726 || (c < 12321
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12293
                    ? c == 11823
                    : c <= 12295)))
                : (c <= 12329 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))))))
            : (c <= 12538 || (c < 42538
              ? (c < 13312
                ? (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)))
                : (c <= 19903 || (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))))
              : (c <= 42539 || (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42619)
                  : (c <= 42735 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43013)))))))))))))))
    : (c <= 43047 || (c < 71128
      ? (c < 67424
        ? (c < 64467
          ? (c < 43762
            ? (c < 43471
              ? (c < 43261
                ? (c < 43205
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43203)
                  : (c <= 43205 || (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)))
                : (c <= 43263 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43306)
                    : c <= 43346)
                  : (c <= 43388 || (c < 43444
                    ? (c >= 43392 && c <= 43442)
                    : c <= 43455)))))
              : (c <= 43471 || (c < 43642
                ? (c < 43520
                  ? (c < 43514
                    ? (c >= 43488 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43616
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43638)))
                : (c <= 43710 || (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))))))
            : (c <= 43765 || (c < 63744
              ? (c < 43824
                ? (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))
                : (c <= 43866 || (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))))
              : (c <= 64109 || (c < 64312
                ? (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))))))
          : (c <= 64829 || (c < 66304
            ? (c < 65498
              ? (c < 65313
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65338 || (c < 65474
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65470)
                  : (c <= 65479 || (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)))))
              : (c <= 65500 || (c < 65616
                ? (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))
            : (c <= 66335 || (c < 66864
              ? (c < 66513
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))
                : (c <= 66517 || (c < 66776
                  ? (c < 66736
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))))
              : (c <= 66915 || (c < 66979
                ? (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69745
          ? (c < 68192
            ? (c < 67808
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)))))
              : (c <= 67826 || (c < 68096
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)))
                : (c <= 68099 || (c < 68117
                  ? (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))))
            : (c <= 68220 || (c < 68864
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))
              : (c <= 68903 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69632 && c <= 69701)))))))))
          : (c <= 69749 || (c < 70400
            ? (c < 70108
              ? (c < 69968
                ? (c < 69840
                  ? (c < 69826
                    ? (c >= 69762 && c <= 69816)
                    : c <= 69826)
                  : (c <= 69864 || (c < 69956
                    ? (c >= 69888 && c <= 69938)
                    : c <= 69959)))
                : (c <= 70002 || (c < 70081
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70079)
                  : (c <= 70084 || (c < 70106
                    ? (c >= 70094 && c <= 70095)
                    : c <= 70106)))))
              : (c <= 70108 || (c < 70280
                ? (c < 70199
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70196)
                  : (c <= 70199 || (c < 70272
                    ? c == 70206
                    : c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70376)))))))
            : (c <= 70403 || (c < 70487
              ? (c < 70453
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)))
                : (c <= 70457 || (c < 70475
                  ? (c < 70471
                    ? (c >= 70461 && c <= 70468)
                    : c <= 70472)
                  : (c <= 70476 || c == 70480))))
              : (c <= 70487 || (c < 70784
                ? (c < 70723
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70721)
                  : (c <= 70725 || (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)))
                : (c <= 70849 || (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71093 || (c >= 71096 && c <= 71102)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73063
          ? (c < 72163
            ? (c < 71945
              ? (c < 71424
                ? (c < 71236
                  ? (c < 71232
                    ? (c >= 71168 && c <= 71230)
                    : c <= 71232)
                  : (c <= 71236 || (c < 71352
                    ? (c >= 71296 && c <= 71349)
                    : c <= 71352)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71488
                    ? (c >= 71453 && c <= 71466)
                    : c <= 71494)
                  : (c <= 71736 || (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 71999
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 71996)))
                : (c <= 72002 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72159 || c == 72161))))))
            : (c <= 72164 || (c < 72850
              ? (c < 72704
                ? (c < 72272
                  ? (c < 72245
                    ? (c >= 72192 && c <= 72242)
                    : c <= 72254)
                  : (c <= 72343 || (c < 72368
                    ? c == 72349
                    : c <= 72440)))
                : (c <= 72712 || (c < 72768
                  ? (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72766)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))))
              : (c <= 72871 || (c < 73020
                ? (c < 72968
                  ? (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)
                  : (c <= 72969 || (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)))
                : (c <= 73021 || (c < 73030
                  ? (c < 73027
                    ? (c >= 73023 && c <= 73025)
                    : c <= 73027)
                  : (c <= 73031 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94031
            ? (c < 82944
              ? (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73110 || (c < 73440
                    ? c == 73112
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))
              : (c <= 83526 || (c < 92992
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94087 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113792
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))
                : (c <= 113800 || (c < 119808
                  ? (c < 113822
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125255
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123136
              ? (c < 122880
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122886 || (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c >= 122918 && c <= 122922)))))
              : (c <= 123180 || (c < 124904
                ? (c < 123536
                  ? (c < 123214
                    ? (c >= 123191 && c <= 123197)
                    : c <= 123214)
                  : (c <= 123565 || (c < 124896
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125255 || (c < 126561
            ? (c < 126535
              ? (c < 126503
                ? (c < 126469
                  ? (c < 126464
                    ? c == 125259
                    : c <= 126467)
                  : (c <= 126495 || (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)))
                : (c <= 126503 || (c < 126521
                  ? (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)
                  : (c <= 126521 || (c < 126530
                    ? c == 126523
                    : c <= 126530)))))
              : (c <= 126535 || (c < 126551
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126635
              ? (c < 126590
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c < 126585
                    ? (c >= 126580 && c <= 126583)
                    : c <= 126588)))
                : (c <= 126590 || (c < 126625
                  ? (c < 126603
                    ? (c >= 126592 && c <= 126601)
                    : c <= 126619)
                  : (c <= 126627 || (c >= 126629 && c <= 126633)))))
              : (c <= 126651 || (c < 177984
                ? (c < 127344
                  ? (c < 127312
                    ? (c >= 127280 && c <= 127305)
                    : c <= 127337)
                  : (c <= 127369 || (c < 173824
                    ? (c >= 131072 && c <= 173791)
                    : c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_ident_character_set_3(int32_t c) {
  return (c < 42786
    ? (c < 3544
      ? (c < 2654
        ? (c < 1984
          ? (c < 931
            ? (c < 736
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 890
                ? (c < 837
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 837 || (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1519
              ? (c < 1456
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1761
                ? (c < 1625
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1623)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1773 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1855 || (c >= 1869 && c <= 1969)))))))))
          : (c <= 2026 || (c < 2486
            ? (c < 2288
              ? (c < 2144
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2071 || (c < 2112
                    ? (c >= 2074 && c <= 2092)
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c < 2275
                    ? (c >= 2260 && c <= 2271)
                    : c <= 2281)))))
              : (c <= 2363 || (c < 2437
                ? (c < 2389
                  ? (c < 2382
                    ? (c >= 2365 && c <= 2380)
                    : c <= 2384)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2575
              ? (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2493 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2508 || (c < 2519
                    ? c == 2510
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)))))
              : (c <= 2576 || (c < 2622
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)))
                : (c <= 2626 || (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2636)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3072
          ? (c < 2887
            ? (c < 2768
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2764)))))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2812 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))))))
            : (c <= 2888 || (c < 2972
              ? (c < 2929
                ? (c < 2908
                  ? (c < 2902
                    ? (c >= 2891 && c <= 2892)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))))
              : (c <= 2972 || (c < 3014
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))
                : (c <= 3016 || (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3020)
                    : c <= 3024)
                  : (c <= 3031 || (c >= 3046 && c <= 3055)))))))))
          : (c <= 3075 || (c < 3293
            ? (c < 3174
              ? (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3148)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))
              : (c <= 3183 || (c < 3253
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)))
                : (c <= 3257 || (c < 3274
                  ? (c < 3270
                    ? (c >= 3261 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3276 || (c >= 3285 && c <= 3286)))))))
            : (c <= 3294 || (c < 3423
              ? (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3386 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3389 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3404 || (c < 3412
                    ? c == 3406
                    : c <= 3415)))))
              : (c <= 3427 || (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3535
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3540 || c == 3542))))))))))))
      : (c <= 3551 || (c < 7040
        ? (c < 4824
          ? (c < 3976
            ? (c < 3751
              ? (c < 3664
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3661
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3661)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))))
              : (c <= 3769 || (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3771 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? c == 3789
                    : c <= 3801)))
                : (c <= 3807 || (c < 3904
                  ? (c < 3872
                    ? c == 3840
                    : c <= 3881)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3969)))))))
            : (c <= 3991 || (c < 4688
              ? (c < 4256
                ? (c < 4152
                  ? (c < 4096
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4150)
                  : (c <= 4152 || (c < 4176
                    ? (c >= 4155 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))
              : (c <= 4694 || (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 6176
            ? (c < 5919
              ? (c < 5121
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5907)))))
              : (c <= 5939 || (c < 6070
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6067)))
                : (c <= 6088 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6121 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6456)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6617)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6860
                ? (c < 6800
                  ? (c < 6784
                    ? (c >= 6753 && c <= 6772)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6847
                    ? c == 6823
                    : c <= 6848)))
                : (c <= 6862 || (c < 6981
                  ? (c < 6965
                    ? (c >= 6912 && c <= 6963)
                    : c <= 6979)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))))))))
        : (c <= 7081 || (c < 8495
          ? (c < 8031
            ? (c < 7418
              ? (c < 7296
                ? (c < 7168
                  ? (c < 7143
                    ? (c >= 7084 && c <= 7141)
                    : c <= 7153)
                  : (c <= 7222 || (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)))))
              : (c <= 7418 || (c < 8008
                ? (c < 7680
                  ? (c < 7655
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7668)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))))
            : (c <= 8061 || (c < 8319
              ? (c < 8144
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))
                : (c <= 8147 || (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))))
              : (c <= 8319 || (c < 8473
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))))))
          : (c <= 8505 || (c < 11744
            ? (c < 11568
              ? (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 9398
                    ? (c >= 8544 && c <= 8584)
                    : c <= 9449)))
                : (c <= 11492 || (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))))
              : (c <= 11623 || (c < 11704
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))
            : (c <= 11775 || (c < 12704
              ? (c < 12353
                ? (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12329 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))))
              : (c <= 12735 || (c < 42512
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42619)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))))))))))
    : (c <= 42888 || (c < 70784
      ? (c < 66964
        ? (c < 64298
          ? (c < 43642
            ? (c < 43259
              ? (c < 43015
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43013)))
                : (c <= 43047 || (c < 43205
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43203)
                  : (c <= 43205 || (c < 43250
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43306)
                    : c <= 43346)
                  : (c <= 43388 || (c < 43444
                    ? (c >= 43392 && c <= 43442)
                    : c <= 43455)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)))))))
            : (c <= 43710 || (c < 43868
              ? (c < 43777
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43765)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))))
              : (c <= 43881 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64296)))))))))
          : (c <= 64310 || (c < 65596
            ? (c < 65296
              ? (c < 64467
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))))
              : (c <= 65305 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66504
              ? (c < 66208
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66426 || (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66720
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66729 || (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69415
          ? (c < 67968
            ? (c < 67592
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))))
              : (c <= 67592 || (c < 67712
                ? (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68416
              ? (c < 68121
                ? (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))))
              : (c <= 68437 || (c < 68864
                ? (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)))
                : (c <= 68903 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))))))))
          : (c <= 69415 || (c < 70272
            ? (c < 69968
              ? (c < 69745
                ? (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69701)))
                : (c <= 69749 || (c < 69840
                  ? (c < 69826
                    ? (c >= 69762 && c <= 69816)
                    : c <= 69826)
                  : (c <= 69864 || (c < 69956
                    ? (c >= 69888 && c <= 69938)
                    : c <= 69959)))))
              : (c <= 70002 || (c < 70108
                ? (c < 70081
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70079)
                  : (c <= 70084 || (c < 70106
                    ? (c >= 70094 && c <= 70095)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70199
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70196)
                  : (c <= 70199 || c == 70206))))))
            : (c <= 70278 || (c < 70453
              ? (c < 70400
                ? (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70376)))
                : (c <= 70403 || (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)))))
              : (c <= 70457 || (c < 70493
                ? (c < 70475
                  ? (c < 70471
                    ? (c >= 70461 && c <= 70468)
                    : c <= 70472)
                  : (c <= 70476 || (c < 70487
                    ? c == 70480
                    : c <= 70487)))
                : (c <= 70499 || (c < 70727
                  ? (c < 70723
                    ? (c >= 70656 && c <= 70721)
                    : c <= 70725)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70849 || (c < 119808
        ? (c < 73027
          ? (c < 72096
            ? (c < 71453
              ? (c < 71168
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71093 || (c < 71128
                    ? (c >= 71096 && c <= 71102)
                    : c <= 71133)))
                : (c <= 71230 || (c < 71296
                  ? (c < 71236
                    ? c == 71232
                    : c <= 71236)
                  : (c <= 71349 || (c < 71424
                    ? c == 71352
                    : c <= 71450)))))
              : (c <= 71466 || (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71736)
                  : (c <= 71903 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 71999
                    ? (c >= 71995 && c <= 71996)
                    : c <= 72002)))))))
            : (c <= 72103 || (c < 72760
              ? (c < 72245
                ? (c < 72161
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72159)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72242)))
                : (c <= 72254 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72343)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))
              : (c <= 72766 || (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? c == 72768
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c >= 73023 && c <= 73025)))))))))
          : (c <= 73027 || (c < 93053
            ? (c < 74880
              ? (c < 73107
                ? (c < 73063
                  ? (c < 73056
                    ? (c >= 73030 && c <= 73031)
                    : c <= 73061)
                  : (c <= 73064 || (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)))
                : (c <= 73110 || (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))))
              : (c <= 75075 || (c < 92784
                ? (c < 82944
                  ? (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)
                  : (c <= 83526 || (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)))
                : (c <= 92862 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)
                  : (c <= 92995 || (c >= 93027 && c <= 93047)))))))
            : (c <= 93071 || (c < 110581
              ? (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94179 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))
              : (c <= 110587 || (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || c == 113822))))))))))
        : (c <= 119892 || (c < 125184
          ? (c < 120598
            ? (c < 120086
              ? (c < 119982
                ? (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c < 119977
                    ? (c >= 119973 && c <= 119974)
                    : c <= 119980)))
                : (c <= 119993 || (c < 120005
                  ? (c < 119997
                    ? c == 119995
                    : c <= 120003)
                  : (c <= 120069 || (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)))))
              : (c <= 120092 || (c < 120146
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || (c < 120138
                    ? c == 120134
                    : c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 122918
              ? (c < 120772
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))
                : (c <= 120779 || (c < 122888
                  ? (c < 122880
                    ? (c >= 122624 && c <= 122654)
                    : c <= 122886)
                  : (c <= 122904 || (c < 122915
                    ? (c >= 122907 && c <= 122913)
                    : c <= 122916)))))
              : (c <= 122922 || (c < 124896
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)))
                : (c <= 124902 || (c < 124912
                  ? (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)
                  : (c <= 124926 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125251 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125259
                    ? c == 125255
                    : c <= 125259)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126635
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c < 126629
                    ? (c >= 126625 && c <= 126627)
                    : c <= 126633)))))
              : (c <= 126651 || (c < 177984
                ? (c < 127344
                  ? (c < 127312
                    ? (c >= 127280 && c <= 127305)
                    : c <= 127337)
                  : (c <= 127369 || (c < 173824
                    ? (c >= 131072 && c <= 173791)
                    : c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_ident_character_set_4(int32_t c) {
  return (c < 42786
    ? (c < 3544
      ? (c < 2654
        ? (c < 1984
          ? (c < 931
            ? (c < 736
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 890
                ? (c < 837
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 837 || (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1519
              ? (c < 1456
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1761
                ? (c < 1625
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1623)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1773 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1855 || (c >= 1869 && c <= 1969)))))))))
          : (c <= 2026 || (c < 2486
            ? (c < 2288
              ? (c < 2144
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2071 || (c < 2112
                    ? (c >= 2074 && c <= 2092)
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c < 2275
                    ? (c >= 2260 && c <= 2271)
                    : c <= 2281)))))
              : (c <= 2363 || (c < 2437
                ? (c < 2389
                  ? (c < 2382
                    ? (c >= 2365 && c <= 2380)
                    : c <= 2384)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2575
              ? (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2493 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2508 || (c < 2519
                    ? c == 2510
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)))))
              : (c <= 2576 || (c < 2622
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)))
                : (c <= 2626 || (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2636)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3072
          ? (c < 2887
            ? (c < 2768
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2764)))))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2812 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))))))
            : (c <= 2888 || (c < 2972
              ? (c < 2929
                ? (c < 2908
                  ? (c < 2902
                    ? (c >= 2891 && c <= 2892)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))))
              : (c <= 2972 || (c < 3014
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))
                : (c <= 3016 || (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3020)
                    : c <= 3024)
                  : (c <= 3031 || (c >= 3046 && c <= 3055)))))))))
          : (c <= 3075 || (c < 3293
            ? (c < 3174
              ? (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3148)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))
              : (c <= 3183 || (c < 3253
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)))
                : (c <= 3257 || (c < 3274
                  ? (c < 3270
                    ? (c >= 3261 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3276 || (c >= 3285 && c <= 3286)))))))
            : (c <= 3294 || (c < 3423
              ? (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3386 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3389 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3404 || (c < 3412
                    ? c == 3406
                    : c <= 3415)))))
              : (c <= 3427 || (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3535
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3540 || c == 3542))))))))))))
      : (c <= 3551 || (c < 7040
        ? (c < 4824
          ? (c < 3976
            ? (c < 3751
              ? (c < 3664
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3661
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3661)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))))
              : (c <= 3769 || (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3771 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? c == 3789
                    : c <= 3801)))
                : (c <= 3807 || (c < 3904
                  ? (c < 3872
                    ? c == 3840
                    : c <= 3881)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3969)))))))
            : (c <= 3991 || (c < 4688
              ? (c < 4256
                ? (c < 4152
                  ? (c < 4096
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4150)
                  : (c <= 4152 || (c < 4176
                    ? (c >= 4155 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))
              : (c <= 4694 || (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 6176
            ? (c < 5919
              ? (c < 5121
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5907)))))
              : (c <= 5939 || (c < 6070
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6067)))
                : (c <= 6088 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6121 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6456)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6617)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6860
                ? (c < 6800
                  ? (c < 6784
                    ? (c >= 6753 && c <= 6772)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6847
                    ? c == 6823
                    : c <= 6848)))
                : (c <= 6862 || (c < 6981
                  ? (c < 6965
                    ? (c >= 6912 && c <= 6963)
                    : c <= 6979)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))))))))
        : (c <= 7081 || (c < 8495
          ? (c < 8031
            ? (c < 7418
              ? (c < 7296
                ? (c < 7168
                  ? (c < 7143
                    ? (c >= 7084 && c <= 7141)
                    : c <= 7153)
                  : (c <= 7222 || (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)))))
              : (c <= 7418 || (c < 8008
                ? (c < 7680
                  ? (c < 7655
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7668)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))))
            : (c <= 8061 || (c < 8319
              ? (c < 8144
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))
                : (c <= 8147 || (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))))
              : (c <= 8319 || (c < 8473
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))))))
          : (c <= 8505 || (c < 11744
            ? (c < 11568
              ? (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 9398
                    ? (c >= 8544 && c <= 8584)
                    : c <= 9449)))
                : (c <= 11492 || (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))))
              : (c <= 11623 || (c < 11704
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))
            : (c <= 11775 || (c < 12704
              ? (c < 12353
                ? (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12329 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))))
              : (c <= 12735 || (c < 42512
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42619)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))))))))))
    : (c <= 42888 || (c < 70784
      ? (c < 66964
        ? (c < 64298
          ? (c < 43642
            ? (c < 43259
              ? (c < 43015
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43013)))
                : (c <= 43047 || (c < 43205
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43203)
                  : (c <= 43205 || (c < 43250
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43306)
                    : c <= 43346)
                  : (c <= 43388 || (c < 43444
                    ? (c >= 43392 && c <= 43442)
                    : c <= 43455)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)))))))
            : (c <= 43710 || (c < 43868
              ? (c < 43777
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43765)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))))
              : (c <= 43881 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64296)))))))))
          : (c <= 64310 || (c < 65596
            ? (c < 65296
              ? (c < 64467
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))))
              : (c <= 65305 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66504
              ? (c < 66208
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66426 || (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66720
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66729 || (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69415
          ? (c < 67968
            ? (c < 67592
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))))
              : (c <= 67592 || (c < 67712
                ? (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68416
              ? (c < 68121
                ? (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))))
              : (c <= 68437 || (c < 68864
                ? (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)))
                : (c <= 68903 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))))))))
          : (c <= 69415 || (c < 70272
            ? (c < 69968
              ? (c < 69745
                ? (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69701)))
                : (c <= 69749 || (c < 69840
                  ? (c < 69826
                    ? (c >= 69762 && c <= 69816)
                    : c <= 69826)
                  : (c <= 69864 || (c < 69956
                    ? (c >= 69888 && c <= 69938)
                    : c <= 69959)))))
              : (c <= 70002 || (c < 70108
                ? (c < 70081
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70079)
                  : (c <= 70084 || (c < 70106
                    ? (c >= 70094 && c <= 70095)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70199
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70196)
                  : (c <= 70199 || c == 70206))))))
            : (c <= 70278 || (c < 70453
              ? (c < 70400
                ? (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70376)))
                : (c <= 70403 || (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)))))
              : (c <= 70457 || (c < 70493
                ? (c < 70475
                  ? (c < 70471
                    ? (c >= 70461 && c <= 70468)
                    : c <= 70472)
                  : (c <= 70476 || (c < 70487
                    ? c == 70480
                    : c <= 70487)))
                : (c <= 70499 || (c < 70727
                  ? (c < 70723
                    ? (c >= 70656 && c <= 70721)
                    : c <= 70725)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70849 || (c < 119808
        ? (c < 73027
          ? (c < 72096
            ? (c < 71453
              ? (c < 71168
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71093 || (c < 71128
                    ? (c >= 71096 && c <= 71102)
                    : c <= 71133)))
                : (c <= 71230 || (c < 71296
                  ? (c < 71236
                    ? c == 71232
                    : c <= 71236)
                  : (c <= 71349 || (c < 71424
                    ? c == 71352
                    : c <= 71450)))))
              : (c <= 71466 || (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71736)
                  : (c <= 71903 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 71999
                    ? (c >= 71995 && c <= 71996)
                    : c <= 72002)))))))
            : (c <= 72103 || (c < 72760
              ? (c < 72245
                ? (c < 72161
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72159)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72242)))
                : (c <= 72254 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72343)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))
              : (c <= 72766 || (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? c == 72768
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c >= 73023 && c <= 73025)))))))))
          : (c <= 73027 || (c < 93053
            ? (c < 74880
              ? (c < 73107
                ? (c < 73063
                  ? (c < 73056
                    ? (c >= 73030 && c <= 73031)
                    : c <= 73061)
                  : (c <= 73064 || (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)))
                : (c <= 73110 || (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))))
              : (c <= 75075 || (c < 92784
                ? (c < 82944
                  ? (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)
                  : (c <= 83526 || (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)))
                : (c <= 92862 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)
                  : (c <= 92995 || (c >= 93027 && c <= 93047)))))))
            : (c <= 93071 || (c < 110581
              ? (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94179 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))
              : (c <= 110587 || (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || c == 113822))))))))))
        : (c <= 119892 || (c < 125184
          ? (c < 120598
            ? (c < 120086
              ? (c < 119982
                ? (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c < 119977
                    ? (c >= 119973 && c <= 119974)
                    : c <= 119980)))
                : (c <= 119993 || (c < 120005
                  ? (c < 119997
                    ? c == 119995
                    : c <= 120003)
                  : (c <= 120069 || (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)))))
              : (c <= 120092 || (c < 120146
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || (c < 120138
                    ? c == 120134
                    : c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 122918
              ? (c < 120772
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))
                : (c <= 120779 || (c < 122888
                  ? (c < 122880
                    ? (c >= 122624 && c <= 122654)
                    : c <= 122886)
                  : (c <= 122904 || (c < 122915
                    ? (c >= 122907 && c <= 122913)
                    : c <= 122916)))))
              : (c <= 122922 || (c < 124896
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)))
                : (c <= 124902 || (c < 124912
                  ? (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)
                  : (c <= 124926 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125251 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125259
                    ? c == 125255
                    : c <= 125259)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126635
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c < 126629
                    ? (c >= 126625 && c <= 126627)
                    : c <= 126633)))))
              : (c <= 126651 || (c < 177984
                ? (c < 127344
                  ? (c < 127312
                    ? (c >= 127280 && c <= 127305)
                    : c <= 127337)
                  : (c <= 127369 || (c < 173824
                    ? (c >= 131072 && c <= 173791)
                    : c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_ident_character_set_5(int32_t c) {
  return (c < 42786
    ? (c < 3544
      ? (c < 2654
        ? (c < 1984
          ? (c < 931
            ? (c < 736
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'y')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 890
                ? (c < 837
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 837 || (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1519
              ? (c < 1456
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1761
                ? (c < 1625
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1623)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1773 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1855 || (c >= 1869 && c <= 1969)))))))))
          : (c <= 2026 || (c < 2486
            ? (c < 2288
              ? (c < 2144
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2071 || (c < 2112
                    ? (c >= 2074 && c <= 2092)
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c < 2275
                    ? (c >= 2260 && c <= 2271)
                    : c <= 2281)))))
              : (c <= 2363 || (c < 2437
                ? (c < 2389
                  ? (c < 2382
                    ? (c >= 2365 && c <= 2380)
                    : c <= 2384)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2575
              ? (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2493 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2508 || (c < 2519
                    ? c == 2510
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)))))
              : (c <= 2576 || (c < 2622
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)))
                : (c <= 2626 || (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2636)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3072
          ? (c < 2887
            ? (c < 2768
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2764)))))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2812 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))))))
            : (c <= 2888 || (c < 2972
              ? (c < 2929
                ? (c < 2908
                  ? (c < 2902
                    ? (c >= 2891 && c <= 2892)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))))
              : (c <= 2972 || (c < 3014
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))
                : (c <= 3016 || (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3020)
                    : c <= 3024)
                  : (c <= 3031 || (c >= 3046 && c <= 3055)))))))))
          : (c <= 3075 || (c < 3293
            ? (c < 3174
              ? (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3148)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))
              : (c <= 3183 || (c < 3253
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)))
                : (c <= 3257 || (c < 3274
                  ? (c < 3270
                    ? (c >= 3261 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3276 || (c >= 3285 && c <= 3286)))))))
            : (c <= 3294 || (c < 3423
              ? (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3386 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3389 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3404 || (c < 3412
                    ? c == 3406
                    : c <= 3415)))))
              : (c <= 3427 || (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3535
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3540 || c == 3542))))))))))))
      : (c <= 3551 || (c < 7040
        ? (c < 4824
          ? (c < 3976
            ? (c < 3751
              ? (c < 3664
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3661
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3661)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))))
              : (c <= 3769 || (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3771 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? c == 3789
                    : c <= 3801)))
                : (c <= 3807 || (c < 3904
                  ? (c < 3872
                    ? c == 3840
                    : c <= 3881)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3969)))))))
            : (c <= 3991 || (c < 4688
              ? (c < 4256
                ? (c < 4152
                  ? (c < 4096
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4150)
                  : (c <= 4152 || (c < 4176
                    ? (c >= 4155 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))
              : (c <= 4694 || (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 6176
            ? (c < 5919
              ? (c < 5121
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5907)))))
              : (c <= 5939 || (c < 6070
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6067)))
                : (c <= 6088 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6121 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6456)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6617)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6860
                ? (c < 6800
                  ? (c < 6784
                    ? (c >= 6753 && c <= 6772)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6847
                    ? c == 6823
                    : c <= 6848)))
                : (c <= 6862 || (c < 6981
                  ? (c < 6965
                    ? (c >= 6912 && c <= 6963)
                    : c <= 6979)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))))))))
        : (c <= 7081 || (c < 8495
          ? (c < 8031
            ? (c < 7418
              ? (c < 7296
                ? (c < 7168
                  ? (c < 7143
                    ? (c >= 7084 && c <= 7141)
                    : c <= 7153)
                  : (c <= 7222 || (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)))))
              : (c <= 7418 || (c < 8008
                ? (c < 7680
                  ? (c < 7655
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7668)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))))
            : (c <= 8061 || (c < 8319
              ? (c < 8144
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))
                : (c <= 8147 || (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))))
              : (c <= 8319 || (c < 8473
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))))))
          : (c <= 8505 || (c < 11744
            ? (c < 11568
              ? (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 9398
                    ? (c >= 8544 && c <= 8584)
                    : c <= 9449)))
                : (c <= 11492 || (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))))
              : (c <= 11623 || (c < 11704
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))
            : (c <= 11775 || (c < 12704
              ? (c < 12353
                ? (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12329 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))))
              : (c <= 12735 || (c < 42512
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42619)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))))))))))
    : (c <= 42888 || (c < 70784
      ? (c < 66964
        ? (c < 64298
          ? (c < 43642
            ? (c < 43259
              ? (c < 43015
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43013)))
                : (c <= 43047 || (c < 43205
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43203)
                  : (c <= 43205 || (c < 43250
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43306)
                    : c <= 43346)
                  : (c <= 43388 || (c < 43444
                    ? (c >= 43392 && c <= 43442)
                    : c <= 43455)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)))))))
            : (c <= 43710 || (c < 43868
              ? (c < 43777
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43765)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))))
              : (c <= 43881 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64296)))))))))
          : (c <= 64310 || (c < 65596
            ? (c < 65296
              ? (c < 64467
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))))
              : (c <= 65305 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66504
              ? (c < 66208
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66426 || (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66720
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66729 || (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69415
          ? (c < 67968
            ? (c < 67592
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))))
              : (c <= 67592 || (c < 67712
                ? (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68416
              ? (c < 68121
                ? (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))))
              : (c <= 68437 || (c < 68864
                ? (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)))
                : (c <= 68903 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))))))))
          : (c <= 69415 || (c < 70272
            ? (c < 69968
              ? (c < 69745
                ? (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69701)))
                : (c <= 69749 || (c < 69840
                  ? (c < 69826
                    ? (c >= 69762 && c <= 69816)
                    : c <= 69826)
                  : (c <= 69864 || (c < 69956
                    ? (c >= 69888 && c <= 69938)
                    : c <= 69959)))))
              : (c <= 70002 || (c < 70108
                ? (c < 70081
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70079)
                  : (c <= 70084 || (c < 70106
                    ? (c >= 70094 && c <= 70095)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70199
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70196)
                  : (c <= 70199 || c == 70206))))))
            : (c <= 70278 || (c < 70453
              ? (c < 70400
                ? (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70376)))
                : (c <= 70403 || (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)))))
              : (c <= 70457 || (c < 70493
                ? (c < 70475
                  ? (c < 70471
                    ? (c >= 70461 && c <= 70468)
                    : c <= 70472)
                  : (c <= 70476 || (c < 70487
                    ? c == 70480
                    : c <= 70487)))
                : (c <= 70499 || (c < 70727
                  ? (c < 70723
                    ? (c >= 70656 && c <= 70721)
                    : c <= 70725)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70849 || (c < 119808
        ? (c < 73027
          ? (c < 72096
            ? (c < 71453
              ? (c < 71168
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71093 || (c < 71128
                    ? (c >= 71096 && c <= 71102)
                    : c <= 71133)))
                : (c <= 71230 || (c < 71296
                  ? (c < 71236
                    ? c == 71232
                    : c <= 71236)
                  : (c <= 71349 || (c < 71424
                    ? c == 71352
                    : c <= 71450)))))
              : (c <= 71466 || (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71736)
                  : (c <= 71903 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 71999
                    ? (c >= 71995 && c <= 71996)
                    : c <= 72002)))))))
            : (c <= 72103 || (c < 72760
              ? (c < 72245
                ? (c < 72161
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72159)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72242)))
                : (c <= 72254 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72343)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))
              : (c <= 72766 || (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? c == 72768
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c >= 73023 && c <= 73025)))))))))
          : (c <= 73027 || (c < 93053
            ? (c < 74880
              ? (c < 73107
                ? (c < 73063
                  ? (c < 73056
                    ? (c >= 73030 && c <= 73031)
                    : c <= 73061)
                  : (c <= 73064 || (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)))
                : (c <= 73110 || (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))))
              : (c <= 75075 || (c < 92784
                ? (c < 82944
                  ? (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)
                  : (c <= 83526 || (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)))
                : (c <= 92862 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)
                  : (c <= 92995 || (c >= 93027 && c <= 93047)))))))
            : (c <= 93071 || (c < 110581
              ? (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94179 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))
              : (c <= 110587 || (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || c == 113822))))))))))
        : (c <= 119892 || (c < 125184
          ? (c < 120598
            ? (c < 120086
              ? (c < 119982
                ? (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c < 119977
                    ? (c >= 119973 && c <= 119974)
                    : c <= 119980)))
                : (c <= 119993 || (c < 120005
                  ? (c < 119997
                    ? c == 119995
                    : c <= 120003)
                  : (c <= 120069 || (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)))))
              : (c <= 120092 || (c < 120146
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || (c < 120138
                    ? c == 120134
                    : c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 122918
              ? (c < 120772
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))
                : (c <= 120779 || (c < 122888
                  ? (c < 122880
                    ? (c >= 122624 && c <= 122654)
                    : c <= 122886)
                  : (c <= 122904 || (c < 122915
                    ? (c >= 122907 && c <= 122913)
                    : c <= 122916)))))
              : (c <= 122922 || (c < 124896
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)))
                : (c <= 124902 || (c < 124912
                  ? (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)
                  : (c <= 124926 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125251 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125259
                    ? c == 125255
                    : c <= 125259)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126635
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c < 126629
                    ? (c >= 126625 && c <= 126627)
                    : c <= 126633)))))
              : (c <= 126651 || (c < 177984
                ? (c < 127344
                  ? (c < 127312
                    ? (c >= 127280 && c <= 127305)
                    : c <= 127337)
                  : (c <= 127369 || (c < 173824
                    ? (c >= 131072 && c <= 173791)
                    : c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '}') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (anon_sym_BANG_character_set_1(lookahead)) SKIP(0)
      if (sym_ident_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 't') ADVANCE(57);
      if (anon_sym_BANG_character_set_1(lookahead)) SKIP(1)
      if (sym_ident_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(14);
      if (anon_sym_BANG_character_set_1(lookahead)) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (anon_sym_BANG_character_set_1(lookahead)) SKIP(4)
      if (sym_ident_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(23);
      if (anon_sym_BANG_character_set_1(lookahead)) SKIP(5)
      if (aux_sym_codePoint_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'z') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 19:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(33);
      if (anon_sym_BANG_character_set_1(lookahead)) SKIP(19)
      if (sym_ident_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '|') ADVANCE(33);
      if (anon_sym_BANG_character_set_1(lookahead)) SKIP(20)
      if (sym_ident_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '|') ADVANCE(33);
      if (anon_sym_BANG_character_set_1(lookahead)) SKIP(21)
      if (sym_ident_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_enable);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_disable);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_unicode);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_unicode);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_lazy);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_greedy);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_atomic);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_n);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_r);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_t);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_a);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_f);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_regex);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_range);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_U);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_codePoint_token1);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(107);
      if (sym_ident_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(112);
      if (sym_ident_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(78);
      if (sym_ident_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(92);
      if (sym_ident_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(79);
      if (sym_ident_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(97);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(98);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(104);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(48);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(111);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(87);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(107);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(82);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(28);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(30);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(109);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(69);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(27);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(85);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(88);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(89);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(106);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(80);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(81);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(86);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(90);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(96);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(95);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(93);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(77);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(99);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(83);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(91);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(75);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(24);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(103);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(64);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(32);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(43);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'z') ADVANCE(110);
      if (sym_ident_character_set_5(lookahead)) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_disable] = ACTIONS(1),
    [anon_sym_unicode] = ACTIONS(1),
    [anon_sym_lazy] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_greedy] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(93),
    [sym_expr] = STATE(92),
    [sym_stmt] = STATE(4),
    [sym_letDecl] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_modifierKw] = STATE(77),
    [sym_orExpr] = STATE(50),
    [sym_alternatives] = STATE(48),
    [sym_alternative] = STATE(70),
    [sym_fixExpr] = STATE(8),
    [sym_lookaroundExpr] = STATE(51),
    [sym_lookaroundPrefix] = STATE(3),
    [sym_repetitionExpr] = STATE(51),
    [sym_atomExpr] = STATE(15),
    [sym_group] = STATE(17),
    [sym_groupKind] = STATE(96),
    [sym_charSet] = STATE(17),
    [sym_inlineRegex] = STATE(17),
    [sym_boundary] = STATE(17),
    [sym_reference] = STATE(17),
    [sym_numberRange] = STATE(17),
    [sym_codePoint] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_alternative_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_enable] = ACTIONS(9),
    [anon_sym_disable] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_atomic] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_regex] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_COLON_COLON] = ACTIONS(31),
    [anon_sym_range] = ACTIONS(33),
    [anon_sym_U] = ACTIONS(35),
    [sym_ident] = ACTIONS(37),
    [aux_sym_string_token1] = ACTIONS(39),
    [aux_sym_string_token2] = ACTIONS(39),
  },
  [2] = {
    [sym_expr] = STATE(53),
    [sym_stmt] = STATE(2),
    [sym_letDecl] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_modifierKw] = STATE(77),
    [sym_orExpr] = STATE(50),
    [sym_alternatives] = STATE(48),
    [sym_alternative] = STATE(42),
    [sym_fixExpr] = STATE(9),
    [sym_lookaroundExpr] = STATE(51),
    [sym_lookaroundPrefix] = STATE(3),
    [sym_repetitionExpr] = STATE(51),
    [sym_atomExpr] = STATE(15),
    [sym_group] = STATE(17),
    [sym_groupKind] = STATE(96),
    [sym_charSet] = STATE(17),
    [sym_inlineRegex] = STATE(17),
    [sym_boundary] = STATE(17),
    [sym_reference] = STATE(17),
    [sym_numberRange] = STATE(17),
    [sym_codePoint] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_alternative_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_enable] = ACTIONS(9),
    [anon_sym_disable] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(46),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_GT_GT] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_atomic] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_regex] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_range] = ACTIONS(76),
    [anon_sym_U] = ACTIONS(79),
    [sym_ident] = ACTIONS(82),
    [aux_sym_string_token1] = ACTIONS(85),
    [aux_sym_string_token2] = ACTIONS(85),
  },
  [3] = {
    [sym_expr] = STATE(52),
    [sym_stmt] = STATE(2),
    [sym_letDecl] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_modifierKw] = STATE(77),
    [sym_orExpr] = STATE(50),
    [sym_alternatives] = STATE(48),
    [sym_alternative] = STATE(42),
    [sym_fixExpr] = STATE(9),
    [sym_lookaroundExpr] = STATE(51),
    [sym_lookaroundPrefix] = STATE(3),
    [sym_repetitionExpr] = STATE(51),
    [sym_atomExpr] = STATE(15),
    [sym_group] = STATE(17),
    [sym_groupKind] = STATE(96),
    [sym_charSet] = STATE(17),
    [sym_inlineRegex] = STATE(17),
    [sym_boundary] = STATE(17),
    [sym_reference] = STATE(17),
    [sym_numberRange] = STATE(17),
    [sym_codePoint] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_alternative_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_enable] = ACTIONS(9),
    [anon_sym_disable] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_atomic] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_regex] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_COLON_COLON] = ACTIONS(31),
    [anon_sym_range] = ACTIONS(33),
    [anon_sym_U] = ACTIONS(35),
    [sym_ident] = ACTIONS(37),
    [aux_sym_string_token1] = ACTIONS(39),
    [aux_sym_string_token2] = ACTIONS(39),
  },
  [4] = {
    [sym_expr] = STATE(53),
    [sym_stmt] = STATE(4),
    [sym_letDecl] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_modifierKw] = STATE(77),
    [sym_orExpr] = STATE(50),
    [sym_alternatives] = STATE(48),
    [sym_alternative] = STATE(70),
    [sym_fixExpr] = STATE(8),
    [sym_lookaroundExpr] = STATE(51),
    [sym_lookaroundPrefix] = STATE(3),
    [sym_repetitionExpr] = STATE(51),
    [sym_atomExpr] = STATE(15),
    [sym_group] = STATE(17),
    [sym_groupKind] = STATE(96),
    [sym_charSet] = STATE(17),
    [sym_inlineRegex] = STATE(17),
    [sym_boundary] = STATE(17),
    [sym_reference] = STATE(17),
    [sym_numberRange] = STATE(17),
    [sym_codePoint] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_alternative_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_enable] = ACTIONS(9),
    [anon_sym_disable] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_atomic] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_regex] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_COLON_COLON] = ACTIONS(31),
    [anon_sym_range] = ACTIONS(33),
    [anon_sym_U] = ACTIONS(35),
    [sym_ident] = ACTIONS(37),
    [aux_sym_string_token1] = ACTIONS(39),
    [aux_sym_string_token2] = ACTIONS(39),
  },
  [5] = {
    [sym_expr] = STATE(88),
    [sym_stmt] = STATE(4),
    [sym_letDecl] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_modifierKw] = STATE(77),
    [sym_orExpr] = STATE(50),
    [sym_alternatives] = STATE(48),
    [sym_alternative] = STATE(70),
    [sym_fixExpr] = STATE(8),
    [sym_lookaroundExpr] = STATE(51),
    [sym_lookaroundPrefix] = STATE(3),
    [sym_repetitionExpr] = STATE(51),
    [sym_atomExpr] = STATE(15),
    [sym_group] = STATE(17),
    [sym_groupKind] = STATE(96),
    [sym_charSet] = STATE(17),
    [sym_inlineRegex] = STATE(17),
    [sym_boundary] = STATE(17),
    [sym_reference] = STATE(17),
    [sym_numberRange] = STATE(17),
    [sym_codePoint] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_alternative_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_enable] = ACTIONS(9),
    [anon_sym_disable] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_atomic] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_regex] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_COLON_COLON] = ACTIONS(31),
    [anon_sym_range] = ACTIONS(33),
    [anon_sym_U] = ACTIONS(35),
    [sym_ident] = ACTIONS(37),
    [aux_sym_string_token1] = ACTIONS(39),
    [aux_sym_string_token2] = ACTIONS(39),
  },
  [6] = {
    [sym_expr] = STATE(94),
    [sym_stmt] = STATE(4),
    [sym_letDecl] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_modifierKw] = STATE(77),
    [sym_orExpr] = STATE(50),
    [sym_alternatives] = STATE(48),
    [sym_alternative] = STATE(70),
    [sym_fixExpr] = STATE(8),
    [sym_lookaroundExpr] = STATE(51),
    [sym_lookaroundPrefix] = STATE(3),
    [sym_repetitionExpr] = STATE(51),
    [sym_atomExpr] = STATE(15),
    [sym_group] = STATE(17),
    [sym_groupKind] = STATE(96),
    [sym_charSet] = STATE(17),
    [sym_inlineRegex] = STATE(17),
    [sym_boundary] = STATE(17),
    [sym_reference] = STATE(17),
    [sym_numberRange] = STATE(17),
    [sym_codePoint] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_alternative_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_enable] = ACTIONS(9),
    [anon_sym_disable] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_atomic] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_regex] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_COLON_COLON] = ACTIONS(31),
    [anon_sym_range] = ACTIONS(33),
    [anon_sym_U] = ACTIONS(35),
    [sym_ident] = ACTIONS(37),
    [aux_sym_string_token1] = ACTIONS(39),
    [aux_sym_string_token2] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym_atomic,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_regex,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      anon_sym_U,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      sym_lookaroundPrefix,
    STATE(15), 1,
      sym_atomExpr,
    STATE(48), 1,
      sym_alternatives,
    STATE(70), 1,
      sym_alternative,
    STATE(96), 1,
      sym_groupKind,
    STATE(103), 1,
      sym_orExpr,
    ACTIONS(15), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(8), 2,
      sym_fixExpr,
      aux_sym_alternative_repeat1,
    STATE(51), 2,
      sym_lookaroundExpr,
      sym_repetitionExpr,
    ACTIONS(29), 3,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
    STATE(17), 8,
      sym_group,
      sym_charSet,
      sym_inlineRegex,
      sym_boundary,
      sym_reference,
      sym_numberRange,
      sym_codePoint,
      sym_string,
  [92] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym_atomic,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_regex,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      anon_sym_U,
    ACTIONS(37), 1,
      sym_ident,
    STATE(3), 1,
      sym_lookaroundPrefix,
    STATE(15), 1,
      sym_atomExpr,
    STATE(96), 1,
      sym_groupKind,
    ACTIONS(15), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(10), 2,
      sym_fixExpr,
      aux_sym_alternative_repeat1,
    STATE(51), 2,
      sym_lookaroundExpr,
      sym_repetitionExpr,
    ACTIONS(29), 3,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    STATE(17), 8,
      sym_group,
      sym_charSet,
      sym_inlineRegex,
      sym_boundary,
      sym_reference,
      sym_numberRange,
      sym_codePoint,
      sym_string,
  [175] = 9,
    ACTIONS(3), 1,
      sym_comment,
    STATE(3), 1,
      sym_lookaroundPrefix,
    STATE(15), 1,
      sym_atomExpr,
    STATE(96), 1,
      sym_groupKind,
    STATE(10), 2,
      sym_fixExpr,
      aux_sym_alternative_repeat1,
    STATE(51), 2,
      sym_lookaroundExpr,
      sym_repetitionExpr,
    ACTIONS(100), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    STATE(17), 8,
      sym_group,
      sym_charSet,
      sym_inlineRegex,
      sym_boundary,
      sym_reference,
      sym_numberRange,
      sym_codePoint,
      sym_string,
    ACTIONS(98), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [232] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(119), 1,
      anon_sym_atomic,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_regex,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    ACTIONS(134), 1,
      anon_sym_range,
    ACTIONS(137), 1,
      anon_sym_U,
    ACTIONS(140), 1,
      sym_ident,
    STATE(3), 1,
      sym_lookaroundPrefix,
    STATE(15), 1,
      sym_atomExpr,
    STATE(96), 1,
      sym_groupKind,
    ACTIONS(107), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(143), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(10), 2,
      sym_fixExpr,
      aux_sym_alternative_repeat1,
    STATE(51), 2,
      sym_lookaroundExpr,
      sym_repetitionExpr,
    ACTIONS(128), 3,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    STATE(17), 8,
      sym_group,
      sym_charSet,
      sym_inlineRegex,
      sym_boundary,
      sym_reference,
      sym_numberRange,
      sym_codePoint,
      sym_string,
  [315] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym_atomic,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_regex,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      anon_sym_U,
    ACTIONS(37), 1,
      sym_ident,
    STATE(3), 1,
      sym_lookaroundPrefix,
    STATE(15), 1,
      sym_atomExpr,
    STATE(49), 1,
      sym_alternatives,
    STATE(70), 1,
      sym_alternative,
    STATE(96), 1,
      sym_groupKind,
    ACTIONS(15), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(8), 2,
      sym_fixExpr,
      aux_sym_alternative_repeat1,
    STATE(51), 2,
      sym_lookaroundExpr,
      sym_repetitionExpr,
    ACTIONS(29), 3,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
    STATE(17), 8,
      sym_group,
      sym_charSet,
      sym_inlineRegex,
      sym_boundary,
      sym_reference,
      sym_numberRange,
      sym_codePoint,
      sym_string,
  [398] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym_atomic,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_regex,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      anon_sym_U,
    ACTIONS(37), 1,
      sym_ident,
    STATE(3), 1,
      sym_lookaroundPrefix,
    STATE(15), 1,
      sym_atomExpr,
    STATE(42), 1,
      sym_alternative,
    STATE(49), 1,
      sym_alternatives,
    STATE(96), 1,
      sym_groupKind,
    ACTIONS(15), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(9), 2,
      sym_fixExpr,
      aux_sym_alternative_repeat1,
    STATE(51), 2,
      sym_lookaroundExpr,
      sym_repetitionExpr,
    ACTIONS(29), 3,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
    STATE(17), 8,
      sym_group,
      sym_charSet,
      sym_inlineRegex,
      sym_boundary,
      sym_reference,
      sym_numberRange,
      sym_codePoint,
      sym_string,
  [481] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym_atomic,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_regex,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      anon_sym_U,
    ACTIONS(37), 1,
      sym_ident,
    STATE(3), 1,
      sym_lookaroundPrefix,
    STATE(15), 1,
      sym_atomExpr,
    STATE(47), 1,
      sym_alternative,
    STATE(96), 1,
      sym_groupKind,
    ACTIONS(15), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(9), 2,
      sym_fixExpr,
      aux_sym_alternative_repeat1,
    STATE(51), 2,
      sym_lookaroundExpr,
      sym_repetitionExpr,
    ACTIONS(29), 3,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
    STATE(17), 8,
      sym_group,
      sym_charSet,
      sym_inlineRegex,
      sym_boundary,
      sym_reference,
      sym_numberRange,
      sym_codePoint,
      sym_string,
  [561] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym_atomic,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_regex,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      anon_sym_U,
    ACTIONS(37), 1,
      sym_ident,
    STATE(3), 1,
      sym_lookaroundPrefix,
    STATE(15), 1,
      sym_atomExpr,
    STATE(47), 1,
      sym_alternative,
    STATE(96), 1,
      sym_groupKind,
    ACTIONS(15), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(8), 2,
      sym_fixExpr,
      aux_sym_alternative_repeat1,
    STATE(51), 2,
      sym_lookaroundExpr,
      sym_repetitionExpr,
    ACTIONS(29), 3,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
    STATE(17), 8,
      sym_group,
      sym_charSet,
      sym_inlineRegex,
      sym_boundary,
      sym_reference,
      sym_numberRange,
      sym_codePoint,
      sym_string,
  [641] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_repetitionCount,
    STATE(40), 1,
      sym_repetitionBraces,
    STATE(45), 1,
      sym_repetitionSuffix,
    ACTIONS(148), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(152), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(146), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(154), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(158), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(162), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(166), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(170), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(174), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(178), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(182), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(186), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(190), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(194), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(198), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(202), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(206), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 9,
      anon_sym_let,
      anon_sym_enable,
      anon_sym_disable,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(210), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 9,
      anon_sym_let,
      anon_sym_enable,
      anon_sym_disable,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(214), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 9,
      anon_sym_let,
      anon_sym_enable,
      anon_sym_disable,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(218), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 9,
      anon_sym_let,
      anon_sym_enable,
      anon_sym_disable,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(222), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 9,
      anon_sym_let,
      anon_sym_enable,
      anon_sym_disable,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(226), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym_quantifier,
    ACTIONS(232), 2,
      anon_sym_lazy,
      anon_sym_greedy,
    ACTIONS(234), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(230), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 9,
      anon_sym_let,
      anon_sym_enable,
      anon_sym_disable,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(236), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 8,
      anon_sym_lazy,
      anon_sym_greedy,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(240), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 8,
      anon_sym_lazy,
      anon_sym_greedy,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(244), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 8,
      anon_sym_lazy,
      anon_sym_greedy,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(248), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 8,
      anon_sym_lazy,
      anon_sym_greedy,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(252), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(261), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(256), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(265), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(263), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(269), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(267), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(271), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(275), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(279), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(256), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(283), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(287), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(41), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(293), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(297), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 6,
      anon_sym_COLON,
      anon_sym_atomic,
      anon_sym_regex,
      anon_sym_range,
      anon_sym_U,
      sym_ident,
    ACTIONS(301), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BANG,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_COLON_COLON,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1929] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_BANG,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    ACTIONS(311), 1,
      anon_sym_U,
    ACTIONS(313), 1,
      sym_ident,
    STATE(61), 1,
      sym_codePoint,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_range,
    STATE(86), 1,
      sym_singleChar,
    ACTIONS(315), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(55), 2,
      sym_charSetInner,
      aux_sym_charSet_repeat1,
    STATE(62), 2,
      sym_nonPrintable,
      sym_stringOneChar,
    ACTIONS(309), 6,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
  [1977] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_BANG,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    ACTIONS(325), 1,
      anon_sym_U,
    ACTIONS(328), 1,
      sym_ident,
    STATE(61), 1,
      sym_codePoint,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_range,
    STATE(86), 1,
      sym_singleChar,
    ACTIONS(331), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(55), 2,
      sym_charSetInner,
      aux_sym_charSet_repeat1,
    STATE(62), 2,
      sym_nonPrintable,
      sym_stringOneChar,
    ACTIONS(322), 6,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
  [2025] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_BANG,
    ACTIONS(311), 1,
      anon_sym_U,
    ACTIONS(313), 1,
      sym_ident,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_codePoint,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_range,
    STATE(86), 1,
      sym_singleChar,
    ACTIONS(315), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(55), 2,
      sym_charSetInner,
      aux_sym_charSet_repeat1,
    STATE(62), 2,
      sym_nonPrintable,
      sym_stringOneChar,
    ACTIONS(309), 6,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
  [2073] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_BANG,
    ACTIONS(311), 1,
      anon_sym_U,
    ACTIONS(313), 1,
      sym_ident,
    STATE(61), 1,
      sym_codePoint,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_range,
    STATE(86), 1,
      sym_singleChar,
    ACTIONS(315), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(56), 2,
      sym_charSetInner,
      aux_sym_charSet_repeat1,
    STATE(62), 2,
      sym_nonPrintable,
      sym_stringOneChar,
    ACTIONS(309), 6,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
  [2118] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_BANG,
    ACTIONS(311), 1,
      anon_sym_U,
    ACTIONS(313), 1,
      sym_ident,
    STATE(61), 1,
      sym_codePoint,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_range,
    STATE(86), 1,
      sym_singleChar,
    ACTIONS(315), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(54), 2,
      sym_charSetInner,
      aux_sym_charSet_repeat1,
    STATE(62), 2,
      sym_nonPrintable,
      sym_stringOneChar,
    ACTIONS(309), 6,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
  [2163] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_U,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_singleChar,
    ACTIONS(315), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(62), 3,
      sym_nonPrintable,
      sym_codePoint,
      sym_stringOneChar,
    ACTIONS(336), 6,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
  [2193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_BANG,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(156), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DASH,
    ACTIONS(340), 4,
      anon_sym_BANG,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(344), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_BANG,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(346), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(340), 4,
      anon_sym_BANG,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(344), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_BANG,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(352), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_BANG,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(200), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_BANG,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(344), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 4,
      anon_sym_BANG,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(354), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_BANG,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(358), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 4,
      anon_sym_BANG,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(362), 8,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_a,
      anon_sym_e,
      anon_sym_f,
      anon_sym_U,
      sym_ident,
  [2403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(256), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(105), 1,
      sym_sign,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      sym_ident,
      sym_number,
  [2463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      anon_sym_PERCENT,
    ACTIONS(373), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_string,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(102), 1,
      sym_string,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(98), 1,
      sym_boolSetting,
    ACTIONS(379), 2,
      anon_sym_unicode,
      anon_sym_lazy,
  [2510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym_string,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 1,
      sym_number,
  [2531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      sym_number,
  [2541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
  [2551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_unicode,
      anon_sym_lazy,
  [2559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      sym_ident,
  [2569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      sym_number,
  [2579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_PLUS,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DASH,
  [2593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_EQ,
  [2600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
  [2607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
  [2614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_ident,
  [2621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
  [2628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
  [2635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
  [2642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [2649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
  [2656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
  [2663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_ident,
  [2670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SEMI,
  [2677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [2684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      aux_sym_codePoint_token1,
  [2691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
  [2698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_DASH,
  [2705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_SEMI,
  [2712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_codePoint_token1,
  [2719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_number,
  [2726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_number,
  [2733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_PLUS,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 315,
  [SMALL_STATE(12)] = 398,
  [SMALL_STATE(13)] = 481,
  [SMALL_STATE(14)] = 561,
  [SMALL_STATE(15)] = 641,
  [SMALL_STATE(16)] = 688,
  [SMALL_STATE(17)] = 723,
  [SMALL_STATE(18)] = 757,
  [SMALL_STATE(19)] = 791,
  [SMALL_STATE(20)] = 825,
  [SMALL_STATE(21)] = 859,
  [SMALL_STATE(22)] = 893,
  [SMALL_STATE(23)] = 927,
  [SMALL_STATE(24)] = 961,
  [SMALL_STATE(25)] = 995,
  [SMALL_STATE(26)] = 1029,
  [SMALL_STATE(27)] = 1063,
  [SMALL_STATE(28)] = 1097,
  [SMALL_STATE(29)] = 1131,
  [SMALL_STATE(30)] = 1165,
  [SMALL_STATE(31)] = 1198,
  [SMALL_STATE(32)] = 1231,
  [SMALL_STATE(33)] = 1264,
  [SMALL_STATE(34)] = 1297,
  [SMALL_STATE(35)] = 1330,
  [SMALL_STATE(36)] = 1367,
  [SMALL_STATE(37)] = 1400,
  [SMALL_STATE(38)] = 1432,
  [SMALL_STATE(39)] = 1464,
  [SMALL_STATE(40)] = 1496,
  [SMALL_STATE(41)] = 1528,
  [SMALL_STATE(42)] = 1563,
  [SMALL_STATE(43)] = 1596,
  [SMALL_STATE(44)] = 1629,
  [SMALL_STATE(45)] = 1659,
  [SMALL_STATE(46)] = 1689,
  [SMALL_STATE(47)] = 1719,
  [SMALL_STATE(48)] = 1749,
  [SMALL_STATE(49)] = 1779,
  [SMALL_STATE(50)] = 1809,
  [SMALL_STATE(51)] = 1839,
  [SMALL_STATE(52)] = 1869,
  [SMALL_STATE(53)] = 1899,
  [SMALL_STATE(54)] = 1929,
  [SMALL_STATE(55)] = 1977,
  [SMALL_STATE(56)] = 2025,
  [SMALL_STATE(57)] = 2073,
  [SMALL_STATE(58)] = 2118,
  [SMALL_STATE(59)] = 2163,
  [SMALL_STATE(60)] = 2193,
  [SMALL_STATE(61)] = 2214,
  [SMALL_STATE(62)] = 2237,
  [SMALL_STATE(63)] = 2258,
  [SMALL_STATE(64)] = 2281,
  [SMALL_STATE(65)] = 2302,
  [SMALL_STATE(66)] = 2323,
  [SMALL_STATE(67)] = 2343,
  [SMALL_STATE(68)] = 2363,
  [SMALL_STATE(69)] = 2383,
  [SMALL_STATE(70)] = 2403,
  [SMALL_STATE(71)] = 2418,
  [SMALL_STATE(72)] = 2433,
  [SMALL_STATE(73)] = 2448,
  [SMALL_STATE(74)] = 2463,
  [SMALL_STATE(75)] = 2477,
  [SMALL_STATE(76)] = 2488,
  [SMALL_STATE(77)] = 2499,
  [SMALL_STATE(78)] = 2510,
  [SMALL_STATE(79)] = 2521,
  [SMALL_STATE(80)] = 2531,
  [SMALL_STATE(81)] = 2541,
  [SMALL_STATE(82)] = 2551,
  [SMALL_STATE(83)] = 2559,
  [SMALL_STATE(84)] = 2569,
  [SMALL_STATE(85)] = 2579,
  [SMALL_STATE(86)] = 2586,
  [SMALL_STATE(87)] = 2593,
  [SMALL_STATE(88)] = 2600,
  [SMALL_STATE(89)] = 2607,
  [SMALL_STATE(90)] = 2614,
  [SMALL_STATE(91)] = 2621,
  [SMALL_STATE(92)] = 2628,
  [SMALL_STATE(93)] = 2635,
  [SMALL_STATE(94)] = 2642,
  [SMALL_STATE(95)] = 2649,
  [SMALL_STATE(96)] = 2656,
  [SMALL_STATE(97)] = 2663,
  [SMALL_STATE(98)] = 2670,
  [SMALL_STATE(99)] = 2677,
  [SMALL_STATE(100)] = 2684,
  [SMALL_STATE(101)] = 2691,
  [SMALL_STATE(102)] = 2698,
  [SMALL_STATE(103)] = 2705,
  [SMALL_STATE(104)] = 2712,
  [SMALL_STATE(105)] = 2719,
  [SMALL_STATE(106)] = 2726,
  [SMALL_STATE(107)] = 2733,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), SHIFT(12),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), SHIFT(74),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), SHIFT(36),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), SHIFT(17),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), SHIFT(5),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), SHIFT(83),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), SHIFT(101),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), SHIFT(57),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), SHIFT(78),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), SHIFT(26),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), SHIFT(73),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), SHIFT(76),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), SHIFT(85),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), SHIFT(17),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookaroundExpr, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternative_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(74),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(36),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(17),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(5),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(83),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(101),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(57),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(78),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(26),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(73),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(76),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(85),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(17),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternative_repeat1, 2), SHIFT_REPEAT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetitionExpr, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repetitionExpr, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomExpr, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomExpr, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boundary, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boundary, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberRange, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberRange, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charSet, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charSet, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineRegex, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineRegex, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boundary, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boundary, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codePoint, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codePoint, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charSet, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charSet, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookaroundPrefix, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookaroundPrefix, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letDecl, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letDecl, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letDecl, 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letDecl, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetitionSuffix, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repetitionSuffix, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookaroundPrefix, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookaroundPrefix, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetitionBraces, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repetitionBraces, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetitionBraces, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repetitionBraces, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetitionBraces, 5),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repetitionBraces, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetitionCount, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repetitionCount, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(13),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetitionSuffix, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repetitionSuffix, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetitionExpr, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repetitionExpr, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orExpr, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_orExpr, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orExpr, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_orExpr, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixExpr, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fixExpr, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookaroundExpr, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookaroundExpr, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_charSet_repeat1, 2), SHIFT_REPEAT(90),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_charSet_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_charSet_repeat1, 2), SHIFT_REPEAT(64),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_charSet_repeat1, 2), SHIFT_REPEAT(107),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_charSet_repeat1, 2), SHIFT_REPEAT(66),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_charSet_repeat1, 2), SHIFT_REPEAT(60),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charSetInner, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleChar, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charSetInner, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singleChar, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringOneChar, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonPrintable, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonPrintable, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringOneChar, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charSetInner, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charSetInner, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(14),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifierKw, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_groupKind, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_groupKind, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [413] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolSetting, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sign, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pomsky(void) {
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
