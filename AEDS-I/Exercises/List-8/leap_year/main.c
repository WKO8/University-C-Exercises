// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototype of leap_year function
bool leap_year(int);

int main() {
    // Declaring the variables
    int year;
    bool ERROR;

    // Initial Message
    printf("\n-- Ano bissexto --");

    // Loop to get a valid value
    do {
        printf("\nInforme um ano: ");
        scanf("%d", &year);
        ERROR = year < 0;
    } while(ERROR);

    // Conditions to show the output messages
    if (leap_year(year)) printf("\nO número %d é bissexto.", year);
    else printf("\nO número %d não é bissexto.", year);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}

// Function to checking if the year is a leap year or not
bool leap_year(int year) {
    bool res;

    if (!(year % 4)) {
        if (!(year % 100)) {
            if (!(year % 400)) {
                res = true;
            } else res = false;
        } else res = true;
    } else {
        if (!(year % 400)) {
            res = true;
        } else res = false;
    }

    return res;
}