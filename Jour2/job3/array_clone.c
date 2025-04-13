/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 13/04/2025 10h56
* But du programme :
*    Copier un certain nombre de chaînes de caractères d'un tableau de chaînes de caractères.
* Entrée : ∅
* Sortie : Affiche la copie réalisée.
*/

#include <stdio.h>  // Pour utiliser printf
#include <stdlib.h>  // Pour utiliser malloc

int longueur(const char *s) {
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}

char **array_clone(char **str, int n) {
    // Compte le nombre réel de chaînes à copier (max n, ou jusqu'à NULL)
    int count = 0;
    while (count < n && str[count] != NULL) {
        count++;
    }

    // Alloue de la mémoire pour le tableau de pointeurs (+1 pour NULL final)
    char **copie = malloc((count + 1) * sizeof(char *));
    if (!copie) return NULL;

    // Copie chaque chaîne une par une
    for (int i = 0; i < count; i++) {
        int len = longueur(str[i]);
        copie[i] = malloc((len + 1) * sizeof(char)); // +1 pour '\0'
        if (!copie[i]) return NULL;

        // Copie caractère par caractère
        for (int j = 0; j <= len; j++) {
            copie[i][j] = str[i][j];
        }
    }

    // Termine le tableau par NULL
    copie[count] = NULL;

    return copie;
}

int main() {
    char *texte[] = {
        "La route est longue pour la petite chenille, mais un jour papillon elle deviendra.",
        "Quand l'hirondelle reviendra, les fleurs des cerisiers auront inondé les prairies de leurs couleurs.",
        NULL
    };
    int taille = 5;

    char **copie = array_clone(texte, taille);

    // Affichage pour vérifier
    for (int i = 0; copie[i] != NULL; i++) {
        printf("Original : %s\n", texte[i]);
        printf("Copie    : %s\n\n", copie[i]);
    }

    return 0;
}
