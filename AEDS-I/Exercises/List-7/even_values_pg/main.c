// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int terms,
        even_terms = 0,
        first_term;
    float ratio;
    bool ERROR;

    // Initial Message
    printf("\n-- Valores Pares de uma P.G. --\n");

    // Loop to get the number of terms
    do {
        printf("\nQuantidade de termos da P.G.: ");
        scanf("%d", &terms);
        ERROR = terms < 0;
    } while(ERROR);
    
    // Loop to get the first term
    do {
        printf("\nPrimeiro termo da P.G.: ");
        scanf("%d", &first_term);
        ERROR = first_term < 0;
        if (ERROR) printf("\nDigite um número natural.\n");
    } while(ERROR);

    // Get the ratio of the P.G.
    printf("\nRazão da P.G.: ");
    scanf("%f", &ratio);

    // Begin of output message
    printf("\nTermos pares: ");

    // Loop to get all the terms of the P.G.
    for (int i = first_term; i < terms; i *= ratio) {
        // Condition for checking if the term is even or odd
        if (!(i % 2)) {
            printf("%d, ", i);
            even_terms++;
        }
    }

    // End of output message
    printf("\nEsta P.G. possui %d valores pares.", even_terms);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}
