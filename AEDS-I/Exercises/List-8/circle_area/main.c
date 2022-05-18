// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototype of square_perimeter function
void initialMessage();
float requestSide();
float square_perimeter(float);
void finalMessage();
void outputMessage();

// Main function
int main()
{
    // Initial Message
    initialMessage();

    // Output Message
    outputMessage();

    // Final Message
    finalMessage();

    return 0;
}

// initialMessage function
void initialMessage() {
    printf("\n-- Área do círculo --");
}

// requestSide function
float requestSide() {
    // Declaring the variables
    float side;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInforme o valor do raio do círculo: ");
        scanf("%f", &side);
        ERROR = side <= 0;
        if (ERROR) printf("\nInforme um valor válido.");
    } while(ERROR);

    return side;
}

// squarePerimeter function
float squarePerimeter(float side) {
    float res = -1;

    if (side > 0) {
        res = side * 4;
    }
    
    return res;
}

// outputMessage function
void outputMessage() {
    // Saving the requestSide return in a variable
    float side = requestSide();

    // Output Message
    printf("\nO perímetro do quadrado de lado %.2f é igual a %.2f.", side, squarePerimeter(side));
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}