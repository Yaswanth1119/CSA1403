#include <stdio.h>
#include <string.h>

char input[100];
int pos = 0;

void E();
void E_();
void T();
void T_();
void F();

void error() {
    printf("Invalid Expression\n");
    exit(0);
}

void match(char expected) {
    if (input[pos] == expected) pos++;
    else error();
}

void E() {
    T(); E_();
}

void E_() {
    if (input[pos] == '+') {
        pos++;
        T();
        E_();
    }
}

void T() {
    F(); T_();
}

void T_() {
    if (input[pos] == '*') {
        pos++;
        F();
        T_();
    }
}

void F() {
    if (input[pos] == '(') {
        pos++;
        E();
        if (input[pos] == ')') pos++;
        else error();
    } else if (input[pos] == 'i') {
        pos++;
    } else {
        error();
    }
}

int main() {
    printf("Enter expression (use 'i' for id): ");
    scanf("%s", input);
    E();
    if (input[pos] == '\0') printf("Valid Expression\n");
    else error();
    return 0;
}
