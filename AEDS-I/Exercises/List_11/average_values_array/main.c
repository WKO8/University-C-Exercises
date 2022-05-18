// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>

// Prototypes
void initialMessage();
float sumValues(float*, int);
float averageValues(float*, int);
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
    printf("-- Média dos Valores de um Arranjo --");
}

// sumValues function
float sumValues(float array[], int length) {
    float sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}

// averageValues function
float averageValues(float array[], int length) {
    int elements = 0;
    for (int i = 0; i < length; i++) {
        elements++;
    }
    return sumValues(array, length) / elements;
}

// outputMessage function
void outputMessage() {
    float array[4] = {1, 2, 3 ,4};
    // Saving the averageValues return in a variable
    float res = averageValues(array, 4);

    // Output Message
    printf("\n\nA média dos valores do arranjo é igual a %.2f.", res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}