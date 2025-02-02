#include <stdio.h>

    int main() {
        int lower, upper, step;
        float fahr, celcius;
        lower = 0;
        upper = 300;
        step = 20;
        fahr = lower;

        while (fahr <= upper) {
            celcius = (5.0/9.0) * (fahr - 32);
            printf("%4.0f %6.1f\n", fahr, celcius);
            fahr += fahr + step;
        }
        return 0;
    }