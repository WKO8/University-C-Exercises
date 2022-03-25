// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t-- Verificar se um ano é bissexto ou não --\n");

    int ano;

    printf("\nDigite o ano: ");
    scanf("%d", &ano);

    if (((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0)) || ((ano % 4 == 0) && (ano % 100 != 0)) || ((ano % 4 != 0) && (ano % 400 == 0))) {
        printf("%d é um ano bissexto", ano);
    } else printf("%d não é um ano bissexto", ano);

    return 0;
}
