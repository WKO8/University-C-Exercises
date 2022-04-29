// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
int requestValue();
bool primeNumber(int);
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
    printf("-- Número Primo --");
}

// requestValue function
int requestValue() {
    // Declaring the variables
    int num;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInsira um número natural: ");
        scanf("%d", &num);
        ERROR = num < 0;
        if (ERROR) printf("\n\nInsira um número natural.\n");
    } while(ERROR);

    return num;
}

// primeNumber function
bool primeNumber(int num) {
    // Declaring the variable
    bool res = true;

    if (num > 0) {
        // Loop to get all possible dividers of the number
        for (int i = 2; i <= (num/2); i++) {
            if (num % i == 0) {
                res = false;
                return res;
            }
        }
    }
    
    return res;
}


// outputMessage function
void outputMessage() {
    // Saving the requestValue and primeNumber returns in variables
    int num = requestValue();
    bool res = primeNumber(num);

    // Output Message
    if (res) printf("\nO número %d é primo.", num);
    else printf("\nO número %d não é primo.", num);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}