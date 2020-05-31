#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_identifier = 1,
  anon_sym_import = 2,
  anon_sym_as = 3,
  anon_sym_from = 4,
  anon_sym_DOT = 5,
  anon_sym_COMMA = 6,
  sym_number = 7,
  sym_muonscript_module = 8,
  sym__statement = 9,
  sym_import_statement = 10,
  sym_import_from_statement = 11,
  sym_dotted_name = 12,
  sym_imported_module_members = 13,
  aux_sym_muonscript_module_repeat1 = 14,
  aux_sym_dotted_name_repeat1 = 15,
  aux_sym_imported_module_members_repeat1 = 16,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [sym_number] = "number",
  [sym_muonscript_module] = "muonscript_module",
  [sym__statement] = "_statement",
  [sym_import_statement] = "import_statement",
  [sym_import_from_statement] = "import_from_statement",
  [sym_dotted_name] = "dotted_name",
  [sym_imported_module_members] = "imported_module_members",
  [aux_sym_muonscript_module_repeat1] = "muonscript_module_repeat1",
  [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
  [aux_sym_imported_module_members_repeat1] = "imported_module_members_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_number] = sym_number,
  [sym_muonscript_module] = sym_muonscript_module,
  [sym__statement] = sym__statement,
  [sym_import_statement] = sym_import_statement,
  [sym_import_from_statement] = sym_import_from_statement,
  [sym_dotted_name] = sym_dotted_name,
  [sym_imported_module_members] = sym_imported_module_members,
  [aux_sym_muonscript_module_repeat1] = aux_sym_muonscript_module_repeat1,
  [aux_sym_dotted_name_repeat1] = aux_sym_dotted_name_repeat1,
  [aux_sym_imported_module_members_repeat1] = aux_sym_imported_module_members_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_muonscript_module] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_from_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_name] = {
    .visible = true,
    .named = true,
  },
  [sym_imported_module_members] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_muonscript_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_imported_module_members_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_imported_members = 2,
  field_module_member = 3,
  field_module_path = 4,
  field_name = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_imported_members] = "imported_members",
  [field_module_member] = "module_member",
  [field_module_path] = "module_path",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[13] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 4},
  [11] = {.index = 19, .length = 4},
  [12] = {.index = 23, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_module_path, 1},
  [2] =
    {field_name, 0},
    {field_name, 1},
  [4] =
    {field_alias, 3},
    {field_module_path, 1},
  [6] =
    {field_module_member, 0},
  [7] =
    {field_imported_members, 3},
    {field_module_path, 1},
  [9] =
    {field_alias, 1, .inherited = true},
    {field_module_member, 0},
    {field_module_member, 1, .inherited = true},
  [12] =
    {field_alias, 2},
    {field_module_member, 0},
  [14] =
    {field_module_member, 1},
  [15] =
    {field_alias, 0, .inherited = true},
    {field_alias, 1, .inherited = true},
    {field_module_member, 0, .inherited = true},
    {field_module_member, 1, .inherited = true},
  [19] =
    {field_alias, 2},
    {field_alias, 3, .inherited = true},
    {field_module_member, 0},
    {field_module_member, 3, .inherited = true},
  [23] =
    {field_alias, 3},
    {field_module_member, 1},
};

static TSSymbol ts_alias_sequences[13][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_muonscript_module] = STATE(24),
    [sym__statement] = STATE(2),
    [sym_import_statement] = STATE(2),
    [sym_import_from_statement] = STATE(2),
    [aux_sym_muonscript_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_from,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__statement,
      sym_import_statement,
      sym_import_from_statement,
      aux_sym_muonscript_module_repeat1,
  [16] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(16), 1,
      anon_sym_from,
    STATE(3), 4,
      sym__statement,
      sym_import_statement,
      sym_import_from_statement,
      aux_sym_muonscript_module_repeat1,
  [32] = 3,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
  [45] = 4,
    ACTIONS(25), 1,
      anon_sym_as,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [60] = 3,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
  [73] = 3,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
  [86] = 3,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [98] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
      anon_sym_DOT,
  [106] = 3,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [118] = 2,
    ACTIONS(42), 1,
      anon_sym_as,
    ACTIONS(40), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
  [128] = 3,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [140] = 3,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [152] = 2,
    ACTIONS(53), 1,
      anon_sym_as,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [161] = 1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
  [168] = 1,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [174] = 1,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [180] = 2,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(17), 1,
      sym_imported_module_members,
  [187] = 2,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_name,
  [194] = 2,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(21), 1,
      sym_dotted_name,
  [201] = 1,
    ACTIONS(65), 1,
      anon_sym_import,
  [205] = 1,
    ACTIONS(67), 1,
      sym_identifier,
  [209] = 1,
    ACTIONS(69), 1,
      sym_identifier,
  [213] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [217] = 1,
    ACTIONS(73), 1,
      sym_identifier,
  [221] = 1,
    ACTIONS(75), 1,
      sym_identifier,
  [225] = 1,
    ACTIONS(77), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 140,
  [SMALL_STATE(14)] = 152,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 168,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 187,
  [SMALL_STATE(20)] = 194,
  [SMALL_STATE(21)] = 201,
  [SMALL_STATE(22)] = 205,
  [SMALL_STATE(23)] = 209,
  [SMALL_STATE(24)] = 213,
  [SMALL_STATE(25)] = 217,
  [SMALL_STATE(26)] = 221,
  [SMALL_STATE(27)] = 225,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_muonscript_module, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_muonscript_module, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2), SHIFT_REPEAT(19),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2), SHIFT_REPEAT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 2, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_module_members, 1, .production_id = 5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 1, .production_id = 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_module_members, 2, .production_id = 7),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_module_members, 3, .production_id = 8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imported_module_members_repeat1, 2, .production_id = 9),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imported_module_members_repeat1, 2, .production_id = 10),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imported_module_members_repeat1, 2, .production_id = 10), SHIFT_REPEAT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_module_members, 4, .production_id = 11),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, .production_id = 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imported_module_members_repeat1, 4, .production_id = 12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from_statement, 4, .production_id = 6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_muonscript(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
