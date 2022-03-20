#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int dias;

    printf("Sua idade? ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("Uma pessoa com %d anos, viveu %d dias.", idade, dias);
    return 0;
}
