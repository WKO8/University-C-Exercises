// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototype of greatest_value_v2 function
float greatest_value_v2(float, float);

int main() {
    // Declaring the variables
    int flag = 0;
    float num;
    float higher_value;
    bool ERROR;

    // Initial Message
    printf("\n-- Maior entre dois valores --");

    // Loop to getting valid values and calling the greatest_value_v2 function
    while (num != flag) {
        do {
            printf("\nDigite um valor: ");
            scanf(" %f", &num);
            ERROR = num < 0;
        } while(ERROR);
  
        if (num != flag) higher_value = greatest_value_v2(num, higher_value);
    }

    // Output Message
    printf("\nO maior valor é %.2f", higher_value);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}

// Function to get the greatest value
float greatest_value_v2(float n, float higher_value) {
    float higher = higher_value;

    if (n > higher) higher = n;

    return higher;
}