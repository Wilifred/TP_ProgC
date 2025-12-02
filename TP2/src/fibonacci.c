#include <stdio.h>

int main() {
    int n = 6;
    int u0 = 0;
    int u1 = 1;

    printf("%d, %d", u0, u1);

    for (int i = 2; i <= n; i++) {
        int un = u0 + u1;
        printf(", %d", un);
        u0 = u1;
        u1 = un;
    }

    return 0;
}