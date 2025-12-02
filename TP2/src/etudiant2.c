#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note_prog;
    float note_sys;
};

int main() {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Leroy");
    strcpy(etudiants[0].prenom, "Thomas");
    strcpy(etudiants[0].adresse, "12 Rue Victor Hugo");
    etudiants[0].note_prog = 14.5;
    etudiants[0].note_sys = 12.0;

    strcpy(etudiants[1].nom, "Bernard");
    strcpy(etudiants[1].prenom, "Sophie");
    strcpy(etudiants[1].adresse, "48 Avenue des Fleurs");
    etudiants[1].note_prog = 11.0;
    etudiants[1].note_sys = 15.5;

    strcpy(etudiants[2].nom, "Rousseau");
    strcpy(etudiants[2].prenom, "Lucas");
    strcpy(etudiants[2].adresse, "5 Place de la Liberté");
    etudiants[2].note_prog = 16.0;
    etudiants[2].note_sys = 14.0;

    strcpy(etudiants[3].nom, "Morel");
    strcpy(etudiants[3].prenom, "Emma");
    strcpy(etudiants[3].adresse, "72 Boulevard du Parc");
    etudiants[3].note_prog = 9.0;
    etudiants[3].note_sys = 10.5;

    strcpy(etudiants[4].nom, "Blanc");
    strcpy(etudiants[4].prenom, "Nathan");
    strcpy(etudiants[4].adresse, "19 Rue des Lilas");
    etudiants[4].note_prog = 13.5;
    etudiants[4].note_sys = 11.0;

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.1f\n", etudiants[i].note_prog);
        printf("Note Systeme d'exploitation : %.1f\n\n", etudiants[i].note_sys);
    }

    return 0;
}