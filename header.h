#ifndef __HEADER_H__
#define __HEADER_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef struct coordonnees
{
    int x;
    int y;
}xy;

void initialisation(char terrain[10][10], xy *joueur, xy *caisse, xy *objectif);
void microswitch(char terrain[10][10], int valeur, char xouy, xy *joueur, xy *caisse , xy *objectif);
int check_defaite(char terrain[10][10], xy *caisse, xy *objectif);
void deplacement(char terrain[10][10], xy *joueur, xy *caisse, xy *objectif);
void show_tab(char tableau[10][10]);
void show_pos(xy joueur, xy caisse, xy objectif);
void victoire();
void defaite();

#endif  