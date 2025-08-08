%{
#include <stdio.h>
%}

%%

https:\/\/[a-zA-Z0-9\-]+\.[a-zA-Z]{2,6}    { printf("Valid URL: %s\n", yytext); }
http:\/\/[a-zA-Z0-9\-]+\.[a-zA-Z]{2,6}     { printf("Valid URL: %s\n", yytext); }

.|\n    { /* Ignore other inputs */ }

%%

int yywrap(void) {
    return 1;
}

int main() {
    printf("Enter a URL:\n");
    yylex();
    return 0;
}
