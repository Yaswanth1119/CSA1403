#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char *word) {
    char *keywords[] = {"int", "float", "return", "if", "else", "while", "for"};
    for (int i = 0; i < 7; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char input[200];
    char word[30];
    int i = 0, j = 0;

    printf("Enter a line of C code:\n");
    fgets(input, sizeof(input), stdin); // takes the whole line

    printf("\nTokens:\n");

    while (input[i] != '\0') {
        char ch = input[i];

        if (isalnum(ch) || ch == '.') {
            word[j++] = ch;
        } else {
            word[j] = '\0';
            j = 0;

            if (strlen(word) > 0) {
                if (isdigit(word[0]))
                    printf("Constant: %s\n", word);
                else if (isKeyword(word))
                    printf("Keyword: %s\n", word);
                else
                    printf("Identifier: %s\n", word);
            }

            if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=')
                printf("Operator: %c\n", ch);
        }
        i++;
    }

    return 0;
}
