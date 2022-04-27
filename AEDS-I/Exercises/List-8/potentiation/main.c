// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototype of potentiation function
float potentiation(float, int);

int main() {
    // Declaring the variables
    float num;
    int pow;
    bool ERROR;

    // Initial Message
    printf("\n-- Fatorial --");

    // Getting a value
    printf("\nInforme um número: ");
    scanf("%f", &num);

    // Loop to get a valid value
    do {
        printf("\nInforme a potência: ");
        scanf("%d", &pow);
        ERROR = pow < 0;
    } while(ERROR);
    

    // Output message
    printf("\n%.2f elevado a %d é igual a %.2f.", num, pow, potentiation(num, pow));

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}

// Function to get the power of a number
float potentiation(float n, int p) {
    float res = n;

    for (int i = p; i > 1; i--) {
        res *= n;
    }

    return res;
}