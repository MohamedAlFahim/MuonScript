module.exports = grammar({
  name: "muonscript",

  extras: ($) => [$.comment, /\s+/],

  word: ($) => $.identifier,

  rules: {
    muonscript_module: ($) => repeat($._statement),
    comment: ($) => token(seq("//", /.*/)),
    _statement: ($) => choice($.import_statement, $.import_from_statement),
    import_statement: ($) =>
      seq(
        "import",
        field("module_path", $.dotted_name),
        optional(seq("as", field("alias", $.identifier)))
      ),
    import_from_statement: ($) =>
      seq(
        "from",
        field("module_path", $.dotted_name),
        "import",
        field("imported_members", $.imported_module_members)
      ),
    dotted_name: ($) => field("name", dotSep($.identifier)),
    module_member_import: ($) =>
      seq(
        field("module_member", $.identifier),
        optional(seq("as", field("alias", $.identifier)))
      ),
    imported_module_members: ($) => commaSep($.module_member_import),

    // Terminal
    identifier: ($) => /[A-Za-z][A-Za-z0-9_]*/,
    number: ($) => /\d+\.?\d*/,
  },
});

function commaSep(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function dotSep(rule) {
  return seq(rule, repeat(seq(".", rule)));
}
