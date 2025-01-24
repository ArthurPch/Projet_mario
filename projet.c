#include "projet.h"

void caracterePaysage(char caractereActuel) {
    switch (caractereActuel) {
        case 'w':
            printf("#");
            break;
        case 'c':
            printf("o");
            break;
        default:
            printf("%c", caractereActuel);
            break;
    }
}

void afficherPaysage(FILE *fichier, int positionJoueur) {
    char ligne[1024];

    int debutLecture = positionJoueur - 21;
    int finLecture = positionJoueur + 21 - 1;

    rewind(fichier);

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        int longueurLigne = strlen(ligne);

        if (ligne[longueurLigne - 1] == '\n') {
            ligne[--longueurLigne] = '\0';
        }

        for (int i = 0; i < longueurLigne; i++) {
            if (i >= debutLecture && i < finLecture) {
                caracterePaysage(ligne[i]);
            } else {
                continue;
            }
        }
        printf("\n"); 
    }
}