// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    // Declaring the variables
    int key_num,
        terms,
        first_term,
        ratio,
        res;
    char repeat;
    bool ERROR;

    // Loop to repeat the program
    do {
        // Initial Message
        printf("\n-- Termos divisíveis (P.A.) --");

        // Loop to get the key number
        do {
            printf("\nQual o número que os termos devem ser divisíveis? ");
            scanf(" %d", &key_num);
            ERROR = terms < 0; 
        } while (ERROR);
        
        // Loop to get the number of terms
        do {
            printf("\nQuantos termos deseja? ");
            scanf(" %d", &terms);
            ERROR = terms < 0;
        } while (ERROR);

        // Loop to get the first term
        do {
            printf("\nPrimeiro termo: ");
            scanf(" %d", &first_term);
            ERROR = first_term < 0;
        } while (ERROR);

        // Loop to get the ratio
        do {
            printf("\nRazão: ");
            scanf(" %d", &ratio);
            ERROR = ratio < 0;
        } while (ERROR);

        // Conditions for checking if terms equals zero or not.
        if (terms == 0) {
            printf("\nNão há termos divisíveis por %d.", key_num);
        } else {
            printf("\nTermos divisíveis: ");

            // Condition to check if the first term is divisible by the key number
            if (!(first_term % key_num)) {
                printf("%d, ", first_term);
                terms--;
            }

            // Loop to get all terms of arithmetic progression
            while (terms > 0) {
                res = first_term += ratio;

                // Condition to check if the terms is divisible by the key number
                if (!(res % key_num)) {
                    printf("%d, ", first_term);
                    terms--;
                }
            }
        }

        // Loop to get a valid input to repeat or not the program
        do {
            printf("\n\nDeseja realizar um novo cálculo [S/N]? ");
            scanf(" %c", &repeat);
            repeat = toupper(repeat);
            ERROR = (repeat != 'S') && (repeat != 'N');
        } while (ERROR);
    } while (repeat == 'S');
    
    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}