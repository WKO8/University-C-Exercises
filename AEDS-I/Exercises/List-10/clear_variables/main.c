// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
void clearVariables(int*, int*);
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
    printf("-- Zerar Variáveis --");
}

// requestFirstValue function
float requestFirstValue() {
    // Declaring the variables
    float num;

    // Getting a real value
    printf("\nInsira um número real: ");
    scanf("%f", &num);

    return num;
}

// requestSecondValue function
float requestSecondValue() {
    // Declaring the variables
    float num;

    // Getting a real value
    printf("\nInsira mais um número real: ");
    scanf("%f", &num);

    return num;
}

// clearVariables function
void clearVariables(int* var1, int* var2) {
    *var1 = 0;
    *var2 = 0;
}

// outputMessage function
void outputMessage() {
    // Saving the requestValue return in a variable
    int var1 = 4;
    int var2 = 5;

    // Output Message
    printf("\nAs variáveis var1 e var2 possuem, respectivamente, os valores %d e %d.", var1, var2);
    clearVariables(&var1, &var2);
    printf("\nApós a limpeza, as variáveis passarem a possuir, respectivamente, os valores %d e %d.", var1, var2);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}