#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  anon_sym_AT = 2,
  anon_sym_SQUOTE_AT = 3,
  anon_sym_DASH = 4,
  anon_sym_ = 5,
  aux_sym_major_token_identification_token1 = 6,
  sym_data_definition = 7,
  sym_comment_content_definition = 8,
  sym_placeholder = 9,
  sym_endOfLine = 10,
  sym_source_file = 11,
  sym_definition = 12,
  sym_Comment_definition = 13,
  sym_MetadataContentDefinition = 14,
  sym_Macro_definition = 15,
  sym_Continuation_line_definition = 16,
  sym_minor_token_definition = 17,
  sym_major_token_identification = 18,
  sym_macro_identification = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_minor_token_definition_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [anon_sym_AT] = "@",
  [anon_sym_SQUOTE_AT] = "'@",
  [anon_sym_DASH] = "-",
  [anon_sym_] = " ",
  [aux_sym_major_token_identification_token1] = "major_token_identification_token1",
  [sym_data_definition] = "data_definition",
  [sym_comment_content_definition] = "comment_content_definition",
  [sym_placeholder] = "placeholder",
  [sym_endOfLine] = "endOfLine",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_Comment_definition] = "Comment_definition",
  [sym_MetadataContentDefinition] = "MetadataContentDefinition",
  [sym_Macro_definition] = "Macro_definition",
  [sym_Continuation_line_definition] = "Continuation_line_definition",
  [sym_minor_token_definition] = "minor_token_definition",
  [sym_major_token_identification] = "major_token_identification",
  [sym_macro_identification] = "macro_identification",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_minor_token_definition_repeat1] = "minor_token_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SQUOTE_AT] = anon_sym_SQUOTE_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_] = anon_sym_,
  [aux_sym_major_token_identification_token1] = aux_sym_major_token_identification_token1,
  [sym_data_definition] = sym_data_definition,
  [sym_comment_content_definition] = sym_comment_content_definition,
  [sym_placeholder] = sym_placeholder,
  [sym_endOfLine] = sym_endOfLine,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_Comment_definition] = sym_Comment_definition,
  [sym_MetadataContentDefinition] = sym_MetadataContentDefinition,
  [sym_Macro_definition] = sym_Macro_definition,
  [sym_Continuation_line_definition] = sym_Continuation_line_definition,
  [sym_minor_token_definition] = sym_minor_token_definition,
  [sym_major_token_identification] = sym_major_token_identification,
  [sym_macro_identification] = sym_macro_identification,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_minor_token_definition_repeat1] = aux_sym_minor_token_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_major_token_identification_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_data_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_content_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_endOfLine] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_Comment_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_MetadataContentDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_Macro_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_Continuation_line_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_minor_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_major_token_identification] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_identification] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_minor_token_definition_repeat1] = {
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
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 18,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 17,
  [28] = 15,
  [29] = 29,
  [30] = 30,
  [31] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          lookahead == '@') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          lookahead == '@') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          lookahead == '@') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != '@') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != '@') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '@') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != '@') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SQUOTE_AT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SQUOTE_AT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_major_token_identification_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          lookahead == '@') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          lookahead == '@') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          lookahead == '@') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_data_definition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment_content_definition);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment_content_definition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_endOfLine);
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SQUOTE_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_data_definition] = ACTIONS(1),
    [sym_placeholder] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_definition] = STATE(2),
    [sym_Comment_definition] = STATE(5),
    [sym_MetadataContentDefinition] = STATE(5),
    [sym_Macro_definition] = STATE(5),
    [sym_Continuation_line_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_SQUOTE_AT] = ACTIONS(9),
    [sym_data_definition] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_SQUOTE_AT,
    ACTIONS(11), 1,
      sym_data_definition,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(5), 4,
      sym_Comment_definition,
      sym_MetadataContentDefinition,
      sym_Macro_definition,
      sym_Continuation_line_definition,
  [26] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(20), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_AT,
    ACTIONS(26), 1,
      sym_data_definition,
    STATE(3), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(5), 4,
      sym_Comment_definition,
      sym_MetadataContentDefinition,
      sym_Macro_definition,
      sym_Continuation_line_definition,
  [52] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 4,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_SQUOTE_AT,
      sym_data_definition,
  [62] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 4,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_SQUOTE_AT,
      sym_data_definition,
  [72] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 4,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_SQUOTE_AT,
      sym_data_definition,
  [82] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 4,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_SQUOTE_AT,
      sym_data_definition,
  [92] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 4,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_SQUOTE_AT,
      sym_data_definition,
  [102] = 3,
    ACTIONS(49), 1,
      anon_sym_,
    STATE(14), 1,
      aux_sym_minor_token_definition_repeat1,
    ACTIONS(51), 2,
      sym_data_definition,
      sym_placeholder,
  [113] = 3,
    ACTIONS(53), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym_minor_token_definition_repeat1,
    ACTIONS(55), 2,
      sym_data_definition,
      sym_placeholder,
  [124] = 3,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_minor_token_definition_repeat1,
    ACTIONS(59), 2,
      sym_data_definition,
      sym_placeholder,
  [135] = 3,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(25), 1,
      sym_minor_token_definition,
    ACTIONS(63), 2,
      sym_data_definition,
      sym_placeholder,
  [146] = 3,
    ACTIONS(65), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym_minor_token_definition_repeat1,
    ACTIONS(68), 2,
      sym_data_definition,
      sym_placeholder,
  [157] = 3,
    ACTIONS(53), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym_minor_token_definition_repeat1,
    ACTIONS(70), 2,
      sym_data_definition,
      sym_placeholder,
  [168] = 1,
    ACTIONS(72), 3,
      anon_sym_,
      sym_data_definition,
      sym_placeholder,
  [174] = 1,
    ACTIONS(74), 3,
      anon_sym_DASH,
      sym_data_definition,
      sym_placeholder,
  [180] = 1,
    ACTIONS(76), 3,
      anon_sym_,
      sym_data_definition,
      sym_placeholder,
  [186] = 2,
    ACTIONS(78), 1,
      anon_sym_DASH,
    STATE(9), 1,
      sym_minor_token_definition,
  [193] = 2,
    ACTIONS(80), 1,
      aux_sym_major_token_identification_token1,
    STATE(21), 1,
      sym_macro_identification,
  [200] = 2,
    ACTIONS(82), 1,
      aux_sym_major_token_identification_token1,
    STATE(12), 1,
      sym_major_token_identification,
  [207] = 2,
    ACTIONS(84), 1,
      sym_data_definition,
    ACTIONS(86), 1,
      sym_placeholder,
  [214] = 2,
    ACTIONS(88), 1,
      sym_data_definition,
    ACTIONS(90), 1,
      sym_placeholder,
  [221] = 2,
    ACTIONS(78), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym_minor_token_definition,
  [228] = 1,
    ACTIONS(92), 1,
      sym_endOfLine,
  [232] = 1,
    ACTIONS(94), 1,
      sym_endOfLine,
  [236] = 1,
    ACTIONS(96), 1,
      sym_endOfLine,
  [240] = 1,
    ACTIONS(98), 1,
      sym_endOfLine,
  [244] = 1,
    ACTIONS(100), 1,
      sym_endOfLine,
  [248] = 1,
    ACTIONS(102), 1,
      sym_comment_content_definition,
  [252] = 1,
    ACTIONS(104), 1,
      sym_endOfLine,
  [256] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 124,
  [SMALL_STATE(12)] = 135,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 157,
  [SMALL_STATE(15)] = 168,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 193,
  [SMALL_STATE(20)] = 200,
  [SMALL_STATE(21)] = 207,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 221,
  [SMALL_STATE(24)] = 228,
  [SMALL_STATE(25)] = 232,
  [SMALL_STATE(26)] = 236,
  [SMALL_STATE(27)] = 240,
  [SMALL_STATE(28)] = 244,
  [SMALL_STATE(29)] = 248,
  [SMALL_STATE(30)] = 252,
  [SMALL_STATE(31)] = 256,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Comment_definition, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Comment_definition, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Continuation_line_definition, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Continuation_line_definition, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Macro_definition, 4),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Macro_definition, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MetadataContentDefinition, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MetadataContentDefinition, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_minor_token_definition_repeat1, 2), SHIFT_REPEAT(13),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_minor_token_definition_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minor_token_definition, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_major_token_identification, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minor_token_definition, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_identification, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_identification, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minor_token_definition, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minor_token_definition, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_MEDFORD(void) {
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
