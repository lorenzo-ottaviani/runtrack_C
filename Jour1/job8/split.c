/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 03/04/2025 11h06
* But du programme :
*    Découper une phrase en mots et les insérer dans un tableau.
* Entrée : ∅
* Sortie : Affiche le tableau de mots.
*/

#include <stdio.h>  // Pour utiliser printf
#include <stdlib.h>  // Pour utiliser malloc

char **split(char *src) {
    // Compte le nombre de mots dans la phrase
    int mot = 1;
    char *temp = src;

    while (*temp) {
        if (*temp == ' ') {
            mot++;
        }
        temp++;
    }

    // Alloue de la mémoire pour le tableau de mots
    char **dest = (char**) malloc(sizeof(char*) * (mot + 1));
    if (dest == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return NULL;
    }

    // Alloue de la mémoire pour chaque mot et les copie
    int i = 0;
    int longueur_mot = 0;
    temp = src;

    while (*temp) {
        if (*temp != ' ') {
            longueur_mot++;
        } else if (longueur_mot > 0) {

            // Allouer de la mémoire pour un mot
            dest[i] = (char*) malloc(sizeof(char) * (longueur_mot + 1));
            if (dest[i] == NULL) {
                printf("Erreur d'allocation mémoire.\n");
                return NULL;
            }

            // Copier le mot dans le tableau
            for (int j = 0; j < longueur_mot; j++) {
                dest[i][j] = *(temp - longueur_mot + j);
            }
            dest[i][longueur_mot] = '\0';
            i++;
            longueur_mot = 0;
        }
        temp++;
    }

    // Traiter le dernier mot (s'il existe)
    if (longueur_mot > 0) {
        dest[i] = (char*) malloc(sizeof(char) * (longueur_mot + 1));
        if (dest[i] == NULL) {
            printf("Erreur d'allocation mémoire.\n");
            return NULL;
        }

        // Copier le dernier mot dans le tableau
        for (int j = 0; j < longueur_mot; j++) {
            dest[i][j] = *(temp - longueur_mot + j);
        }
        dest[i][longueur_mot] = '\0';
        i++;
    }

    dest[i] = NULL; // Marquer la fin du tableau de mots
    return dest;
}

int main() {
    char src[] = "La termite se balade dans sa galerie et se met à en creuser une nouvelle.";
    char **dest = split(src);

    // Afficher les mots extraits
    int i = 0;
    while (dest[i] != NULL) {
        printf("%s\n", dest[i]);
        i++;
    }

    return 0;
}

