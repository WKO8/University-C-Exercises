// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    float h;
    int denominador = 100;
    int terms;
    bool ERROR;
    
    // Initial Message
    printf("\n-- Valor de H --");

    // Loop to get the number of terms
    do {
        printf("Quando termos para a precisão de H? ");
        scanf("%d", &terms);
        ERROR = terms < 0;
    }  while (ERROR);

    // Loop to get all the terms of the sequence
    for (terms > 0; terms--;) {
       h += (float) 1 / (float) denominador;
       denominador -= 3;
    }

    // Output Message
    printf("O valor de h é igual a %.5f", h);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}
