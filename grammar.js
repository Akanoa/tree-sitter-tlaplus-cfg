/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "tlaplus_cfg",

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.specification,
      $.init,
      $.next,
      $.constants,
      $.invariants,
      $.properties,
      $.constraints,
      $.action_constraints,
      $.check_deadlock,
      $.symmetry,
      $.view,
      $.alias,
      $.postcondition,
      $.type_constraint,
    ),

    // Directive types
    specification: $ => seq(
      field("keyword", alias("SPECIFICATION", $.keyword)),
      field("name", $.identifier),
    ),

    init: $ => seq(
      field("keyword", alias("INIT", $.keyword)),
      field("name", $.identifier),
    ),

    next: $ => seq(
      field("keyword", alias("NEXT", $.keyword)),
      field("name", $.identifier),
    ),

    constants: $ => seq(
      field("keyword", alias(choice("CONSTANT", "CONSTANTS"), $.keyword)),
      repeat1($.constant_entry),
    ),

    invariants: $ => seq(
      field("keyword", alias(choice("INVARIANT", "INVARIANTS"), $.keyword)),
      repeat1($.identifier),
    ),

    properties: $ => seq(
      field("keyword", alias(choice("PROPERTY", "PROPERTIES"), $.keyword)),
      repeat1($.identifier),
    ),

    constraints: $ => seq(
      field("keyword", alias(choice("CONSTRAINT", "CONSTRAINTS"), $.keyword)),
      repeat1($.identifier),
    ),

    action_constraints: $ => seq(
      field("keyword", alias(choice("ACTION_CONSTRAINT", "ACTION_CONSTRAINTS"), $.keyword)),
      repeat1($.identifier),
    ),

    check_deadlock: $ => seq(
      field("keyword", alias("CHECK_DEADLOCK", $.keyword)),
      field("value", $.boolean),
    ),

    symmetry: $ => seq(
      field("keyword", alias("SYMMETRY", $.keyword)),
      field("name", $.identifier),
    ),

    view: $ => seq(
      field("keyword", alias("VIEW", $.keyword)),
      field("name", $.identifier),
    ),

    alias: $ => seq(
      field("keyword", alias("ALIAS", $.keyword)),
      field("name", $.identifier),
    ),

    postcondition: $ => seq(
      field("keyword", alias("POSTCONDITION", $.keyword)),
      field("name", $.identifier),
    ),

    type_constraint: $ => seq(
      field("keyword", alias(choice("TYPE", "TYPE_CONSTRAINT"), $.keyword)),
      field("name", $.identifier),
    ),

    // Constant entries: either assignment or substitution
    constant_entry: $ => choice(
      $.constant_assignment,
      $.constant_substitution,
      $.identifier,
    ),

    constant_assignment: $ => seq(
      field("name", $.identifier),
      "=",
      field("value", $._value),
    ),

    constant_substitution: $ => seq(
      field("name", $.identifier),
      "<-",
      field("value", $.identifier),
    ),

    // Values
    _value: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.boolean,
      $.set_literal,
    ),

    set_literal: $ => seq(
      "{",
      optional(seq(
        $._value,
        repeat(seq(",", $._value)),
        optional(","),
      )),
      "}",
    ),

    boolean: $ => choice("TRUE", "FALSE"),

    number: $ => /\d+/,

    string: $ => seq(
      '"',
      optional($.string_content),
      '"',
    ),

    string_content: $ => /[^"\\]+/,

    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    comment: $ => seq("\\*", /.*/),
  },
});
