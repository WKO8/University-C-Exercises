// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
int greatestCommomDivisor(int, int);
int requestFirstValue();
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
    printf("-- Maior Divisor Comum --");
}

// requestFirstValue function
int requestFirstValue() {
    // Declaring the variables
    int num1;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInsira um número natural: ");
        scanf("%d", &num1);
        ERROR = num1 < 0;
        if (ERROR) printf("\nInsira somente um número natural.\n");
    } while(ERROR);

    return num1;
}

// requestSecondValue function
int requestSecondValue() {
    // Declaring the variables
    int num2;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInsira mais um número natural: ");
        scanf("%d", &num2);
        ERROR = num2 < 0;
        if (ERROR) printf("\nInsira somente um número natural.\n");
    } while(ERROR);

    return num2;
}

// greatestCommomDivisor function
int greatestCommomDivisor(int num1, int num2) {
    // Declaring the variable
    while (num2 != 0) {
        return greatestCommomDivisor(num2, num1 % num2);
    }

    return num1;
}

// outputMessage function
void outputMessage() {
    // Saving the requestValue return in a variable
    int num1 = requestFirstValue();
    int num2 = requestSecondValue();
    int res = greatestCommomDivisor(num1, num2);

    // Output Message
    printf("\nO maior divisor comum entre %d e %d é %d", num1, num2, res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}