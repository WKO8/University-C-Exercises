#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int num = 1,
        den = 100,
        terms;
    bool ERROR;
    
    // Initial Message
    printf("\n-- Valor de H - Modificado --\n");
    
    // Loop to get the number of terms
    do {
        printf("Numero de termos da sequencia: ");
        scanf("%d", &terms);
        ERROR = terms < 0;
    } while (ERROR);
    
    // Declaring the result variable
    float res;
    
    // Loop to get and calculate all the terms
    for (int i = 0; i < terms; i++) {
        // Conditions for checking if the counter is odd or even
        if (!(i % 2)) {
            res = (float) num / (float) den;
            printf("%d / %d , %.3f, ", num, den, res);
        } else {
            res = (float) den / (float) num;
            printf("%d / %d , %.3f, ", den, num, res);
        }
        // Increasing the numerator by 1 and decreasing the denominator by three
        num++;
        den -= 3;
    }
    
    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}