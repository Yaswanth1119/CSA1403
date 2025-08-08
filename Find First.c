#include <stdio.h>
#include <string.h>

int main() {
    char prod1[20], prod2[20], a[10], b[10];
    printf("Grammar: S → AaAb | BbBa\nA → ε\nB → ε\n");

    printf("Enter terminal after first A (AaAb): ");
    scanf("%s", a);

    printf("Enter terminal after first B (BbBa): ");
    scanf("%s", b);

    printf("\nFIRST(A) = { ε }\n");
    printf("FIRST(B) = { ε }\n");
    printf("FIRST(S) = { %c, %c }\n", a[0], b[0]);

    return 0;
}
