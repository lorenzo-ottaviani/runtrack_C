#include <stdio.h>

int char_is_digit(char c) {
    int status;

    if (c >= '0' && c <= '9') {  // Vérifie que le caractère est compris dans les codes ASCII des chiffres.
        status = 1;
    } else {
        status = 0;
    };
    return status;
}

int main() {
    char letter;

    printf("Veuillez entrer une seul symbole : ");
    scanf("%c", &letter);

    int value = char_is_digit(letter);
    printf("%d", value);
    return 0;
}