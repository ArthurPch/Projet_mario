#include "projet.h"

int main() {
    FILE *fichier = fopen("Mario.txt", "r");
    if (fichier == NULL) {
        printf("Impossible d'ouvrir le fichier Mario.txt\n");
        return 1;
    }

    int positionJoueur = 55; 

    afficherPaysage(fichier, positionJoueur);

    fclose(fichier);
    return 0;
}