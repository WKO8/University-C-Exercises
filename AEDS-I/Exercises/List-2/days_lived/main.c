// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

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
