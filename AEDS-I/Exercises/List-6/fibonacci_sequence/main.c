// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int n1 = 1,
        n2 = 1,
        terms;
    bool ERROR;

    // Initial Message
    printf("\n-- Sequência de Fibonacci --");

    // Loop to get a valid value for the terms variable
    do {
        printf("\nMostrar quantos termos da Sequência de Fibonacci? ");
        scanf(" %d", &terms);
        ERROR = terms < 0;
    } while (ERROR);
    
    // Conditions for checking the number of terms
    if (terms == 0) {
        printf("\nNenhum termo da sequência será mostrado.\n"); 
    } else if (terms == 1) {
        printf("\nTermos -> 1\n"); 
    } else {
        printf("\nTermos -> 1, 1");
        // Loop to calculate Fibonacci sequence numbers
        for (terms -= 2; terms > 0; terms--) {
            int n3 = n1 + n2;
            printf(", %d", n3);
            n1 = n2;
            n2 = n3; 
        }
    }

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}