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

void menu(*fichier, positionJoueur) {
    int choix;
    

    printf("+---------------------------------------------+");
    printf("\n|     Bienvenue sur le meilleur jeu Mario     |\n");
    printf("|                                             |\n");  
    printf("|                   - Menu -                  |\n");  
    printf("|                                             |\n");  
    printf("|                  1. Jouer                   |\n");  
    printf("|                  2. Score                   |\n");  
    printf("|                  3. Quitter                 |\n"); 
    printf("+---------------------------------------------+\n");
    printf("Choisissez une option : ");
    scanf("%d",&choix);
    switch (choix) 
    {
    case 1:
        afficherPaysage(*fichier, positionJoueur); // Remplacer par la fonction jouer
        break;

    case 2:
        // Mettre la fonction du score ici
        break;

    case 3:
        break;

    default:
        printf("Choix invalide, veuillez réessayer\n");
        menu();
        break;
    }
}