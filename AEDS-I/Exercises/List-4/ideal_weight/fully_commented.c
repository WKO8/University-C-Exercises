// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

// Including the libraries needed to run the program
// -------------------
// Standard Libraries
// -------------------
#include <stdio.h> 
#include <stdlib.h>
// -------------------
// Library for using the "bool" variable
// -------------------
#include <stdbool.h>
// -------------------
// Library for using the "toupper()" function
// -------------------
#include <ctype.h> 
 
int main() 
{
    // Introductory Message
    printf("\n\tCalculo do Peso Ideal"); 
    
    // Declaring the variables
    bool ERRO;
    bool ERRO_novocalculo = true;
    char novocalculo = 'S';

    // Program repeat structure
    while (novocalculo == 'S') {
        // Declaring the variable that will be used in the next loop
        float altura;

        // Loop for height input
        do { 
            printf("\nAltura: "); 
            scanf("%f", &altura); 
            ERRO = altura < 0; 
        } while(ERRO); 

        // Declaring the variable that will be used in the next loop
        char genero; 

        // Loop for genre input
        do { 
            printf("Genero [M/F]: "); 
            scanf(" %c", &genero); 
            genero = toupper(genero); 
            ERRO = (genero != 'M') && (genero != 'F'); 
        } while(ERRO); 
    
        // Declaring the variable that will be used in the final accounts
        float pesoIdeal; 

        // Loop to the input to perform the calculations according to the past gender
        if(genero == 'M') pesoIdeal = 72.7 * altura - 58; 
        else pesoIdeal = 62.1 * altura - 44.7; 

        // Final message
        printf("\nPeso Ideal = %f", pesoIdeal); 

        // Loop to the input to perform a new calculation
        do {
            printf("\n\nDeseja realizar um novo cálculo [S/N]? ");
            scanf(" %c", &novocalculo);
            novocalculo = toupper(novocalculo);
            ERRO_novocalculo = ((novocalculo != 'N') && (novocalculo != 'S'));
        } while (ERRO_novocalculo);
    }

    // Successful completion of the program
    return 0;
}