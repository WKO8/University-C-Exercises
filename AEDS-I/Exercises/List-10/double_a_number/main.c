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
    printf("-- Dobra Valor --");
}

// requestNaturalNumber function
void doubleANumber(int* num) {
    *num *= 2;
}

// outputMessage function
void outputMessage() {
    // Output Message
    int x = 5;
    printf("\n\nO dobro de %d", x);

    doubleANumber(&x);
    printf(" é igual a %d.", x);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}