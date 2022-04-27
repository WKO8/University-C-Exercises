// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototype of sum_values function
float square_perimeter(float);

int main() {
    // Declaring the variables
    float side;
    bool ERROR;

    // Initial Message
    printf("\n-- Perímetro do Quadrado --");

    // Loop to get a valid value
    do {
        printf("\nInforme o valor do lado do quadrado: ");
        scanf("%f", &side);
        ERROR = side <= 0;
    } while(ERROR);

    // Output Message
    printf("\nO perímetro do quadrado de lado %.2f é igual a %.2f.", side, square_perimeter(side));

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}

// Function to sum the values
float square_perimeter(float side) {
    float res = side * 4;

    return res;
}