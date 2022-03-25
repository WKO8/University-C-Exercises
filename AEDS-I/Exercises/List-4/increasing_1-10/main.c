// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

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