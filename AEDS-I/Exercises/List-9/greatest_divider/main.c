#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
int requestValue();
int greatestDivider(int);
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
    printf("-- Maior divisor --");
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

// greatestDivider function
int greatestDivider(int num) {
    // Declaring the variable
    int res = -1;

    if (num > 0) {
        // Loop to get all possible dividers of the number
        for (int i = 1; i <= (num/2); i++) {
            if (num % i == 0) res = i;
        }
    }
    
    return res;
}


// outputMessage function
void outputMessage() {
    // Saving the requestValue return in a variable
    int num = requestValue();
    int res = greatestDivider(num);

    // Output Message
    printf("\nO maior divisor do número %d sem ser ele mesmo é o número %d.", num, greatestDivider(num));
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}