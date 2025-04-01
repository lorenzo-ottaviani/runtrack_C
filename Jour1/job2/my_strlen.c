/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 31/03/2025 22h33
* But du programme :
*    Affiche la longueur du string dans le terminal.
* Entrée : ∅
* Sortie : Affichage de la longueur du string.
*/

#include <stdio.h>

int my_strlen(char *str) {
    int len = 0;
    while (*str) {      
        len += 1;
        str ++;           
    }
    return len;
}

int main() {
    int len = my_strlen("Fratac center!");
    printf("%d", len);
    return 0;
}
