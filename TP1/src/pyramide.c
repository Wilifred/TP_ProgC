#include <stdio.h>

int main() {
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++) {

        // espaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // nombres croissants
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // nombres décroissants
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}