#include <stdio.h>

main() {
    int count, column = 0;
    int spaceSize, c, tabSize;
    printf("How long would you like your tab spacing?");
    if(scanf("%d", &spaceSize) != 1 || spaceSize <= 0) {
        fprintf(stderr, "Invalid tab size, defaulting to eight. \n");
        tabSize = 8;
    }
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            spaceSize++;
            column++;
            if (column % tabSize == 0) {
                putchar('\t');
                spaceSize = 0;
            }
        } else {
            while (spaceSize > 0) {
                putchar(' ');
                spaceSize--;
            }
            if (c == '\n') {
                putchar(c);
                column = 0;
            } else {
                putchar(c);
                column++;
            }
        }
}
return 0;
}
