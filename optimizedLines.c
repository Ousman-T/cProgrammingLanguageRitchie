#include <stdio.h>

int main()
{
    int c, nl = 0, tab = 0, ws = 0;
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\n':
            nl++;
            printf("New line: %d\n", nl);
            break;
        case '\t':
            tab++;
            printf("Tab: %d\n", tab);
            break;
        case ' ':
            ws++;
            printf("Whitespace: %d\n", ws);
            break;
        }
    }

    return 0;
}