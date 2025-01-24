#ifndef PROJET_H
#define PROJET_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

void menu();

void afficherPaysage(FILE *fichier, int positionJoueur);

typedef struct{
    int positionX;
    int positionY;
    int saut;
    int enjeu;
} Personnage;

void cacherCurseur();

void positionnerCurseur(int x, int y);

void initialiserPersonnage(Personnage* perso);

void afficherGrille(Personnage* perso);

void avancer(Personnage* perso);

void reculer(Personnage* perso);

void sauter(Personnage* perso, int direction);

void quitterJeu(Personnage* perso);

void deplacement(Personnage* perso);

#endif 