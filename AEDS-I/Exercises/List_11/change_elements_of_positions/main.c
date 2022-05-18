// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
void changeElementsOfPositions(float*, int, int, int);
int requestFirstPosition();
int requestSecondPosition();
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
    printf("-- Trocar Dois Elemento de Posição --");
}

// changeElementsOfPositions function
void changeElementsOfPositions(float array[], int length, int pos1, int pos2) {
    float aux = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = aux;
}

// requestFirstPosition function
int requestFirstPosition() {
    // Declaring the variables
    int num;

    // Getting a real value
    printf("\nInsira a primeira posição: ");
    scanf("%d", &num);

    return num;
}

// requestSecondPosition function
int requestSecondPosition() {
    // Declaring the variables
    int num;

    // Getting a real value
    printf("\nInsira a segunda posição: ");
    scanf("%d", &num);

    return num;
}

// outputMessage function
void outputMessage() {
    bool ERROR;
    float array[4] = {1, 2, 3 ,4};
    // Saving the valid requestFirstPosition and requestSecondPosition returns in variables
    int firstPosition;
    int secondPosition;

    do {
        firstPosition = requestFirstPosition();
        ERROR = (firstPosition < 0)|| (firstPosition > 3);
        if (ERROR) printf("\nDigite uma posição de 0 a 3.");
    } while (ERROR);

    do {
        secondPosition = requestSecondPosition();
        ERROR = (secondPosition < 0)|| (secondPosition > 3);
        if (ERROR) printf("\nDigite uma posição de 0 a 3.");
    } while (ERROR);
    
    

    // Output Message
    printf("\n\nO primeiro e o último elemente  possuem, respectivamente, os valores %.2f e %.2f.", array[firstPosition], array[secondPosition]);
    changeElementsOfPositions(array, 4, firstPosition, secondPosition);
    printf("\n\nApós a troca, o primeiro e o último elemente passarem a possuir, respectivamente, os valores %.2f e %.2f.",  array[firstPosition], array[secondPosition]);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}