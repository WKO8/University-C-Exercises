// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototype of factorial function
int factorial(int);

int main() {
    // Declaring the variables
    int num;
    bool ERROR;

    // Initial Message
    printf("\n-- Fatorial --");

    // Loop to get a valid value
    do {
        printf("\nInforme um número natural: ");
        scanf("%d", &num);
        ERROR = num < 1;
    } while(ERROR);

    // Output message
    printf("\n%d! = ", num);

    for (int i = num; i > 1; i--) {
        printf("%d x ", i);
    }

    printf("1 = %d", factorial(num));

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}

// Function to get the factiorial of a number
int factorial(int n) {
    int res = 1;

    for (int i = n; i > 1; i--) {
        res *= i;
    }

   return res;
}