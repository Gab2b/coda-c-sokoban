#include "header.h"

void initialisation(char terrain[10][10], xy *joueur, xy *caisse, xy *objectif)
{
    // Initialisation des bordures du terrain

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || j == 0 || j == 9 || i == 9)
            {
                terrain[i][j] = '#';
            }
            else
            {
                terrain[i][j] = ' ';
            }
        }
    }

    // Création et placement du joueur de façon aléatoire sur le terrain

    srand(time(NULL));
    
    joueur->x = 1 + rand() % 8;
    joueur->y = 1 + rand() % 8;

    do
    {
        caisse->x = 2  + rand() % 6;
        caisse->y = 2 + rand() % 6;
    } while (caisse->x == joueur->x && caisse->y == joueur->y);

    do
    {
        objectif->x = 1 + rand() % 8;
        objectif->y = 1 + rand() % 8;
    } while ((objectif->x == caisse->x && objectif->y == caisse->y) || (objectif->x == joueur->x && objectif->y == joueur->y));

    terrain[joueur->x][joueur->y] = 'o';
    terrain[caisse->x][caisse->y] = 'X';
    terrain[objectif->x][objectif->y] = '.';
    
}