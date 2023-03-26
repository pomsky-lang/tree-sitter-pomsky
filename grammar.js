module.exports = grammar({
  name: 'pomsky',

  extras: $ => [$.comment, /[\s\p{Zs}\uFEFF\u2060\u200B]/],

  precedences: $ => [['repetition', 'alt', 'lookaround']],

  inline: $ => [$._expr, $._char_set_inner, $._single_char, $._repetition_count],

  conflicts: $ => [],

  supertypes: $ => [$.stmt, $.fix_expr, $.atom_expr],

  rules: {
    source_file: $ => optional($._expr),

    _expr: $ => choice(seq(repeat1($.stmt), optional($.or_expr)), $.or_expr),

    comment: $ => token(seq('#', /.*/)),

    stmt: $ => choice($.let_decl, $.modifier),

    let_decl: $ =>
      seq('let', field('name', $.ident), '=', field('value', optional($.or_expr)), ';'),

    modifier: $ => seq(field('type', $.modifier_kw), field('setting', $.bool_setting), ';'),
    modifier_kw: $ => choice('enable', 'disable'),
    bool_setting: $ => choice('unicode', 'lazy'),

    or_expr: $ =>
      seq(optional('|'), prec.left('alt', seq($.alternative, repeat(seq('|', $.alternative))))),
    alternative: $ => prec.left('alt', repeat1($.fix_expr)),

    fix_expr: $ => choice($.lookaround_expr, $.repetition_expr),

    lookaround_expr: $ =>
      prec.right('lookaround', seq(seq(optional('!'), choice('<<', '>>')), optional($._expr))),

    repetition_expr: $ =>
      prec.left(
        'repetition',
        seq($.atom_expr, optional(seq($._repetition_count, optional(choice('lazy', 'greedy'))))),
      ),
    _repetition_count: $ => choice('*', '+', '?', $.repetition_braces),
    repetition_braces: $ =>
      seq(
        '{',
        choice(
          field('count', $.number),
          seq(optional(field('lower', $.number)), ',', optional(field('upper', $.number))),
        ),
        '}',
      ),

    atom_expr: $ =>
      choice(
        $.group,
        $.string,
        $.char_set,
        $.inline_regex,
        $.boundary,
        $.reference,
        $.number_range,
        $.code_point,
        $.ident,
        '.',
      ),

    group: $ => seq(optional($.group_kind), '(', optional($._expr), ')'),
    group_kind: $ => choice(seq(':', optional($.ident)), 'atomic'),

    char_set: $ => seq(optional('!'), '[', repeat1($._char_set_inner), ']'),
    _char_set_inner: $ => choice($.range, $.string, $.code_point, seq(optional('!'), $.ident)),

    range: $ => seq($._single_char, '-', $._single_char),
    _single_char: $ => choice($.string, $.code_point, $.ident),

    inline_regex: $ => seq('regex', $.string),

    boundary: $ => choice('^', '$', seq(optional('!'), '%')),

    reference: $ => seq('::', choice($.ident, seq(optional(choice('+', '-')), $.number))),

    number_range: $ => seq('range', $.string, '-', $.string, optional(seq('base', $.number))),

    code_point: $ => seq('U', '+', /[\p{Alpha}\p{Nd}_]+/),

    ident: $ => /[\p{Alpha}_][\p{Alpha}\p{Nd}_]*/,
    number: $ => /[0-9][\p{Alpha}\p{Nd}_]*/,
    string: $ => choice(/"([^"\\]|\\.)*"/s, /'[^']*'/),
  },
})
