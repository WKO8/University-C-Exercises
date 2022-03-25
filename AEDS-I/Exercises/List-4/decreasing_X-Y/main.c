// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int limite_inferior;
    int limite_superior;
    
    printf("\n\tNúmeros Inteiros de X a Y\n");

    printf("Digite o limite inferior: ");
    scanf(" %d", &limite_inferior);
    
    printf("Digite o limite superior: ");
    scanf(" %d", &limite_superior);

    // Most effective way using the for loop
    // for (limite_superior; limite_superior >= limite_inferior; limite_superior--) {
    //     printf("%d\n", limite_superior);
    // }

    // Limiting to exercise statement
    do {
        printf("%d\n", limite_superior); 
        limite_superior--;
    } while (limite_superior >= limite_inferior);
}