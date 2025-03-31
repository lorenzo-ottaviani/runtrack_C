#include <stdio.h>

int my_strlen(char *str) {
    int len = 0;
    while (*str) {      
        len += 1;
        str ++;           
    }
    return len;
}

int main() {
    int len = my_strlen("Fratac center!");
    printf("%d", len);
    return 0;
}
