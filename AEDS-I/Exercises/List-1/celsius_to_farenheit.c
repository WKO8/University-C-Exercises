// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;
    float fahrenheit;

    printf("Graus celsius °C: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("%.2f°C convertido para Fahrenheit é igual a %.2f°F", celsius, fahrenheit);
}