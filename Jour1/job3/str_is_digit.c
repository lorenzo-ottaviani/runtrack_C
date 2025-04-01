/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 01/04/2025 00h36
* But du programme :
*    Vérifie si tout les caractères de la string sont des nombres.
* Entrée : La chaîne de caractères à tester.
* Sortie : Affiche 1 si c'est la string contient que des nombres sinon 0.
*/

#include <stdio.h>

int str_is_digit(char *str) {
    int status = 1;

    while (*str) {
        if (*str < '0' || *str > '9') {  // Vérifie que le caractère n'est pas compris dans les codes ASCII des chiffres.
            status = 0;
            break;
        }
        str ++;
    }

    return status;
}

int main() {
    char text[100];

    printf("Veuillez entrer votre texte : ");
    scanf("%s", text);

    int value = str_is_digit(text);
    printf("%d", value);
    return 0;
}