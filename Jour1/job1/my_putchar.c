/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 31/03/2025 15h53
* But du programme :
*    Affiche le caractère w dans le terminal.
* Entrée : ∅
* Sortie : Affichage du caractère w.
*/

#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    my_putchar('w');
    return 0;
}
