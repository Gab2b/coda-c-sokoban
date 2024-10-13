#include "header.h"

void show_tab(char tableau[10][10])
{
    printf("\n\n");

    for (int k = 0; k < 10; k++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %c ", tableau[k][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void victoire()
{
    printf("\n\033[0;32m★★ - Bien joué vous avez gagné !- ★★\033[0m\n\n");
    exit(1);
}

void defaite()
{
    printf("\n\033[0;31mVous avez perdu !\033[0m\n\n");
    exit(1);
}

void show_pos(xy joueur, xy caisse, xy objectif)
{
    printf("\n\n\033[0;96mEmplacement du joueur :\033[0m %d %d ", joueur.x, joueur.y);
    printf("\n\033[0;96mEmplacement de la caisse :\033[0m %d %d ", caisse.x, caisse.y);
    printf("\n\033[0;96mEmplacement de l'objectif :\033[0m %d %d ", objectif.x, objectif.y);
}