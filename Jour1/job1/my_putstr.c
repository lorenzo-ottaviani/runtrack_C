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
