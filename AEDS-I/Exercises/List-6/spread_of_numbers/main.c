// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int num,
        max = 0,
        min,
        terms = 0,
        spread = 0;
    bool ERROR;
    
    // Initial Message
    printf("\n-- Amplitude de um conjunto de números --");

    // Loop to get all the set of numbers
    do {
        printf("\nNúmero (0 = parar): ");
        scanf(" %d", &num);
        ERROR = num < 0;
        // Conditions for checking error, none value and valid value
        if (num == 0 && terms == 0) {
            printf("\nNenhum valor informado.");
            printf("\n\nPrograma finalizado com sucesso.\n\n");
            exit(1);
        } else if (num == 0 && terms > 0) {
            break;
        } else if (ERROR) {
            printf("\nValor inválido, tente novamente.\n");
        } else {
            if (num > max) max = num;
            else if (num < min) min = num;

            terms++;
        }
    } while ((ERROR) || (num != 0));

    // Calculating the spread
    spread = max - min;

    // Output Message
    printf("\n%d - %d = %d\nO valor da amplitude é igual a %d.", max, min, spread, spread);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}
