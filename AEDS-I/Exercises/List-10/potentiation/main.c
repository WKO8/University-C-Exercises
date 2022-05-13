// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
float potentiation(float, int);
float requestFirstValue();
int requestSecondValue();
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
    printf("-- Potenciação --");
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
int requestSecondValue() {
    // Declaring the variables
    int num;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInsira um número natural: ");
        scanf("%d", &num);
        ERROR = num < 0;
        if (ERROR) printf("\nInsira somente um número natural.\n");
    } while(ERROR);

    return num;
}

// potentiation function
float potentiation(float base, int exponent) {
    // Declaring the variable
    int res = -1;

    if (exponent == 0) return 1;
    while (exponent > 0) {
        res = base * potentiation(base, exponent - 1);
        return res;
    }
}

// outputMessage function
void outputMessage() {
    // Saving the requestValue return in a variable
    float base = requestFirstValue();
    int exponent = requestSecondValue();
    float res = potentiation(base, exponent);

    // Output Message
    printf("\nA potenciação de %.2f elevado a %d é igual a %.2f.", base, exponent, res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}