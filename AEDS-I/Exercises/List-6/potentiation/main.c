// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    float base,
          result = 1;
    int exponent;
    bool ERROR;

    // Initial Message
    printf("\n-- Potenciação --");

    // Getting the base
    printf("\nBase: ");
    scanf(" %f", &base);

    // Loop to get the exponent
    do {
        printf("\nExpoente (somente número natural): ");
        scanf(" %d", &exponent);
        ERROR = exponent < 0;
    } while (ERROR);

    // Loop to get the result of the potentiation
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    // Output Message
    printf("\nA potência de %d na base %.2f é igual a %.2f.", exponent, base, result);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}