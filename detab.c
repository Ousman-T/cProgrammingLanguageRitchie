#include <stdio.h>

int main() {
    int count, column = 0;
    int c;
    int tabSize;
    printf("How large would you like tab to be?");
    if(scanf("%d", &tabSize) != 1 || tabSize <= 0) {
        printf(stderr, "Invalid tab size, defaulting to eight.\n");
        tabSize = 8;
    }

    while (c = getchar() != '\n' && c != EOF) {
        ;
    }
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            int spaces = tabSize - (column % tabSize);
            for (int i = 0; i < spaces; i++) {
                putchar(' ');
            }
            column += spaces;
        } else if (c == '\n') {
            putchar(c);
            column = 0;
        } else {
            putchar(c);
            column++;
        }
    }
    return 0;
}