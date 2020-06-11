module.exports = grammar({
  name: "muonscript",

  extras: ($) => [$.comment, /\s+/],

  word: ($) => $.identifier,

  rules: {
    muonscript_module: ($) => repeat($._statement),
    comment: ($) => token(seq("//", /[^/].*/)),
    doc_comment: ($) => token(seq("///", /.*/)),
    doc_comment_block: ($) => repeat1($.doc_comment),
    _statement: ($) =>
      choice(
        $.import_statement,
        $.import_from_statement,
        $.named_function_definition,
        $.class_definition
      ),
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
    named_function_definition: ($) =>
      seq(
        "func",
        field("name", $.identifier),
        optional(seq("->", field("return_type", $.dotted_name))),
        "{",
        optionalDoc($),
        optional(field("suite", $.suite)),
        "}"
      ),
    class_definition: ($) =>
      seq(
        "class",
        field("name", $.identifier),
        "{",
        optionalDoc($),
        optional(field("suite", $.class_suite)),
        "}"
      ),
    suite: ($) => repeat1($._statement),
    class_suite: ($) => repeat1(
      $.named_function_definition
    ),

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

function optionalDoc(dollar) {
  return optional(field("doc", dollar.doc_comment_block));
}
