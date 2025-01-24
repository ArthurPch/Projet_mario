#include "projet.h"

int main() {
    FILE *fichier = fopen("Mario.txt", "r");
    if (fichier == NULL) {
        printf("Impossible d'ouvrir le fichier Mario.txt\n");
        return 1;
    }

<<<<<<< HEAD
    menu();
=======
    int positionJoueur = 55; 

    afficherPaysage(fichier, positionJoueur);

    fclose(fichier);
>>>>>>> 6fab25637bf4e928bec90c0412e41093c72ad29f
    return 0;
}