// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
bool validateArray(float*, int);
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
    printf("-- Soma dos Valores de um Arranjo --");
}

// validateArray function
bool validateArray(float array[], int length) {
    bool validArray = true;
    for (int i = 0; i < length && validArray; i++) {
        if ((array[i] < 0) || (array[i] > 100)) validArray = false;
    }
    return validArray;
}

// outputMessage function
void outputMessage() {
    float scores[5] = {1.5, 22.5, 32.2, 44.2, 100};
    // Saving the validateArray return in a variable
    bool res = validateArray(scores, 4);

    // Output Message
    if (res) printf("\n\nO arranjo é válido, já que possui todos os valores dentro do domínio [0, 100].");
    else printf("\n\nO arranjo é inválido, já que não possui todos os valores dentro do domínio [0, 100].");
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}