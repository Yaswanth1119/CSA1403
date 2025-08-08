%{
#include <stdio.h>
%}

%%

[0-9]+    { printf("Valid number: %s\n", yytext); }
.+        { printf("Invalid input: %s\n", yytext); }

%%

int yywrap(void) {
    return 1;
}

int main() {
    printf("Enter input: ");
    yylex();
    return 0;
}
