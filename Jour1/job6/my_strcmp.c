/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 02/04/2025 09h44
* But du programme :
*    Comparer la valeur numérique de deux strings.
* Entrée : ∅
* Sortie : Une valeur numérique :
            - positive si la première string est plus grande,
            - négative si elle est plus petite,
            - nulle si elles sont identiques.
*/

#include <stdio.h>

int my_strcmp(char *s1, char *s2) {
    int counter = 0;

    int i = 0;
    while (s1[i] !='\0' && s2[i] !='\0') {
        if (s1[i] > s2[i]) {
            counter += 1;
        }
        else if (s1[i] < s2[i]) {
            counter -= 1;
        }
        i ++;
    }

    return counter;
}

int main() {
    char s1[] ="termite";
    char s2[] ="cloporte";

    int result = my_strcmp(s1, s2);
    printf("%d", result);

    return 0;
}
