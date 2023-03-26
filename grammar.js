module.exports = grammar({
  name: 'pomsky',

  extras: $ => [$.comment, /[\s\p{Zs}\uFEFF\u2060\u200B]/],

  precedences: $ => [['repetition', 'lookaround'], ['alt']],

  conflicts: $ => [[$.expr]],

  rules: {
    source_file: $ => optional($.expr),

    expr: $ => choice(seq($.stmt, optional($.expr)), $.orExpr),

    comment: $ => token(seq('#', /.*/)),

    stmt: $ => choice($.letDecl, $.modifier),

    letDecl: $ => seq('let', $.ident, '=', optional($.orExpr), ';'),

    modifier: $ => seq($.modifierKw, $.boolSetting, ';'),
    modifierKw: $ => choice('enable', 'disable'),
    boolSetting: $ => choice('unicode', 'lazy'),

    orExpr: $ => seq(optional('|'), $.alternatives),

    alternatives: $ => prec.left('alt', seq($.alternative, repeat(seq('|', $.alternative)))),
    alternative: $ => prec.left('alt', repeat1($.fixExpr)),

    fixExpr: $ => choice($.lookaroundExpr, $.repetitionExpr),

    lookaroundExpr: $ => prec.right('lookaround', seq($.lookaroundPrefix, optional($.expr))),
    lookaroundPrefix: $ => seq(optional('!'), choice('<<', '>>')),

    repetitionExpr: $ => prec.left('repetition', seq($.atomExpr, optional($.repetitionSuffix))),
    repetitionSuffix: $ => seq($.repetitionCount, optional($.quantifier)),
    repetitionCount: $ => choice('*', '+', '?', $.repetitionBraces),
    repetitionBraces: $ =>
      seq('{', choice($.number, seq(optional($.number), ',', optional($.number))), '}'),
    quantifier: $ => choice('lazy', 'greedy'),

    atomExpr: $ =>
      choice(
        $.group,
        $.string,
        $.charSet,
        $.inlineRegex,
        $.boundary,
        $.reference,
        $.numberRange,
        $.codePoint,
        $.ident,
        '.',
      ),

    group: $ => seq(optional($.groupKind), '(', optional($.expr), ')'),
    groupKind: $ => choice(seq(':', optional($.ident)), 'atomic'),

    charSet: $ => seq(optional('!'), '[', repeat1($.charSetInner), ']'),
    charSetInner: $ => choice($.range, $.string, $.codePoint, seq(optional('!'), $.ident)),
    range: $ => seq($.singleChar, '-', $.singleChar),
    singleChar: $ => choice($.stringOneChar, $.codePoint, $.nonPrintable),
    nonPrintable: $ => choice('n', 'r', 't', 'a', 'e', 'f'),

    inlineRegex: $ => seq('regex', $.string),

    boundary: $ => choice('^', '$', seq(optional('!'), '%')),

    reference: $ => seq('::', choice($.ident, seq(optional($.sign), $.number))),
    sign: $ => choice('+', '-'),

    numberRange: $ => seq('range', $.string, '-', $.string, optional(seq('base', $.number))),

    codePoint: $ => seq('U', '+', /[\p{Alpha}\p{Nd}_]+/),

    ident: $ => /[\p{Alpha}_][\p{Alpha}\p{Nd}_]*/,
    number: $ => /[0-9][\p{Alpha}\p{Nd}_]*/,
    string: $ => choice(/"([^"\\]|\\.)*"/s, /'[^']*'/),
    stringOneChar: $ => $.string,
  },
})
