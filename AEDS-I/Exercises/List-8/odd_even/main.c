// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototype of odd_even function
bool odd_even(int);

int main() {
    // Declaring the variables
    int num;
    bool ERROR;

    // Initial Message
    printf("\n-- Par ou Ímpar --");

    // Loop to get a valid value
    do {
        printf("\nInforme um número inteiro: ");
        scanf("%d", &num);
        ERROR = num < 0;
    } while(ERROR);

    // Conditions to show the output messages
    if (odd_even(num)) printf("\nO número %d é par.", num);
    else printf("\nO número %d é ímpar.", num);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}

// Function to checking if the number is odd or even
bool odd_even(int n) {
    bool res;

    if (!(n % 2)) res = true;
    else res = false;

    return res;
}