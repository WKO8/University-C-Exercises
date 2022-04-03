// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int num,
        res = 1;
    bool ERROR;

    // Initial Message
    printf("\n-- Fatorial --");

    // Loop to get the key number
    do {
        printf("\nDigite um número: ");
        scanf("%d", &num);
        ERROR = num < 0;
    } while (ERROR);

    printf("\n%d! = ", num, num);

    // Loop to get all the numbers less than key number
    for (int i = num; i > 0; i--) {
        // Condition for checking if the counter is odd or even
        if (i == 1) {
            printf("%d", i);
        } else {
            res *= i;
            printf("%d x ", i);
        }
    }

    // Final Output Message
    printf(" => %d", res);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}