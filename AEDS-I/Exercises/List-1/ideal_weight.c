#include <stdio.h>
#include <stdlib.h>

int main()
{
    char genero;
    float altura;
    float peso_ideal;

    printf("Qual seu gênero? (M/F): ");
    scanf("%c", &genero);
    printf("Qual sua altura? ");
    scanf("%f", &altura);

    if (genero == 'M' || genero == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    }
    else if (genero == 'F' || genero == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    }
    else {
        printf("Valor inválido, tente novamente.");
    }

    printf("Seu peso ideal de acordo com a sua altura é %.2fKg", peso_ideal);
}