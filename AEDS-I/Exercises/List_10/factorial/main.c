// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
int factorial(int);
int requestValue();
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
    printf("-- Fatorial --");
}

// requestValue function
int requestValue() {
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

// factorial function
int factorial(int num) {
    // Declaring the variable
    int res = -1;

    if (num == 0) return 1;
    while (num > 0) {
        res = num * factorial(num - 1);
        return res;
    }
}

// outputMessage function
void outputMessage() {
    // Saving the requestValue return in a variable
    int num = requestValue();
    int res = factorial(num);

    // Output Message
    printf("\nO fatorial de %d é igual a %d.", num, res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}