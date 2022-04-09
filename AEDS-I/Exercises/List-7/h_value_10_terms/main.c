// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int num = 11,
        den = 101,
        terms;
    float div,
          res = 0;
    bool ERROR;
    
    // Initial Message
    printf("\n-- Valor de H - Com precisão de 10 termos --\n");
    
    // Loop to get and calculate all the terms
    for (int i = 0; i < 10; i++) {
        // Conditions for checking if the counter is odd or even
        if (!(i % 2)) {
            div = (float) num / (float) den;
            printf("%d / %d + ", num, den);
            res += div;
        } else {
            div = (float) den / (float) num;
            printf("%d / %d + ", den, num);
            res += div;
        }
        
        // Increasing the numerator and denominator by 1
        num++;
        den++;
        
    }
    
    // Output Message
    printf("\n\nResultado: %.2f", res);
    
    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}