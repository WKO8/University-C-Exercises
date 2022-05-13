// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
int requestNaturalNumber();
void requestNaturalNumber2(int*);
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
    printf("-- Soma de dois números naturais --");
}

// requestNaturalNumber function
int requestNaturalNumber() {
    // Declaring the variables
    int num;
    bool ERROR;

    // Getting a real value
    do {
        printf("\nInsira um número natural: ");
        scanf("%d", &num);
        ERROR = num < 0;
        if (ERROR) printf("Digite um número inteiro maior ou igual a zero.");
    } while (ERROR);

    return num;
}

// requestNaturalNumber function
void requestNaturalNumber2(int* num) {
    // Declaring the variables
    int number = 0;
    bool ERROR;

    // Getting a real value
    do {
        printf("\nInsira um número natural: ");
        scanf("%d", &number);
        ERROR = number < 0;
        if (ERROR) printf("Digite um número inteiro maior ou igual a zero.");
    } while (ERROR);

    *num = number;
}

// outputMessage function
void outputMessage() {
    // Saving the requestValue return in a variable
    int num1 = requestNaturalNumber();
    int num2 = 0;
    requestNaturalNumber2(&num2);
    int res = num1 + num2;

    // Output Message
    printf("\nResultado: %d + %d = %d", num1, num2, res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}