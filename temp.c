#include <stdio.h>

    int main() {
        #define LOWER 0
        #define UPPER 300
        #define STEP 20
        int fahr;
        printf("Fahrenheit Celcius\n");
        for (fahr = UPPER; fahr >= LOWER; fahr -= STEP){
            printf("%4d %6.1f\n", fahr, (5.0/9.0) *(fahr-32));
        } 
        return 0;
    }