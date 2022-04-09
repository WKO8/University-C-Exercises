// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int num,
        div = 2;
    bool ERROR;

    // Initial Message
    printf("\n-- Identificador de Número Primo --\n");

    // Loop to get a natural number
    do {
        printf("Digite um número natural: ");
        scanf("%d", &num);
        ERROR = num < 0;
    } while(ERROR);

    // Loop to get all the possible dividers of the number
    for (int i = 2; i <= (num / 2); i++){
        // Condition for checking if the division rest of the number by possible divisor is odd or even
        if(!(num % i)){
            div++;
        }
    }
    // Conditions for checking if the number of dividers is greater than 2 or not
    if (div > 2){
        printf("O número %d não é primo e possui %d divisores.", num, div);
    } else {
        printf("O número %d é primo e possui somente %d divisores: 1 e %d.", num, div, num);
    }
     
    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}
