// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio;
    float area_circulo;

    printf("Raio do circulo: ");
    scanf("%f", &raio);

    area_circulo = pow(3.14 * raio, 2);

    printf("A área de um círculo com raio %.2f é igual a %.2f", raio, area_circulo);
    return 0;
}
