/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 19/04/2025 17h06
* But du programme :
*    Calcule la racine carrée entière d'un nombre n, si elle existe.
* Entrée : ∅
* Sortie : Affiche la racine carrée entière de n, sinon 0.
*/

#include <stdio.h>

int sqrt(int n) {
    int calcul = 0;

    if (n == 1) {
        calcul = 1;
    } else if (n > 1) {
        int i = 2;
        while (i * i <= n) {
            if (i * i == n) {
                calcul = i;
                break;
            } else {
                i ++;
            }
        }
    }

    return calcul;
}


int main() {
    int nombre = 64;

    int racine = sqrt(nombre);
    printf("%d", racine);

    return 0;
}
