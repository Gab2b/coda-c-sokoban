#include "header.h"

void microswitch(char terrain[10][10], int valeur, char xouy, xy *joueur, xy *caisse , xy *objectif)
{
    if (xouy == 'x')
    {
        switch (terrain[joueur->x + valeur][joueur->y])
        {
            case ' ':
                terrain[joueur->x + valeur][joueur->y] = 'o';
                terrain[joueur->x][joueur->y] = ' ';
                joueur->x += valeur;
                break;
            
            case '#':
                printf("Il y a un mur dans votre chemin\n");
                break;

            case 'X':
                if (terrain[joueur->x+2*valeur][joueur->y] == ' ')
                {
                    terrain[joueur->x+2*valeur][joueur->y] = 'X';
                    terrain[joueur->x + valeur][joueur->y]  = 'o';
                    terrain[joueur->x][joueur->y] = ' ';
                    joueur->x += valeur;
                    caisse->x += valeur;
                }
                else if (terrain[joueur->x+2*valeur][joueur->y] == '.')
                {
                    victoire();
                }
                break;

            case '.':
            printf("Vous ne pouvez vous approcher de votre objectif, c'est ici que vous devez placer la caisse (X)");
                break;

            default:
                printf("\nERREUR DEPLACEMENT INCONNU");
                break;
        }
    }

    if (xouy == 'y')
    {
        switch (terrain[joueur->x][joueur->y + valeur])
        {
            case ' ':
                terrain[joueur->x][joueur->y + valeur] = 'o';
                terrain[joueur->x][joueur->y] = ' ';
                joueur->y += valeur;
                break;
            
            case '#':
                printf("Il y a un mur dans votre chemin\n");
                break;

            case 'X':
                if (terrain[joueur->x][joueur->y+2*valeur] == ' ')
                {
                    terrain[joueur->x][joueur->y+2*valeur] = 'X';
                    terrain[joueur->x][joueur->y + valeur]  = 'o';
                    terrain[joueur->x][joueur->y] = ' ';
                    joueur->y += valeur;
                    caisse->y += valeur;
                }
                else if (terrain[joueur->x][joueur->y+2*valeur] == '.')
                {
                    victoire();
                }
                break;

            case '.':
            printf("Vous ne pouvez vous approcher de votre objectif, c'est ici que vous devez placer la caisse (X)");
                break;

            default:
                printf("\nERREUR DEPLACEMENT INCONNU");
                break;
        }
    }
}

void deplacement(char terrain[10][10], xy *joueur, xy *caisse, xy *objectif)
{
    // Saisie du déplacement 

    char choix;
    printf("\nChoisissez un mouvement : haut(z), bas(s), droite(d), gauche(q)\n- ");
    scanf(" %c", &choix);

    switch (choix)
    {
    case 'z':
        // Déplacement vers le haut + possibilités 
        microswitch(terrain, -1, 'x', joueur, caisse, objectif);
        break;

    case 'q':
        // Déplacement vers la gauche + possibilités 

        microswitch(terrain, -1, 'y', joueur, caisse, objectif);
        break;

    case 's':
        // Déplacement vers le bas + possibilités 

        microswitch(terrain, 1, 'x', joueur, caisse, objectif);
        break;

    case 'd':
        // Déplacement vers la droite + possibilités 

        microswitch(terrain, 1, 'y', joueur, caisse, objectif);
        break;

    default:
        // Erreur potentielle ou mauvais scanf
        printf("\nERREUR SCANF CHOIX DIRECTION");
        break;
    }
}