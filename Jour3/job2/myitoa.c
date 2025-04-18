/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 18/04/2025 17h57
* But du programme :
*    Convertit un nombre entier en une chaîne de caractères.
* Entrée : ∅
* Sortie : Affiche la chaîne de caractères.
*/

#include <stdio.h>  // Pour utiliser printf
#include <stdlib.h>  // Pour utiliser malloc

char *my_itoa(int n) {
    // Calculer nombre de chiffres de l'entier
    int chiffres = n;
    int taille = 0;

    if (n == 0) {
        taille = 1;  // Lorsque le nombre est 0, il a un chiffre tout de même.
    } else {
        while (chiffres !=0) {
            chiffres /= 10;
            taille ++;
        }
    }

    // Affecte de la mémoire pour la chaîne de caractères
    char *str = (char*) malloc(taille + 1);

    // Créer le caractère de fin de chaîne
    str[taille] = '\0';

    // Construire la chaîne en partant de la fin
    while (n > 0) {
        str[--taille] = (n % 10) + '0';
        n /= 10;
    }
    

    return str;

}


int main() {
    int entier = 1234;

    char *str_entier = my_itoa(entier);
    printf("%s", str_entier);

    return 0;
}
