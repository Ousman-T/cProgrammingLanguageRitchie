#include <stdio.h>
int power(int x, int n)
{
    int i, p = 1;
    for (i = 1; i <= n; i++)
    {
        p = p * x;
    }
    return p;
}

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}