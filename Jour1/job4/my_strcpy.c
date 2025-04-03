/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 01/04/2025 14h32
* But du programme :
*    Copier une string.
* Entrée : ∅
* Sortie : Affiche la copie de la string.
*/

#include <stdio.h>

char *my_strcpy(char *dest, char *src) {
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i ++;
    }

    dest[i] = '\0';
    return dest;
}

int main() {
    char *src ="termite";
    char dest[8];

    my_strcpy(dest, src);
    printf("%s", dest);

    return 0;
}
