module.exports = grammar({
  name: "muonscript",

  word: ($) => $.identifier,

  rules: {
    muonscript_module: ($) => repeat($._statement),
    _statement: ($) => $.import_statement,
    import_statement: ($) =>
      seq(
        "import",
        field("name", dotSep($.identifier)),
        optional(seq("as", field("alias", $.identifier)))
      ),

    // Terminal
    identifier: ($) => /[A-Za-z][A-Za-z0-9_]*/,
    number: ($) => /\d+\.?\d*/,
  },
});

function dotSep(rule) {
  return seq(rule, repeat(seq(".", rule)));
}
