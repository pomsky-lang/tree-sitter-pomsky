(number) @number
(string) @string
(stringOneChar) @string
(comment) @comment

"|" @punctuation.delimiter

[
  "-"
  "+"
  "?"
  "*"
  "<<"
  ">>"
  ("!" "<<")
  ("!" ">>")
] @operator

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket

[
  "U"
  "let"
  "lazy"
  "greedy"
  "range"
  "base"
  "atomic"
  "enable"
  "disable"
;  "if"
;  "else"
;  "recursion"
  "regex"
;  "test"
] @keyword
