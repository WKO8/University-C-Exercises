// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>

// Prototypes
void initialMessage();
int negativeElements(float*, int);
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
    printf("-- Quantidade de Elementos Negativos --");
}

// negativeElements function
int negativeElements(float array[], int length) {
    float elements = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] < 0) elements++;
    }
    return elements;
}

// outputMessage function
void outputMessage() {
    float array[5] = {-1.1, 2, -3, -4.4, 5};
    // Saving the averageValues return in a variable
    int res = negativeElements(array, 5);

    // Output Message
    printf("\n\nA quantidade de elementos negativos é %d.", res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}