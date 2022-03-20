#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado;
    float perimetro;

    printf("Digite o valor do lado: ");
    scanf("%f", &lado);

    perimetro = lado * 4;

    printf("Um quadrado de lado %.2f tem o perimetro igual a %.2f", lado, perimetro);
    return 0;
}
