// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h> 
 
int main() 
{
    float altura;
    float pesoIdeal; 
    bool ERRO;
    char novocalculo = 'S';
    char genero; 

    printf("\n\tCalculo do Peso Ideal"); 

    while (novocalculo == 'S') {
        do { 
            printf("\nAltura: "); 
            scanf(" %f", &altura); 
            ERRO = altura < 0; 
        } while(ERRO); 

        do { 
            printf("Genero [M/F]: "); 
            scanf(" %c", &genero); 
            genero = toupper(genero); 
            ERRO = (genero != 'M') && (genero != 'F'); 
        } while(ERRO); 
        
        if(genero == 'M') pesoIdeal = 72.7 * altura - 58; 
        else pesoIdeal = 62.1 * altura - 44.7; 

        printf("Peso Ideal = %.2fKg", pesoIdeal); 

        do {
            printf("\n\nDeseja realizar um novo cálculo [S/N]? ");
            scanf(" %c", &novocalculo);
            novocalculo = toupper(novocalculo);
            ERRO = (novocalculo != 'N') && (novocalculo != 'S');
        } while (ERRO);
    }
    return 0;
}