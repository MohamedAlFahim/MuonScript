#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_identifier = 1,
  sym_comment = 2,
  sym_doc_comment = 3,
  anon_sym_import = 4,
  anon_sym_as = 5,
  anon_sym_from = 6,
  anon_sym_DOT = 7,
  anon_sym_COMMA = 8,
  anon_sym_func = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_number = 12,
  sym_muonscript_module = 13,
  sym_doc_comment_block = 14,
  sym__statement = 15,
  sym_import_statement = 16,
  sym_import_from_statement = 17,
  sym_dotted_name = 18,
  sym_module_member_import = 19,
  sym_imported_module_members = 20,
  sym_named_function_definition = 21,
  sym_suite = 22,
  aux_sym_muonscript_module_repeat1 = 23,
  aux_sym_doc_comment_block_repeat1 = 24,
  aux_sym_dotted_name_repeat1 = 25,
  aux_sym_imported_module_members_repeat1 = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_doc_comment] = "doc_comment",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_func] = "func",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [sym_muonscript_module] = "muonscript_module",
  [sym_doc_comment_block] = "doc_comment_block",
  [sym__statement] = "_statement",
  [sym_import_statement] = "import_statement",
  [sym_import_from_statement] = "import_from_statement",
  [sym_dotted_name] = "dotted_name",
  [sym_module_member_import] = "module_member_import",
  [sym_imported_module_members] = "imported_module_members",
  [sym_named_function_definition] = "named_function_definition",
  [sym_suite] = "suite",
  [aux_sym_muonscript_module_repeat1] = "muonscript_module_repeat1",
  [aux_sym_doc_comment_block_repeat1] = "doc_comment_block_repeat1",
  [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
  [aux_sym_imported_module_members_repeat1] = "imported_module_members_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_doc_comment] = sym_doc_comment,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number] = sym_number,
  [sym_muonscript_module] = sym_muonscript_module,
  [sym_doc_comment_block] = sym_doc_comment_block,
  [sym__statement] = sym__statement,
  [sym_import_statement] = sym_import_statement,
  [sym_import_from_statement] = sym_import_from_statement,
  [sym_dotted_name] = sym_dotted_name,
  [sym_module_member_import] = sym_module_member_import,
  [sym_imported_module_members] = sym_imported_module_members,
  [sym_named_function_definition] = sym_named_function_definition,
  [sym_suite] = sym_suite,
  [aux_sym_muonscript_module_repeat1] = aux_sym_muonscript_module_repeat1,
  [aux_sym_doc_comment_block_repeat1] = aux_sym_doc_comment_block_repeat1,
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
  [sym_doc_comment] = {
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
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_doc_comment_block] = {
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
  [sym_named_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_suite] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_muonscript_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_doc_comment_block_repeat1] = {
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
  field_doc = 2,
  field_imported_members = 3,
  field_module_member = 4,
  field_module_path = 5,
  field_name = 6,
  field_suite = 7,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_doc] = "doc",
  [field_imported_members] = "imported_members",
  [field_module_member] = "module_member",
  [field_module_path] = "module_path",
  [field_name] = "name",
  [field_suite] = "suite",
};

static const TSFieldMapSlice ts_field_map_slices[12] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 3},
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
    {field_name, 1},
  [10] =
    {field_doc, 3},
    {field_name, 1},
  [12] =
    {field_name, 1},
    {field_suite, 3},
  [14] =
    {field_alias, 2},
    {field_module_member, 0},
  [16] =
    {field_doc, 3},
    {field_name, 1},
    {field_suite, 4},
};

static TSSymbol ts_alias_sequences[12][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
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
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 15:
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
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_doc_comment] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_muonscript_module] = STATE(33),
    [sym__statement] = STATE(6),
    [sym_import_statement] = STATE(6),
    [sym_import_from_statement] = STATE(6),
    [sym_named_function_definition] = STATE(6),
    [aux_sym_muonscript_module_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_from] = ACTIONS(9),
    [anon_sym_func] = ACTIONS(11),
  },
  [2] = {
    [sym_doc_comment_block] = STATE(3),
    [sym__statement] = STATE(5),
    [sym_import_statement] = STATE(5),
    [sym_import_from_statement] = STATE(5),
    [sym_named_function_definition] = STATE(5),
    [sym_suite] = STATE(32),
    [aux_sym_muonscript_module_repeat1] = STATE(5),
    [aux_sym_doc_comment_block_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [sym_doc_comment] = ACTIONS(13),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_from] = ACTIONS(9),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_from,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_suite,
    STATE(5), 5,
      sym__statement,
      sym_import_statement,
      sym_import_from_statement,
      sym_named_function_definition,
      aux_sym_muonscript_module_repeat1,
  [26] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_import,
    ACTIONS(24), 1,
      anon_sym_from,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(4), 5,
      sym__statement,
      sym_import_statement,
      sym_import_from_statement,
      sym_named_function_definition,
      aux_sym_muonscript_module_repeat1,
  [50] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_from,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(4), 5,
      sym__statement,
      sym_import_statement,
      sym_import_from_statement,
      sym_named_function_definition,
      aux_sym_muonscript_module_repeat1,
  [73] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_from,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(4), 5,
      sym__statement,
      sym_import_statement,
      sym_import_from_statement,
      sym_named_function_definition,
      aux_sym_muonscript_module_repeat1,
  [96] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_imported_module_members_repeat1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_as,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_func,
      anon_sym_RBRACE,
  [216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_from,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_RBRACE,
  [229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_doc_comment,
    STATE(19), 1,
      aux_sym_doc_comment_block_repeat1,
    ACTIONS(62), 4,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_as,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_func,
      anon_sym_RBRACE,
  [271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_func,
      anon_sym_RBRACE,
  [283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_doc_comment,
    STATE(19), 1,
      aux_sym_doc_comment_block_repeat1,
    ACTIONS(73), 4,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_func,
      anon_sym_RBRACE,
  [365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(12), 1,
      sym_module_member_import,
    STATE(21), 1,
      sym_imported_module_members,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_name,
  [388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(17), 1,
      sym_module_member_import,
  [398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(31), 1,
      sym_dotted_name,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_import,
  [422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
  [429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
  [443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_identifier,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 216,
  [SMALL_STATE(15)] = 229,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 259,
  [SMALL_STATE(18)] = 271,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 299,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 365,
  [SMALL_STATE(27)] = 378,
  [SMALL_STATE(28)] = 388,
  [SMALL_STATE(29)] = 398,
  [SMALL_STATE(30)] = 408,
  [SMALL_STATE(31)] = 415,
  [SMALL_STATE(32)] = 422,
  [SMALL_STATE(33)] = 429,
  [SMALL_STATE(34)] = 436,
  [SMALL_STATE(35)] = 443,
  [SMALL_STATE(36)] = 450,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 464,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_muonscript_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2), SHIFT_REPEAT(27),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2), SHIFT_REPEAT(29),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_muonscript_module_repeat1, 2), SHIFT_REPEAT(35),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suite, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_muonscript_module, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(36),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 2, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imported_module_members_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imported_module_members_repeat1, 2), SHIFT_REPEAT(28),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_module_members, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_module_members, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_member_import, 1, .production_id = 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment_block, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_member_import, 3, .production_id = 10),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_comment_block_repeat1, 2), SHIFT_REPEAT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_comment_block_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_function_definition, 5, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from_statement, 4, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_function_definition, 4, .production_id = 7),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_function_definition, 5, .production_id = 9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_function_definition, 6, .production_id = 11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
