#include <stdio.h>

    int main() {
        int c; 
        char nl, tab, ws;
        nl = 0;
        tab = 0;
        ws = ' ';
        while ((c = getchar()) != EOF) {
            if (c == '\n'){
                nl++;
            } 
            else if((c == '\t')) {
                tab++;
            }
            else if((c == ' ')) {
                ws++;
            }
            printf("New line %d\n", nl);
            printf("Tab %d\n", tab);
            printf("Whitespace %d\n", + ws);
        }
        return 0;
    }