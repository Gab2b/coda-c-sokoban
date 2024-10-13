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
    printf("\nVous avez gagné !\n");
    exit(1);
}

void defaite()
{
    printf("\nVous avez perdu !\n");
    exit(1);
}

void show_pos(xy joueur, xy caisse, xy objectif)
{
    printf("\n\nEmplacement du joueur : %d %d ", joueur.x, joueur.y);
    printf("\nEmplacement de la caisse : %d %d ", caisse.x, caisse.y);
    printf("\nEmplacement de l'objectif : %d %d ", objectif.x, objectif.y);
}