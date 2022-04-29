// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
int requestFirstValue();
int requestSecondValue();
bool primeNumberToEachOther(int, int);
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
    printf("-- Números primos entre si --");
}

// requestFirstValue function
int requestFirstValue() {
    // Declaring the variables
    int n1;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInsira um número natural: ");
        scanf("%d", &n1);
        ERROR = n1 < 0;
        if (ERROR) printf("\n\nInsira um número natural.\n");
    } while(ERROR);

    return n1;
}

// requestSecondValue function
int requestSecondValue() {
    // Declaring the variables
    int n2;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInsira mais um número natural: ");
        scanf("%d", &n2);
        ERROR = n2 < 0;
        if (ERROR) printf("\n\nInsira um número natural.\n");
    } while(ERROR);

    return n2;
}

// primeNumberToEachOther function
bool primeNumberToEachOther(int n1, int n2) {
    // Declaring the variable
    bool res = true;

    if (n1 && n2 > 0) {
        // Loop to get all possible dividers of n2
        for (int i = 2; i <= (n2/2); i++) {
            if (n2 % i == 0) {
                if (n1 % i == 0) {
                    res = false;
                    return res;
                }
            }
            
        }
        // Loop to get all possible dividers of n1
        for (int i = 2; i <= (n1/2); i++) {
            if (n1 % i == 0) {
                if (n2 % i == 0) {
                    res = false;
                    return res;
                }
            }
            
        }
    }
    
    return res;
}

// outputMessage function
void outputMessage() {
    // Saving the requestFirstValue, requestSecondValue and primeNumberToEachOther returns in variables
    int n1 = requestFirstValue();
    int n2 = requestSecondValue();
    int res = primeNumberToEachOther(n1, n2);


    // Condition to check whether n1 and n2 are prime numbers to each other or not and print the output message.
    if (res) printf("Os números %d e %d são primos entre si.", n1, n2);
    else printf("Os números %d e %d não são primos entre si.", n1, n2);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}