#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_SPECIFICATION = 1,
  anon_sym_INIT = 2,
  anon_sym_NEXT = 3,
  anon_sym_CONSTANT = 4,
  anon_sym_CONSTANTS = 5,
  anon_sym_INVARIANT = 6,
  anon_sym_INVARIANTS = 7,
  anon_sym_PROPERTY = 8,
  anon_sym_PROPERTIES = 9,
  anon_sym_CONSTRAINT = 10,
  anon_sym_CONSTRAINTS = 11,
  anon_sym_ACTION_CONSTRAINT = 12,
  anon_sym_ACTION_CONSTRAINTS = 13,
  anon_sym_CHECK_DEADLOCK = 14,
  anon_sym_SYMMETRY = 15,
  anon_sym_VIEW = 16,
  anon_sym_ALIAS = 17,
  anon_sym_POSTCONDITION = 18,
  anon_sym_TYPE = 19,
  anon_sym_TYPE_CONSTRAINT = 20,
  anon_sym_EQ = 21,
  anon_sym_LT_DASH = 22,
  anon_sym_LBRACE = 23,
  anon_sym_COMMA = 24,
  anon_sym_RBRACE = 25,
  anon_sym_TRUE = 26,
  anon_sym_FALSE = 27,
  sym_number = 28,
  anon_sym_DQUOTE = 29,
  sym_string_content = 30,
  sym_identifier = 31,
  anon_sym_BSLASH_STAR = 32,
  aux_sym_comment_token1 = 33,
  sym_source_file = 34,
  sym__statement = 35,
  sym_specification = 36,
  sym_init = 37,
  sym_next = 38,
  sym_constants = 39,
  sym_invariants = 40,
  sym_properties = 41,
  sym_constraints = 42,
  sym_action_constraints = 43,
  sym_check_deadlock = 44,
  sym_symmetry = 45,
  sym_view = 46,
  sym_alias = 47,
  sym_postcondition = 48,
  sym_type_constraint = 49,
  sym_constant_entry = 50,
  sym_constant_assignment = 51,
  sym_constant_substitution = 52,
  sym__value = 53,
  sym_set_literal = 54,
  sym_boolean = 55,
  sym_string = 56,
  sym_comment = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_constants_repeat1 = 59,
  aux_sym_invariants_repeat1 = 60,
  aux_sym_set_literal_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SPECIFICATION] = "keyword",
  [anon_sym_INIT] = "keyword",
  [anon_sym_NEXT] = "keyword",
  [anon_sym_CONSTANT] = "keyword",
  [anon_sym_CONSTANTS] = "keyword",
  [anon_sym_INVARIANT] = "keyword",
  [anon_sym_INVARIANTS] = "keyword",
  [anon_sym_PROPERTY] = "keyword",
  [anon_sym_PROPERTIES] = "keyword",
  [anon_sym_CONSTRAINT] = "keyword",
  [anon_sym_CONSTRAINTS] = "keyword",
  [anon_sym_ACTION_CONSTRAINT] = "keyword",
  [anon_sym_ACTION_CONSTRAINTS] = "keyword",
  [anon_sym_CHECK_DEADLOCK] = "keyword",
  [anon_sym_SYMMETRY] = "keyword",
  [anon_sym_VIEW] = "keyword",
  [anon_sym_ALIAS] = "keyword",
  [anon_sym_POSTCONDITION] = "keyword",
  [anon_sym_TYPE] = "keyword",
  [anon_sym_TYPE_CONSTRAINT] = "keyword",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_identifier] = "identifier",
  [anon_sym_BSLASH_STAR] = "\\*",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_specification] = "specification",
  [sym_init] = "init",
  [sym_next] = "next",
  [sym_constants] = "constants",
  [sym_invariants] = "invariants",
  [sym_properties] = "properties",
  [sym_constraints] = "constraints",
  [sym_action_constraints] = "action_constraints",
  [sym_check_deadlock] = "check_deadlock",
  [sym_symmetry] = "symmetry",
  [sym_view] = "view",
  [sym_alias] = "alias",
  [sym_postcondition] = "postcondition",
  [sym_type_constraint] = "type_constraint",
  [sym_constant_entry] = "constant_entry",
  [sym_constant_assignment] = "constant_assignment",
  [sym_constant_substitution] = "constant_substitution",
  [sym__value] = "_value",
  [sym_set_literal] = "set_literal",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_constants_repeat1] = "constants_repeat1",
  [aux_sym_invariants_repeat1] = "invariants_repeat1",
  [aux_sym_set_literal_repeat1] = "set_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SPECIFICATION] = anon_sym_SPECIFICATION,
  [anon_sym_INIT] = anon_sym_SPECIFICATION,
  [anon_sym_NEXT] = anon_sym_SPECIFICATION,
  [anon_sym_CONSTANT] = anon_sym_SPECIFICATION,
  [anon_sym_CONSTANTS] = anon_sym_SPECIFICATION,
  [anon_sym_INVARIANT] = anon_sym_SPECIFICATION,
  [anon_sym_INVARIANTS] = anon_sym_SPECIFICATION,
  [anon_sym_PROPERTY] = anon_sym_SPECIFICATION,
  [anon_sym_PROPERTIES] = anon_sym_SPECIFICATION,
  [anon_sym_CONSTRAINT] = anon_sym_SPECIFICATION,
  [anon_sym_CONSTRAINTS] = anon_sym_SPECIFICATION,
  [anon_sym_ACTION_CONSTRAINT] = anon_sym_SPECIFICATION,
  [anon_sym_ACTION_CONSTRAINTS] = anon_sym_SPECIFICATION,
  [anon_sym_CHECK_DEADLOCK] = anon_sym_SPECIFICATION,
  [anon_sym_SYMMETRY] = anon_sym_SPECIFICATION,
  [anon_sym_VIEW] = anon_sym_SPECIFICATION,
  [anon_sym_ALIAS] = anon_sym_SPECIFICATION,
  [anon_sym_POSTCONDITION] = anon_sym_SPECIFICATION,
  [anon_sym_TYPE] = anon_sym_SPECIFICATION,
  [anon_sym_TYPE_CONSTRAINT] = anon_sym_SPECIFICATION,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_identifier] = sym_identifier,
  [anon_sym_BSLASH_STAR] = anon_sym_BSLASH_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_specification] = sym_specification,
  [sym_init] = sym_init,
  [sym_next] = sym_next,
  [sym_constants] = sym_constants,
  [sym_invariants] = sym_invariants,
  [sym_properties] = sym_properties,
  [sym_constraints] = sym_constraints,
  [sym_action_constraints] = sym_action_constraints,
  [sym_check_deadlock] = sym_check_deadlock,
  [sym_symmetry] = sym_symmetry,
  [sym_view] = sym_view,
  [sym_alias] = sym_alias,
  [sym_postcondition] = sym_postcondition,
  [sym_type_constraint] = sym_type_constraint,
  [sym_constant_entry] = sym_constant_entry,
  [sym_constant_assignment] = sym_constant_assignment,
  [sym_constant_substitution] = sym_constant_substitution,
  [sym__value] = sym__value,
  [sym_set_literal] = sym_set_literal,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_constants_repeat1] = aux_sym_constants_repeat1,
  [aux_sym_invariants_repeat1] = aux_sym_invariants_repeat1,
  [aux_sym_set_literal_repeat1] = aux_sym_set_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SPECIFICATION] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_INIT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NEXT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CONSTANT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CONSTANTS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_INVARIANT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_INVARIANTS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PROPERTY] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PROPERTIES] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CONSTRAINT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CONSTRAINTS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ACTION_CONSTRAINT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ACTION_CONSTRAINTS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CHECK_DEADLOCK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SYMMETRY] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_VIEW] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ALIAS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POSTCONDITION] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TYPE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TYPE_CONSTRAINT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
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
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_init] = {
    .visible = true,
    .named = true,
  },
  [sym_next] = {
    .visible = true,
    .named = true,
  },
  [sym_constants] = {
    .visible = true,
    .named = true,
  },
  [sym_invariants] = {
    .visible = true,
    .named = true,
  },
  [sym_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_action_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_check_deadlock] = {
    .visible = true,
    .named = true,
  },
  [sym_symmetry] = {
    .visible = true,
    .named = true,
  },
  [sym_view] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_postcondition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_set_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constants_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_invariants_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_keyword = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_keyword] = "keyword",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyword, 0},
    {field_name, 1},
  [2] =
    {field_keyword, 0},
  [3] =
    {field_keyword, 0},
    {field_value, 1},
  [5] =
    {field_name, 0},
    {field_value, 2},
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
  [25] = 14,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(122);
      ADVANCE_MAP(
        '"', 173,
        ',', 166,
        '<', 4,
        '=', 163,
        'A', 186,
        'C', 209,
        'F', 176,
        'I', 230,
        'N', 197,
        'P', 243,
        'S', 252,
        'T', 255,
        'V', 214,
        '\\', 3,
        '{', 165,
        '}', 167,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == 'F') ADVANCE(176);
      if (lookahead == 'T') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead == '}') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(293);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'L') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 37:
      if (lookahead == 'F') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(97);
      if (lookahead == 'V') ADVANCE(6);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(11);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'Y') ADVANCE(137);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 53:
      if (lookahead == 'K') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'K') ADVANCE(149);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'M') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(157);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'P') ADVANCE(32);
      if (lookahead == 'Y') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(33);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(113);
      if (lookahead == 'Y') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == 'S') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 95:
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 'U') ADVANCE(29);
      END_STATE();
    case 114:
      if (lookahead == 'W') ADVANCE(153);
      END_STATE();
    case 115:
      if (lookahead == 'X') ADVANCE(98);
      END_STATE();
    case 116:
      if (lookahead == 'Y') ADVANCE(151);
      END_STATE();
    case 117:
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 120:
      if (eof) ADVANCE(122);
      ADVANCE_MAP(
        ',', 166,
        '<', 4,
        '=', 163,
        'A', 186,
        'C', 209,
        'I', 230,
        'N', 197,
        'P', 243,
        'S', 252,
        'T', 288,
        'V', 214,
        '\\', 3,
        '}', 167,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(120);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      ADVANCE_MAP(
        ',', 166,
        'A', 15,
        'C', 38,
        'F', 5,
        'I', 59,
        'N', 26,
        'P', 72,
        'S', 81,
        'T', 84,
        'V', 43,
        '\\', 3,
        '}', 167,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SPECIFICATION);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SPECIFICATION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_INIT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_INIT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_NEXT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_NEXT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_CONSTANT);
      if (lookahead == 'S') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_CONSTANT);
      if (lookahead == 'S') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_CONSTANTS);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_CONSTANTS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_INVARIANT);
      if (lookahead == 'S') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_INVARIANT);
      if (lookahead == 'S') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_INVARIANTS);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_INVARIANTS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PROPERTY);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PROPERTY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PROPERTIES);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PROPERTIES);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      if (lookahead == 'S') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      if (lookahead == 'S') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_CONSTRAINTS);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_CONSTRAINTS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ACTION_CONSTRAINT);
      if (lookahead == 'S') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ACTION_CONSTRAINT);
      if (lookahead == 'S') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ACTION_CONSTRAINTS);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_ACTION_CONSTRAINTS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_CHECK_DEADLOCK);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_CHECK_DEADLOCK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SYMMETRY);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SYMMETRY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_ALIAS);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_ALIAS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_POSTCONDITION);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_POSTCONDITION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (lookahead == '_') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_TYPE_CONSTRAINT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_TYPE_CONSTRAINT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(235);
      if (lookahead == 'R') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(278);
      if (lookahead == 'L') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(198);
      if (lookahead == 'O') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'V') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(205);
      if (lookahead == 'Y') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(264);
      if (lookahead == 'R') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(203);
      if (lookahead == 'Y') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(285);
      if (lookahead == 'Y') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 121},
  [2] = {.lex_state = 121},
  [3] = {.lex_state = 121},
  [4] = {.lex_state = 120},
  [5] = {.lex_state = 120},
  [6] = {.lex_state = 120},
  [7] = {.lex_state = 120},
  [8] = {.lex_state = 120},
  [9] = {.lex_state = 120},
  [10] = {.lex_state = 120},
  [11] = {.lex_state = 120},
  [12] = {.lex_state = 120},
  [13] = {.lex_state = 120},
  [14] = {.lex_state = 121},
  [15] = {.lex_state = 120},
  [16] = {.lex_state = 120},
  [17] = {.lex_state = 120},
  [18] = {.lex_state = 120},
  [19] = {.lex_state = 120},
  [20] = {.lex_state = 120},
  [21] = {.lex_state = 120},
  [22] = {.lex_state = 120},
  [23] = {.lex_state = 120},
  [24] = {.lex_state = 120},
  [25] = {.lex_state = 120},
  [26] = {.lex_state = 121},
  [27] = {.lex_state = 121},
  [28] = {.lex_state = 121},
  [29] = {.lex_state = 121},
  [30] = {.lex_state = 121},
  [31] = {.lex_state = 121},
  [32] = {.lex_state = 121},
  [33] = {.lex_state = 121},
  [34] = {.lex_state = 121},
  [35] = {.lex_state = 121},
  [36] = {.lex_state = 121},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 117},
  [43] = {.lex_state = 121},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 117},
  [48] = {.lex_state = 117},
  [49] = {.lex_state = 117},
  [50] = {.lex_state = 117},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 117},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 117},
  [56] = {.lex_state = 117},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 117},
  [59] = {.lex_state = 117},
  [60] = {.lex_state = 117},
  [61] = {.lex_state = 296},
  [62] = {.lex_state = 117},
  [63] = {.lex_state = 117},
  [64] = {.lex_state = 117},
  [65] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SPECIFICATION] = ACTIONS(1),
    [anon_sym_INIT] = ACTIONS(1),
    [anon_sym_NEXT] = ACTIONS(1),
    [anon_sym_CONSTANT] = ACTIONS(1),
    [anon_sym_CONSTANTS] = ACTIONS(1),
    [anon_sym_INVARIANT] = ACTIONS(1),
    [anon_sym_INVARIANTS] = ACTIONS(1),
    [anon_sym_PROPERTY] = ACTIONS(1),
    [anon_sym_PROPERTIES] = ACTIONS(1),
    [anon_sym_CONSTRAINT] = ACTIONS(1),
    [anon_sym_CONSTRAINTS] = ACTIONS(1),
    [anon_sym_ACTION_CONSTRAINT] = ACTIONS(1),
    [anon_sym_ACTION_CONSTRAINTS] = ACTIONS(1),
    [anon_sym_CHECK_DEADLOCK] = ACTIONS(1),
    [anon_sym_SYMMETRY] = ACTIONS(1),
    [anon_sym_VIEW] = ACTIONS(1),
    [anon_sym_ALIAS] = ACTIONS(1),
    [anon_sym_POSTCONDITION] = ACTIONS(1),
    [anon_sym_TYPE] = ACTIONS(1),
    [anon_sym_TYPE_CONSTRAINT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_BSLASH_STAR] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym__statement] = STATE(33),
    [sym_specification] = STATE(34),
    [sym_init] = STATE(34),
    [sym_next] = STATE(34),
    [sym_constants] = STATE(34),
    [sym_invariants] = STATE(34),
    [sym_properties] = STATE(34),
    [sym_constraints] = STATE(34),
    [sym_action_constraints] = STATE(34),
    [sym_check_deadlock] = STATE(34),
    [sym_symmetry] = STATE(34),
    [sym_view] = STATE(34),
    [sym_alias] = STATE(34),
    [sym_postcondition] = STATE(34),
    [sym_type_constraint] = STATE(34),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SPECIFICATION] = ACTIONS(7),
    [anon_sym_INIT] = ACTIONS(9),
    [anon_sym_NEXT] = ACTIONS(11),
    [anon_sym_CONSTANT] = ACTIONS(13),
    [anon_sym_CONSTANTS] = ACTIONS(15),
    [anon_sym_INVARIANT] = ACTIONS(17),
    [anon_sym_INVARIANTS] = ACTIONS(19),
    [anon_sym_PROPERTY] = ACTIONS(21),
    [anon_sym_PROPERTIES] = ACTIONS(21),
    [anon_sym_CONSTRAINT] = ACTIONS(23),
    [anon_sym_CONSTRAINTS] = ACTIONS(25),
    [anon_sym_ACTION_CONSTRAINT] = ACTIONS(27),
    [anon_sym_ACTION_CONSTRAINTS] = ACTIONS(29),
    [anon_sym_CHECK_DEADLOCK] = ACTIONS(31),
    [anon_sym_SYMMETRY] = ACTIONS(33),
    [anon_sym_VIEW] = ACTIONS(35),
    [anon_sym_ALIAS] = ACTIONS(37),
    [anon_sym_POSTCONDITION] = ACTIONS(39),
    [anon_sym_TYPE] = ACTIONS(41),
    [anon_sym_TYPE_CONSTRAINT] = ACTIONS(43),
    [anon_sym_BSLASH_STAR] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(33),
    [sym_specification] = STATE(34),
    [sym_init] = STATE(34),
    [sym_next] = STATE(34),
    [sym_constants] = STATE(34),
    [sym_invariants] = STATE(34),
    [sym_properties] = STATE(34),
    [sym_constraints] = STATE(34),
    [sym_action_constraints] = STATE(34),
    [sym_check_deadlock] = STATE(34),
    [sym_symmetry] = STATE(34),
    [sym_view] = STATE(34),
    [sym_alias] = STATE(34),
    [sym_postcondition] = STATE(34),
    [sym_type_constraint] = STATE(34),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_SPECIFICATION] = ACTIONS(7),
    [anon_sym_INIT] = ACTIONS(9),
    [anon_sym_NEXT] = ACTIONS(11),
    [anon_sym_CONSTANT] = ACTIONS(13),
    [anon_sym_CONSTANTS] = ACTIONS(15),
    [anon_sym_INVARIANT] = ACTIONS(17),
    [anon_sym_INVARIANTS] = ACTIONS(19),
    [anon_sym_PROPERTY] = ACTIONS(21),
    [anon_sym_PROPERTIES] = ACTIONS(21),
    [anon_sym_CONSTRAINT] = ACTIONS(23),
    [anon_sym_CONSTRAINTS] = ACTIONS(25),
    [anon_sym_ACTION_CONSTRAINT] = ACTIONS(27),
    [anon_sym_ACTION_CONSTRAINTS] = ACTIONS(29),
    [anon_sym_CHECK_DEADLOCK] = ACTIONS(31),
    [anon_sym_SYMMETRY] = ACTIONS(33),
    [anon_sym_VIEW] = ACTIONS(35),
    [anon_sym_ALIAS] = ACTIONS(37),
    [anon_sym_POSTCONDITION] = ACTIONS(39),
    [anon_sym_TYPE] = ACTIONS(41),
    [anon_sym_TYPE_CONSTRAINT] = ACTIONS(43),
    [anon_sym_BSLASH_STAR] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(33),
    [sym_specification] = STATE(34),
    [sym_init] = STATE(34),
    [sym_next] = STATE(34),
    [sym_constants] = STATE(34),
    [sym_invariants] = STATE(34),
    [sym_properties] = STATE(34),
    [sym_constraints] = STATE(34),
    [sym_action_constraints] = STATE(34),
    [sym_check_deadlock] = STATE(34),
    [sym_symmetry] = STATE(34),
    [sym_view] = STATE(34),
    [sym_alias] = STATE(34),
    [sym_postcondition] = STATE(34),
    [sym_type_constraint] = STATE(34),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_SPECIFICATION] = ACTIONS(49),
    [anon_sym_INIT] = ACTIONS(52),
    [anon_sym_NEXT] = ACTIONS(55),
    [anon_sym_CONSTANT] = ACTIONS(58),
    [anon_sym_CONSTANTS] = ACTIONS(61),
    [anon_sym_INVARIANT] = ACTIONS(64),
    [anon_sym_INVARIANTS] = ACTIONS(67),
    [anon_sym_PROPERTY] = ACTIONS(70),
    [anon_sym_PROPERTIES] = ACTIONS(70),
    [anon_sym_CONSTRAINT] = ACTIONS(73),
    [anon_sym_CONSTRAINTS] = ACTIONS(76),
    [anon_sym_ACTION_CONSTRAINT] = ACTIONS(79),
    [anon_sym_ACTION_CONSTRAINTS] = ACTIONS(82),
    [anon_sym_CHECK_DEADLOCK] = ACTIONS(85),
    [anon_sym_SYMMETRY] = ACTIONS(88),
    [anon_sym_VIEW] = ACTIONS(91),
    [anon_sym_ALIAS] = ACTIONS(94),
    [anon_sym_POSTCONDITION] = ACTIONS(97),
    [anon_sym_TYPE] = ACTIONS(100),
    [anon_sym_TYPE_CONSTRAINT] = ACTIONS(103),
    [anon_sym_BSLASH_STAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_constants_repeat1,
    STATE(20), 1,
      sym_constant_entry,
    STATE(22), 2,
      sym_constant_assignment,
      sym_constant_substitution,
    ACTIONS(108), 20,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
  [45] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(20), 1,
      sym_constant_entry,
    STATE(5), 2,
      sym_comment,
      aux_sym_constants_repeat1,
    STATE(22), 2,
      sym_constant_assignment,
      sym_constant_substitution,
    ACTIONS(114), 20,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
  [88] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_EQ,
    ACTIONS(125), 1,
      anon_sym_LT_DASH,
    STATE(6), 1,
      sym_comment,
    ACTIONS(121), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [127] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(7), 1,
      sym_comment,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(129), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [162] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(133), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [197] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(137), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [232] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(141), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [267] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(145), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [302] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(149), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [337] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(153), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [372] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(157), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(155), 18,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [406] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(15), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_invariants_repeat1,
    ACTIONS(161), 20,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
  [444] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_invariants_repeat1,
    ACTIONS(167), 20,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
  [482] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_invariants_repeat1,
    ACTIONS(171), 20,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
  [520] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_invariants_repeat1,
    ACTIONS(175), 20,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
  [558] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(19), 2,
      sym_comment,
      aux_sym_invariants_repeat1,
    ACTIONS(179), 20,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
  [594] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_comment,
    ACTIONS(186), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [627] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_comment,
    ACTIONS(190), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [660] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_comment,
    ACTIONS(121), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [693] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_comment,
    ACTIONS(194), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [726] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_comment,
    ACTIONS(198), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [759] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_comment,
    ACTIONS(157), 21,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANT,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINT,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE,
      anon_sym_TYPE_CONSTRAINT,
      sym_identifier,
  [792] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(202), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(200), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [824] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(206), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(204), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [856] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(208), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [888] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(212), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [920] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(216), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [952] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(222), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(220), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [984] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(226), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(224), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [1016] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(230), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(228), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [1048] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(234), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(232), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [1080] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(238), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(236), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [1112] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(242), 5,
      anon_sym_CONSTANT,
      anon_sym_INVARIANT,
      anon_sym_CONSTRAINT,
      anon_sym_ACTION_CONSTRAINT,
      anon_sym_TYPE,
    ACTIONS(240), 16,
      ts_builtin_sym_end,
      anon_sym_SPECIFICATION,
      anon_sym_INIT,
      anon_sym_NEXT,
      anon_sym_CONSTANTS,
      anon_sym_INVARIANTS,
      anon_sym_PROPERTY,
      anon_sym_PROPERTIES,
      anon_sym_CONSTRAINTS,
      anon_sym_ACTION_CONSTRAINTS,
      anon_sym_CHECK_DEADLOCK,
      anon_sym_SYMMETRY,
      anon_sym_VIEW,
      anon_sym_ALIAS,
      anon_sym_POSTCONDITION,
      anon_sym_TYPE_CONSTRAINT,
  [1144] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(37), 1,
      sym_comment,
    STATE(44), 1,
      sym__value,
    ACTIONS(248), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(8), 3,
      sym_set_literal,
      sym_boolean,
      sym_string,
  [1178] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_comment,
    STATE(51), 1,
      sym__value,
    ACTIONS(248), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(8), 3,
      sym_set_literal,
      sym_boolean,
      sym_string,
  [1212] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_comment,
    STATE(51), 1,
      sym__value,
    ACTIONS(248), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(8), 3,
      sym_set_literal,
      sym_boolean,
      sym_string,
  [1246] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(23), 1,
      sym__value,
    STATE(40), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(8), 3,
      sym_set_literal,
      sym_boolean,
      sym_string,
  [1277] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(41), 1,
      sym_comment,
    STATE(51), 1,
      sym__value,
    ACTIONS(248), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(8), 3,
      sym_set_literal,
      sym_boolean,
      sym_string,
  [1308] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(4), 1,
      aux_sym_constants_repeat1,
    STATE(20), 1,
      sym_constant_entry,
    STATE(42), 1,
      sym_comment,
    STATE(22), 2,
      sym_constant_assignment,
      sym_constant_substitution,
  [1328] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(30), 1,
      sym_boolean,
    STATE(43), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
  [1342] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_set_literal_repeat1,
  [1358] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_set_literal_repeat1,
  [1374] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_comment,
      aux_sym_set_literal_repeat1,
  [1388] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_invariants_repeat1,
    STATE(47), 1,
      sym_comment,
  [1401] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_invariants_repeat1,
    STATE(48), 1,
      sym_comment,
  [1414] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_invariants_repeat1,
    STATE(49), 1,
      sym_comment,
  [1427] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym_invariants_repeat1,
    STATE(50), 1,
      sym_comment,
  [1440] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1451] = 4,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_string_content,
    ACTIONS(283), 1,
      anon_sym_BSLASH_STAR,
    STATE(52), 1,
      sym_comment,
  [1464] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(53), 1,
      sym_comment,
  [1474] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_comment,
  [1484] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(55), 1,
      sym_comment,
  [1494] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(56), 1,
      sym_comment,
  [1504] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
  [1514] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(58), 1,
      sym_comment,
  [1524] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(59), 1,
      sym_comment,
  [1534] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(60), 1,
      sym_comment,
  [1544] = 3,
    ACTIONS(283), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(301), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_comment,
  [1554] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(62), 1,
      sym_comment,
  [1564] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(63), 1,
      sym_comment,
  [1574] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(64), 1,
      sym_comment,
  [1584] = 1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 267,
  [SMALL_STATE(12)] = 302,
  [SMALL_STATE(13)] = 337,
  [SMALL_STATE(14)] = 372,
  [SMALL_STATE(15)] = 406,
  [SMALL_STATE(16)] = 444,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 520,
  [SMALL_STATE(19)] = 558,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 627,
  [SMALL_STATE(22)] = 660,
  [SMALL_STATE(23)] = 693,
  [SMALL_STATE(24)] = 726,
  [SMALL_STATE(25)] = 759,
  [SMALL_STATE(26)] = 792,
  [SMALL_STATE(27)] = 824,
  [SMALL_STATE(28)] = 856,
  [SMALL_STATE(29)] = 888,
  [SMALL_STATE(30)] = 920,
  [SMALL_STATE(31)] = 952,
  [SMALL_STATE(32)] = 984,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1048,
  [SMALL_STATE(35)] = 1080,
  [SMALL_STATE(36)] = 1112,
  [SMALL_STATE(37)] = 1144,
  [SMALL_STATE(38)] = 1178,
  [SMALL_STATE(39)] = 1212,
  [SMALL_STATE(40)] = 1246,
  [SMALL_STATE(41)] = 1277,
  [SMALL_STATE(42)] = 1308,
  [SMALL_STATE(43)] = 1328,
  [SMALL_STATE(44)] = 1342,
  [SMALL_STATE(45)] = 1358,
  [SMALL_STATE(46)] = 1374,
  [SMALL_STATE(47)] = 1388,
  [SMALL_STATE(48)] = 1401,
  [SMALL_STATE(49)] = 1414,
  [SMALL_STATE(50)] = 1427,
  [SMALL_STATE(51)] = 1440,
  [SMALL_STATE(52)] = 1451,
  [SMALL_STATE(53)] = 1464,
  [SMALL_STATE(54)] = 1474,
  [SMALL_STATE(55)] = 1484,
  [SMALL_STATE(56)] = 1494,
  [SMALL_STATE(57)] = 1504,
  [SMALL_STATE(58)] = 1514,
  [SMALL_STATE(59)] = 1524,
  [SMALL_STATE(60)] = 1534,
  [SMALL_STATE(61)] = 1544,
  [SMALL_STATE(62)] = 1554,
  [SMALL_STATE(63)] = 1564,
  [SMALL_STATE(64)] = 1574,
  [SMALL_STATE(65)] = 1584,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constants, 2, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constants_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constants_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_entry, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_entry, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_literal, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_literal, 5, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_literal, 4, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_literal, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties, 2, 0, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties, 2, 0, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2, 0, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraints, 2, 0, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariants, 2, 0, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invariants, 2, 0, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_constraints, 2, 0, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_constraints, 2, 0, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariants_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_invariants_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_invariants_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constants_repeat1, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariants_repeat1, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_invariants_repeat1, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_assignment, 3, 0, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_assignment, 3, 0, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_substitution, 3, 0, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_substitution, 3, 0, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcondition, 2, 0, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcondition, 2, 0, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint, 2, 0, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_constraint, 2, 0, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symmetry, 2, 0, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symmetry, 2, 0, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 2, 0, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 2, 0, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_deadlock, 2, 0, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_deadlock, 2, 0, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view, 2, 0, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view, 2, 0, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 2, 0, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_specification, 2, 0, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init, 2, 0, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init, 2, 0, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next, 2, 0, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next, 2, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_literal_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tlaplus_cfg(void) {
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
