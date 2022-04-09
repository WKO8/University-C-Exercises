// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int num,
        sum = 0;
    bool ERROR;

    // Initial Message
    printf("-- Identificador de Número Perfeito --!\n");

    // Loop to get a natural number
    do {
        printf("Digite um número natural e positivo: ");
        scanf("%d", &num);
        ERROR = num < 1;
    } while(ERROR);

    // Loop to get all the possible dividers of the number
    for (int i = 1; i <= (num / 2); i++){
        if(!(num % i)){
            sum += i;
        }
    }
    // Conditions to check if the sum is equal to the number or not
    if (sum == num) {
        printf("%d é um número perfeito.", num);
    } else {
        printf("%d não é um número perfeito.", num);
    }

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}
