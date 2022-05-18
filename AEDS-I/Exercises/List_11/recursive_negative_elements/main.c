// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>

// Prototypes
void initialMessage();
void negativeElements(float*, int, int*);
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
    printf("-- Quantidade de Elementos Negativos (Forma Recursiva) --");
}

// negativeElements function
void negativeElements(float array[], int length, int* elements) {
    if (array[length] < 0) ++*elements;
    if (length > 0) negativeElements(array, --length, elements);
}

// outputMessage function
void outputMessage() {
    float array[5] = {-1.1, 2, -3, -4.4, 5};
    int res = 0;
    negativeElements(array, 5, &res);
 
    // Output Message
    printf("\n\nA quantidade de elementos negativos é %d.", res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}