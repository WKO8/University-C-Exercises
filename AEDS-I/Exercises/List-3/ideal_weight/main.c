// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    float altura;
    float peso_ideal;
    char genero;

    printf("Qual seu gênero [M/F]? ");
    scanf("%c", &genero);
    genero = toupper(genero);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    if (genero == 'M') {
        peso_ideal = (72.7 * altura) - 58;
        printf("\nUm homem com altura %.2fm tem como peso ideal %.2fKg.\n\n", altura, peso_ideal);
    } else if (genero == 'F') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("\nUma mulher com altura %.2fm tem como peso ideal %.2fKg.\n\n", altura, peso_ideal);
    } else {
        printf("\nGênero inválido.\n");
    }

    return 0;
}