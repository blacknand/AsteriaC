# AsteriaC Language Definition
AsteraC is a small C-like systems language.

## Lexical Structure
- keywords: `int`, `bool`, `void`, `if`, `else`, `while`, `return`, `true`, `false`
- operators: `+ - * / % == != < <= > >= && || = !`
- punctuation: `; , ( ) { }`
- identifiers: `[a-zA-Z_][a-zA-Z0-9_]*`
- integer literals: decimal only

## Informal Grammar
```
translation_unit  := function_def*
function_def      := type identifier "(" param_list? ")" compound_stmt
param_list        := param ("," param)*
param             := type identifier

type              := "int" | "bool" | "void"

compound_stmt     := "{" stmt* "}"
stmt              := expr_stmt
                   | return_stmt
                   | if_stmt
                   | while_stmt
                   | compound_stmt

expr_stmt         := expr? ";"
return_stmt       := "return" expr? ";"
if_stmt           := "if" "(" expr ")" stmt ("else" stmt)?
while_stmt        := "while" "(" expr ")" stmt

expr              := assignment
assignment        := logical_or ("=" assignment)?
logical_or        := logical_and ("||" logical_and)*
logical_and       := equality ("&&" equality)*
equality          := relational (("==" | "!=") relational)*
relational        := additive (("<" | "<=" | ">" | ">=") additive)*
additive          := multiplicative (("+" | "-") multiplicative)*
multiplicative    := unary (("*" | "/" | "%") unary)*
unary             := ("!" | "-") unary | primary
primary           := identifier
                   | integer_literal
                   | "true"
                   | "false"
                   | "(" expr ")"
                   | call_expr

call_expr         := identifier "(" arg_list? ")"
arg_list          := expr ("," expr)*
```
## Type Rules


## Semantics