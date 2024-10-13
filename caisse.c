#include "header.h"

int check_defaite(char terrain[10][10], xy *caisse, xy *objectif)
{
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    int nombre_murs = 0;
    int murs_objectif = 0;

    for (int i = 0; i < 4; i++)
    {
        if (terrain[caisse->x + directions[i][0]][caisse->y] == '#' || terrain[caisse->x][caisse->y + directions[i][1]] == '#')
        {       
            nombre_murs +=1;
        }
        if (terrain[objectif->x + directions[i][0]][objectif->y] == '#' || terrain[objectif->x][objectif->y + directions[i][1]] == '#')
        {
            murs_objectif +=1;
        }
        
    }

    if (nombre_murs >= 2)
    {
        return 0;
    }
    else if (nombre_murs == 1 && murs_objectif == 0)
    {
        return 0;
    }
    else if (nombre_murs == 1 && murs_objectif == 1)
    {
        if (caisse->x != objectif->x && caisse->y != objectif->y)
        {
            return 0;
        }
        
    }
    
    return 1;
    
}