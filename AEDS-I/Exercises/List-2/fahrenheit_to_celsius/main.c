// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit;
    float celsius;

    printf("Graus em Fahrenheit? ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 / 9.0 * (fahrenheit - 32);

    printf("%.2f°F graus fahrenheit convertido para graus Celsius é igual a %.2f°C", fahrenheit, celsius);
    return 0;
}
