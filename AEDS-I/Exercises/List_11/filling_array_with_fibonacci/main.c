// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
void fillingArrayFibonacci(int*, int);
void showAllArray(int*, int);
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
    printf("-- Preenchendo Arranjo com Sequência de Fibonacci --");
}

// fillingArrayFibonacci function
void fillingArrayFibonacci(int array[], int length) {
    array[0] = array[1] = 1;
    for (int i = 2; i < length; i++) {
        array[i] = array[i-1] + array[i-2];
    }
}

// showAllArray function
void showAllArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
}

// outputMessage function
void outputMessage() {
    int array[10];

    // Output Message
    fillingArrayFibonacci(array, 10);
    printf("\n\nElementos do array: ");
    showAllArray(array, 10);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}