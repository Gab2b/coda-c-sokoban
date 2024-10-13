# Sokoban en C

Bienvenue dans **Sokoban**, une version console du célèbre jeu de casse-tête où vous déplacez des blocs pour les positionner sur des cibles(objectif). Ce projet est entièrement développé en C et utilise une interface console colorée pour rendre l'expérience plus agréable. La compilation est gérée avec `make` pour simplifier le processus.

## Contenu du projet

- `header.h` : Header avec les prototypes de fonctions.
- `main.c` : Point d'entrée pour lancer le jeu.
- `deplacements.c` : Gestion des déplacements complexes et de certaines erreurs.
- `initialisation.c` : Création du terrain et des variables pour préparer le jeu.
- `caisse.c` : Gestion de fonctionnements relatifs à la caisse à déplacer.
- `Makefile` : Automatisation de la compilation et du nettoyage.
- `README.md` : Documentation du projet.

## Fonctionnalités

- Jeu classique de Sokoban avec déplacements dans une grille.
- Détection des victoires lorsque tous les blocs sont sur les cibles.
- Détection des défaites lorsque tous les blocs sont sur des cases où aucun chemin n'aboutit à la victoire.
- Interface utilisateur en console, avec une utilisation de couleurs pour améliorer l'affichage.
- Gestion des erreurs pour éviter les déplacements impossibles.

## Utilisation

Pour lancer le jeu, exécutez les commandes suivantes :

```bash
make all
./Sokoban
