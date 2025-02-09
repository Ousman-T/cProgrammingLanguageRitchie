#include <stdio.h>

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main() {
    int c;
    printf("Insert text");
    while ((c = getchar()) != EOF) {
        putchar(lower(c));
    }
    return 0;
}