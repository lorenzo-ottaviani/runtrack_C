/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 03/04/2025 14h25
* But du programme :
*    Diviser un nombre par 2.
* Entrée : ∅
* Sortie : Affiche le résultat de la division du nombre.
*/

#include <stdio.h>

void divide(int *val) {
        *val = *val / 2;
}

int main() {
    int nombre = 18;

    divide(&nombre);
    printf("%d", nombre);

    return 0;
}
