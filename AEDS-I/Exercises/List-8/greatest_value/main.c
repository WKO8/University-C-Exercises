// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototype of greatest_value function
float greatest_value(float, float);

int main() {
    // Declaring the variables
    float value1,
          value2;
    bool ERROR;

    // Initial Message
    printf("\n-- Maior entre dois valores --");

    // Loop to get a valid value
    do {
        printf("\nPrimeiro valor: ");
        scanf("%f", &value1);
        ERROR = value1 < 0;
    } while(ERROR);

    // Loop to get one more valid value
    do {
        printf("\nSegundo valor: ");
        scanf("%f", &value2);
        ERROR = value2 < 0;
    } while(ERROR);

    // Output Message
    printf("\nO maior valor é %.2f", greatest_value(value1, value2));

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}

// Function to get the greatest value
float greatest_value(float n1, float n2) {
    float higher;

    if (n1 > n2) higher = n1;
    else higher = n2;

    return higher;
}