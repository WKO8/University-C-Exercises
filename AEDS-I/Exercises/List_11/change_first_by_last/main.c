// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>

// Prototypes
void initialMessage();
void changeFirstByLast(float*, int);
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
    printf("-- Trocar Primeiro Elemento de um Vetor pelo Último --");
}

// changeFirstByLast function
void changeFirstByLast(float array[], int length) {
    float aux = array[0];
    array[0] = array[length-1];
    array[length-1] = aux;
}

// outputMessage function
void outputMessage() {
    float array[4] = {1, 2, 3 ,4};

    // Output Message
    printf("\n\nO primeiro e o último elemente  possuem, respectivamente, os valores %.2f e %.2f.", array[0], array[3]);
    changeFirstByLast(array, 4);
    printf("\n\nApós a troca, o primeiro e o último elemente passarem a possuir, respectivamente, os valores %.2f e %.2f.",  array[0], array[3]);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}