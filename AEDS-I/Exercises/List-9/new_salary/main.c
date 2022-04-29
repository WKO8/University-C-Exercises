// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
float requestSalary();
float requestPercentageIncrease();
float newSalary(float, float);
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
    printf("-- Novo salário --");
}

// requestSalary function
float requestSalary() {
    // Declaring the variables
    float salary;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInsira seu salário atual: ");
        scanf("%f", &salary);
        ERROR = salary < 0;
        if (ERROR) printf("\n\nInsira um valor válido.\n");
    } while(ERROR);

    return salary;
}

// requestPercentageIncrease function
float requestPercentageIncrease() {
    // Declaring the variables
    float percentage;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInsira o percentual de aumento: ");
        scanf("%f", &percentage);
        ERROR = percentage < 0;
        if (ERROR) printf("\n\nInsira um valor válido.\n");
    } while(ERROR);

    return percentage;
}

// newSalary function
float newSalary(float salary, float percentage) {
    // Declaring the variables
    float res = -1;

    if (salary && percentage > 0) {
        // Calculating the new salary with the percentage increase
        res = salary + (salary * percentage / 100);
    }

    return res;
}


// outputMessage function
void outputMessage() {
    // Saving the requestSalary, requestPercentageIncrease and newSalary returns in variables
    float oldSalary = requestSalary();
    float percentage = requestPercentageIncrease();
    float res = newSalary(oldSalary, percentage);

    // Output Message
    printf("\nSeu salário de R$%.2f com o reajuste percentual de %.2f%% foi para R$%.2f.", oldSalary, percentage, res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}