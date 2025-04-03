/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 03/04/2025 15h19
* But du programme :
*    Échanger la valeur de deux nombres.
* Entrée : ∅
* Sortie : Affiche les nouvelles valeurs des nombres.
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp1 = *a;
    int temp2 = *b;
    *b = temp1;
    *a = temp2;
}

int main() {
    int nb1 = 30;
    int nb2 = 5;

    swap(&nb1, &nb2);
    printf("%d\n%d", nb1, nb2);

    return 0;
}
