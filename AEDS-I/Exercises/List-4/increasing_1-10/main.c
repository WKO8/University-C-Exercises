#include <stdlib.h>
#include <stdio.h>

int main()
{
    int inteiro = 1;
    printf("\n\tNúmeros Inteiros de 1 a 10\n");

    // Most effective way using the for loop
    // for (int i = 1; i <= 10; i++) {
    //     printf("%d\n", i);
    // }

    // Limiting to exercise statement
    do {
        printf("%d\n", inteiro);
        inteiro++;
    } while (inteiro <= 10);
}