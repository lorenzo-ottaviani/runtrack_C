/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 18/04/2025 18h17
* But du programme :
*    Élève un nombre x à la puissance n.
* Entrée : ∅
* Sortie : Affiche le nombre élevé à la puissance n.
*/

#include <stdio.h>

int power(int n, int power) {
    int calcul = 1;

    while (power > 0) {
        calcul *= n;
        power -= 1;
    }

    return calcul;
}


int main() {
    int nb_1 = 2;
    int nb_2 = 3;

    int puissance = power(nb_1, nb_2);
    printf("%d", puissance);

    return 0;
}
