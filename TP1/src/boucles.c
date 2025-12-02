#include <stdio.h>

int main() {
    int compteur = 5; 
    
    if (compteur >= 10 || compteur <= 0) {
        printf("Erreur\n");
        return 1;
    }
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1 || i == compteur) {
                printf("* ");
            } else {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("# ");
            }
        }
        printf("\n"); 
    }

    return 0;
}
