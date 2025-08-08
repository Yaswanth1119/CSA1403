#include <stdio.h>
#include <string.h>

int main() {
    char nonTerm[10], alpha[20], beta[20];

    printf("Enter non-terminal with left recursion (e.g. A): ");
    scanf("%s", nonTerm);
    printf("Enter alpha (recursive part, e.g. Aα): ");
    scanf("%s", alpha);
    printf("Enter beta (non-recursive part): ");
    scanf("%s", beta);

    printf("\nAfter eliminating left recursion:\n");
    printf("%s → %s %s'\n", nonTerm, beta, nonTerm);
    printf("%s' → %s %s' | ε\n", nonTerm, alpha, nonTerm);

    return 0;
}
