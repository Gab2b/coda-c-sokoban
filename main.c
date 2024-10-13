#include "header.h"

int main(int argc, char const *argv[])
{
    char terrain[10][10];
    xy joueur, caisse, objectif;

    initialisation(terrain, &joueur, &caisse, &objectif);

    int game = 1;
    printf("\n\033[0;33mBienvenue au jeu du Sokoban !\033[0m\n\033[1;33mPour jouer, utilisez les touches z, q, s, d pour vous déplacer\033[0m\n\n");
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
