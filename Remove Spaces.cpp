#include <stdio.h>
#include <string.h>

int main() {
    char input[300], clean[300];
    int i = 0, j = 0, in_comment = 0;

    printf("Enter a line of C code:\n");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0') {
        // Remove // comment
        if (!in_comment && input[i] == '/' && input[i + 1] == '/') break;

        // Start of /* */ comment
        if (!in_comment && input[i] == '/' && input[i + 1] == '*') {
            in_comment = 1;
            i += 2;
            continue;
        }

        // End of /* */ comment
        if (in_comment && input[i] == '*' && input[i + 1] == '/') {
            in_comment = 0;
            i += 2;
            continue;
        }

        if (in_comment) {
            i++;
            continue;
        }

        // Remove tabs, newlines, and repeated spaces
        if (input[i] != '\t' && input[i] != '\n' && !(input[i] == ' ' && input[i+1] == ' '))
            clean[j++] = input[i];

        i++;
    }

    clean[j] = '\0';

    printf("\nCleaned Code:\n%s\n", clean);
    return 0;
}
