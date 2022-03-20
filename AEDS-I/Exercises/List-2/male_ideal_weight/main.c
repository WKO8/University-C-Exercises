#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    float peso_ideal;

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    peso_ideal = (72.7 * altura) - 58;

    printf("Um homem com altura %.2fm tem como peso ideal %.2fKg", altura, peso_ideal);
    return 0;
}
