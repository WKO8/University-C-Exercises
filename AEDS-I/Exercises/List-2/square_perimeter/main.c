// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

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
