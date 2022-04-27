// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

// Prototype of ideal_weight function
float ideal_weight(int, float, char);

int main() {
    // Declaring the variables
    int age;
    float height;
    char gender;
    bool ERROR;

    // Initial Message
    printf("\n-- Peso Ideal --");

    // Loop to get a valid value
    do {
        printf("\nInforme seu gênero [M/F]: ");
        scanf("%c", &gender);
        toupper(gender);
        ERROR = (gender != 'M') && (gender != 'F');
        if (ERROR) printf("Valor inválido. Digite somente M ou F.");
    } while(ERROR);

    // Loop to get a valid value
    do {
        printf("\nInforme sua idade: ");
        scanf("%d", &age);
        ERROR = age < 0;
    } while(ERROR);

    // Loop to get a valid value
    do {
        printf("\nInforme sua altura (em metros): ");
        scanf("%f", &height);
        ERROR = height < 0;
    } while(ERROR);


    //Output Message
    printf("Seu peso ideal é %.2f", ideal_weight(age, height, gender));

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}

// Function to checking if the year is a leap year or not
float ideal_weight(int age, float height, char gender) {
    float imc;

    if (gender == 'M') imc = 22 * pow(height, 2);
    else imc = 21 * pow(height, 2);

    return imc;
}