module.exports = grammar({
  name: "muonscript",

  rules: {
    muonscript_module: ($) => repeat($._statement),
    _statement: ($) => "TODO",
    identifier: ($) => /[A-Za-z][A-Za-z0-9_]*/,
    number: ($) => /\d+\.?\d*/,
  },
});
