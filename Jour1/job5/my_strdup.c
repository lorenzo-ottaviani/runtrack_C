/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 01/04/2025 15h33
* But du programme :
*    Copier une string en allouant de la mémoire pour la copie.
* Entrée : ∅
* Sortie : Affiche la copie de la string.
*/

#include <stdio.h>  // Pour utilser printf
#include <stdlib.h>  // Pour utiliser malloc

char *my_strdup(char *src) {
    int i = 0;
    char *dest = (char*) malloc(8); 

    if (dest == NULL) { 
        printf("Erreur d'allocation mémoire.\n");
        return NULL;
    }

    while (src[i] != '\0') {
        dest[i] = src[i];
        i ++;
    }

    dest[i] = '\0';
    

    return dest;
}

int main() {
    char *src ="termite";

    char *dest = my_strdup(src);
    

    printf("%s", dest);

    // Pas à utiliser ici car on veut conserver la copie
    // free(dest); 

    return 0;
}
