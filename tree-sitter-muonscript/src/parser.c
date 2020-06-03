#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_import = 3,
  anon_sym_as = 4,
  anon_sym_from = 5,
  anon_sym_DOT = 6,
  anon_sym_COMMA = 7,
  sym_number = 8,
  sym_muonscript_module = 9,
  sym__statement = 10,
  sym_import_statement = 11,
  sym_import_from_statement = 12,
  sym_dotted_name = 13,
  sym_module_member_import = 14,
  sym_imported_module_members = 15,
  aux_sym_muonscript_module_repeat1 = 16,
  aux_sym_dotted_name_repeat1 = 17,
  aux_sym_imported_module_members_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
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
  [sym_module_member_import] = "module_member_import",
  [sym_imported_module_members] = "imported_module_members",
  [aux_sym_muonscript_module_repeat1] = "muonscript_module_repeat1",
  [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
  [aux_sym_imported_module_members_repeat1] = "imported_module_members_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
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
  [sym_module_member_import] = sym_module_member_import,
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
  [sym_comment] = {
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
  [sym_module_member_import] = {
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

static const TSFieldMapSlice ts_field_map_slices[8] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
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
    {field_alias, 2},
    {field_module_member, 0},
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_muonscript_module] = STATE(24),
    [sym__statement] = STATE(3),
    [sym_import_statement] = STATE(3),
    [sym_import_from_statement] = STATE(3),
    [aux_sym_muonscript_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_from] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(16), 1,
      anon_sym_from,
    STATE(2), 4,
      sym__statement,
      sym_import_statement,
      sym_import_from_statement,
      aux_sym_muonscript_module_repeat1,
  [19] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_from,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(2), 4,
      sym__statement,
      sym_import_statement,
      sym_import_from_statement,
      aux_sym_muonscript_module_repeat1,
  [38] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
  [54] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
  [70] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
  [86] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
      anon_sym_DOT,
  [112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_as,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
  [125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
  [177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
  [187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(7), 1,
      sym_module_member_import,
    STATE(17), 1,
      sym_imported_module_members,
  [200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
  [218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(12), 1,
      sym_dotted_name,
  [228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(21), 1,
      sym_dotted_name,
  [238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(14), 1,
      sym_module_member_import,
  [248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_import,
  [255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
  [262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
  [269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 209,
  [SMALL_STATE(18)] = 218,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 238,
  [SMALL_STATE(21)] = 248,
  [SMALL_STATE(22)] = 255,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 269,
  [SMALL_STATE(25)] = 276,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_muonscript_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2), SHIFT_REPEAT(18),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2), SHIFT_REPEAT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_muonscript_module, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(22),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 2, .production_id = 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 1, .production_id = 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_module_members, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_member_import, 1, .production_id = 5),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_module_members, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imported_module_members_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imported_module_members_repeat1, 2), SHIFT_REPEAT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_member_import, 3, .production_id = 7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from_statement, 4, .production_id = 6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
