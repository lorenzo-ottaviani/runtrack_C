/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 31/03/2025 16h11
* But du programme :
*    Affiche un string dans le terminal.
* Entrée : ∅
* Sortie : Affichage du string.
*/

void my_putchar(char c);

void my_putstr(char *str) {
    while (*str) {      
        my_putchar(*str);
        str++;           
    }
}

int main() {
    my_putstr("Fratac center!");
    return 0;
}
