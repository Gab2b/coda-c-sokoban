#include "header.h"

int main(int argc, char const *argv[])
{
    char terrain[10][10];
    xy joueur, caisse, objectif;

    initialisation(terrain, &joueur, &caisse, &objectif);

    int game = 1;
    while (game)
    {
        system("clear");
        show_pos(joueur, caisse, objectif);
        show_tab(terrain);
        deplacement(terrain, &joueur, &caisse, &objectif);
        game = check_defaite(terrain, &caisse, &objectif);
    }

    defaite();
    

    return 0;
}
