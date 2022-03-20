#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1, valor2, soma;

    printf("Primeiro valor: ");
    scanf("%f", &valor1);

    printf("Segundo valor: ");
    scanf("%f", &valor2);

    soma = valor1 + valor2;

    printf("A soma entre %.2f e %.2f é igual a %.2f.\n", valor1, valor2, soma);
    return 0;
}
