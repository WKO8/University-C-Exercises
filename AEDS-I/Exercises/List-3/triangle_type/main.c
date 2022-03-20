#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n\tIdentificador do tipo do triângulo\n");

    float lado1;
    float lado2;
    float lado3;

    printf("Valor do lado 1: ");
    scanf("%f", &lado1);

    printf("Valor do lado 2: ");
    scanf("%f", &lado2);

    printf("Valor do lado 3: ");
    scanf("%f", &lado3);

    if ((lado1 != lado2) && (lado2 != lado3)) {
        printf("\nLados: %.2f, %.2f, %.2f\nTipo do Triângulo: Escaleno", lado1, lado2, lado3);
    } else if ((lado1 == lado2) && (lado2 == lado3)) {
        printf("\nLados: %.2f, %.2f, %.2f\nTipo do Triângulo: Equilátero", lado1, lado2, lado3);
    } else {
        printf("\nLados: %.2f, %.2f, %.2f\nTipo do Triângulo: Isósceles", lado1, lado2, lado3);
    }
    
    return 0;
}