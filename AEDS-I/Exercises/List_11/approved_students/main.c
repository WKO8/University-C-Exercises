// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
int approvedStudents(float*, int);
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
    printf("-- Número de Alunos Aprovados --");
}

// approvedStudents function
int approvedStudents(float array[], int length) {
    int approvedStudents = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] >= 60) approvedStudents++;
    }
    return approvedStudents;
}

// outputMessage function
void outputMessage() {
    float scores[10] = {11.5, 62.5, 82.2, 44.2, 100, 53.5, 26.5, 65.2, 75.2, 15.0};
    // Saving the validateArray return in a variable
    int res = approvedStudents(scores, 10);

    // Output Message
    printf("\n\nAo todo foram %d alunos aprovados.", res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}