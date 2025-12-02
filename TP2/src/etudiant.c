#include <stdio.h>

int main() {
    char noms[5][30] = {
        "Leroy", "Bernard", "Rousseau", "Morel", "Blanc"
    };

    char prenoms[5][30] = {
        "Thomas", "Sophie", "Lucas", "Emma", "Nathan"
    };

    char adresses[5][100] = {
        "12 Rue Victor Hugo",
        "48 Avenue des Fleurs",
        "5 Place de la Liberté",
        "72 Boulevard du Parc",
        "19 Rue des Lilas"
    };

    float note_prog[5] = { 14.5, 11.0, 16.0, 9.0, 13.5 };
    float note_sys[5]  = { 12.0, 15.5, 14.0, 10.5, 11.0 };

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", note_prog[i]);
        printf("Note Systeme d'exploitation : %.1f\n", note_sys[i]);
        printf("\n");
    }

    return 0;
}