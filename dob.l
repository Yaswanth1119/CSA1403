%{
#include <stdio.h>
%}

%%

(0[1-9]|[12][0-9]|3[01])-(0[1-9]|1[0-2])-[0-9][0-9][0-9][0-9] {
    printf("Valid DOB: %s\n", yytext);
}

.+ {
    printf("Invalid DOB: %s\n", yytext);
}

%%

int yywrap(void) {
    return 1;
}

int main() {
    printf("Enter DOB (DD-MM-YYYY): ");
    yylex();
    return 0;
}
