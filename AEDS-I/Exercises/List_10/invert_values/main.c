// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
void invertValues(float*, float*);
float requestFirstValue();
float requestSecondValue();
void outputMessage();
void finalMessage();

int main() {

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
    printf("-- Troca de Valores --");
}

// requestFirstValue function
float requestFirstValue() {
    // Declaring the variables
    float num;
    bool ERROR;

    // Getting a real value
    printf("\nInsira um número real: ");
    scanf("%f", &num);

    return num;
}

// requestSecondValue function
float requestSecondValue() {
    // Declaring the variables
    float num;
    bool ERROR;

    // Getting a real value
    printf("\nInsira mais um número real: ");
    scanf("%f", &num);

    return num;
}

// invertValues function
void invertValues(float* num1, float* num2) {
    float aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

// outputMessage function
void outputMessage() {
    // Saving the requestValue return in a variable
    float num1 = requestFirstValue();
    float num2 = requestSecondValue();

    // Output Message
    printf("\nOs números %.2f e %.2f invertidos ficam: ", num1, num2);
    invertValues(&num1, &num2);
    printf("%.2f e %.2f", num1, num2);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}