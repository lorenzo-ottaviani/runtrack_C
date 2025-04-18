/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 18/04/2025 10h48
* But du programme :
*    Trie une liste de fruits dans l'ordre croissant.
* Entrée : ∅
* Sortie : Affiche la liste triée.
*/

#include <stdio.h>

char **sort(char **strs) {
    int i, j;
    char *temp;
    int n = 0;

    // Calcul de la taille du tableau
    while (strs[n] != NULL) {
        n++;
    }

    // Tri à bulles
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            int k = 0;
            
            while (strs[j][k] != '\0' && strs[j + 1][k] != '\0' && strs[j][k] == strs[j + 1][k]) {
                k++;
            }

            // On inverti les chaines si nécessaire
            if (strs[j][k] > strs[j + 1][k] || (strs[j][k] == '\0' && strs[j + 1][k] != '\0')) {
                temp = strs[j];
                strs[j] = strs[j + 1];
                strs[j + 1] = temp;
            }
        }
    }

    return strs;
}

int main() {
    char *fruits[] = {"pomme", "abricot", "fraise", "banane", "orange", "mangue", "litchi", NULL};

    // Tri du tableau de fruits
    char **tri = sort(fruits);

    // Affichage des fruits triés
    for (int i = 0; tri[i] != NULL; i++) {
        printf("%s\n", tri[i]);
    }

    return 0;
}
