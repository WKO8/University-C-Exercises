// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int terms,
        ratio;
    float first_term;
    bool ERROR;

    // Initial Message
    printf("\n-- Progressão Geométrica --");

    // Loop to get the number of terms
    do {
        printf("\nQuantos termos da PG? ");
        scanf("%d", &terms);
        ERROR = terms < 0;
    } while (ERROR);

    // Getting the first number
    printf("\nPrimeiro termo da PG? ");
    scanf("%f", &first_term);

    // Getting the ratio
    printf("\nRazão da PG? ");
    scanf("%d", &ratio);

    printf("Termos: ");

    // Loop to get all the terms of the geometric progression
    for (terms > 0; terms--;) {
        printf("%.2f, ", first_term);
        first_term *= ratio;
    }

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}
