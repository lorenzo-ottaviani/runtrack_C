/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 13/04/2025 10h56
* But du programme :
*    Trie une liste de fruits dans l'ordre croissant.
* Entrée : ∅
* Sortie : Affiche la liste triée.
*/

#include <stdio.h>  // Pour utiliser printf
#include <stdlib.h>  // Pour utiliser malloc

char **sort(char **strs) {

}


int main() {
    char *fruits[] = {"pomme", "abricot", "fraise", "banane", "orange", "mangue", "litchi", NULL};

    char **tri = sort(fruits);

    // Affichage des fruits triés
    for (int i = 0; tri[i] != NULL; i++) {
        printf("%s\n", tri[i]);
    }

    return 0;
}