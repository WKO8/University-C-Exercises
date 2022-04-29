// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
int requestPosition();
int nthTerm(int);
void outputMessage();
void finalMessage();

// Main function
int main()
{
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
    printf("-- Enésimo termo de Fibonacci --");
}

// requestPosition function
int requestPosition() {
    int k;
    bool ERROR;

    do {
        printf("\nPosição do número na Sequência de Fibonacci: ");
        scanf("%d", &k);
        ERROR = k < 1;
        if (ERROR) printf("\n\nInsira um número natural.\n");
    } while(ERROR);

    return k;
}

// nthTerm function
int nthTerm(int k) {
    int n1 = 1;
    int n2 = 1;
    int aux;
    int res = -1;

    if (k == 1) res = 1;
    else if (k == 2) res = 1;
    else {
        for (int i = 3; i <= k; i++) {
            res = n1 + n2;
            aux = n2;
            n2 = res;
            n1 = aux;
        }
    }

    return res;
}

// outputMessage function
void outputMessage() {
    // Saving the requestPosition return in a variable
    int k = requestPosition();

    // Output Message
    printf("\nO número na posição %d é igual a %d.", k, nthTerm(k));
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}