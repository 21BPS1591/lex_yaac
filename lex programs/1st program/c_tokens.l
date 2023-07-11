%{
#include <stdio.h>
%}

%%

"auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"register"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"   { printf("Keyword: %s\n", yytext); }
[_a-zA-Z][_a-zA-Z0-9]*  { printf("Identifier: %s\n", yytext); }
[+\-*/%]                { printf("Operator: %s\n", yytext); }
[0-9]+                  { printf("Literal: %s\n", yytext); }
[ \t\n]                 ; // skip whitespace characters
.                       ; // skip unrecognized characters

%%

int main() {
    yylex();
    return 0;
}

