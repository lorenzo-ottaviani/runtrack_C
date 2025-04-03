/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 02/04/2025 11h41
* But du programme :
*    Copier une string en allouant de la mémoire pour la copie et enlevant les espaces au début et à la fin de la string.
* Entrée : ∅
* Sortie : Affiche la copie de la string.
*/

#include <stdio.h>  // Pour utilser printf
#include <stdlib.h>  // Pour utiliser malloc

char *trim (char *src) {
    int i = 0;
    int j = 0;
    char *dest = (char*) malloc(8); 

    if (dest == NULL) { 
        printf("Erreur d'allocation mémoire.\n");
        return NULL;
    }

    while (src[i] != '\0') {

        if (src[i] != ' ') {
            dest[j] = src[i];
            j ++;
        }
    
        i ++;
    }

    dest[j] = '\0';

    return dest;
}

int main() {
    char src[] =" termite ";

    char *dest = trim(src);
    printf("%s", dest);

    // Pas à utiliser ici car on veut conserver la copie
    // free(dest); 

    return 0;
}
