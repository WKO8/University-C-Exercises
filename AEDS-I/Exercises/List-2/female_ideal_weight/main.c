#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    float peso_ideal;

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    peso_ideal = (62.1 * altura) - 44.7;

    printf("Uma mulher com altura %.2fm tem como peso ideal %.2fKg", altura, peso_ideal);
    return 0;
}
