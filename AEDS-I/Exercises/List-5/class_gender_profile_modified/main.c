// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting them.

// Modification: Completion of the program depends on the gender value being equal to 'S' and not on the number of students.

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    // Declaring the variables
    int students = 0,
        age,
        men = 0,
        women = 0,
        older = 0,
        younger = 100,
        of_age = 0;
    char gender,
         ERROR;

    // Initial Message
    printf("\n-- Perfil do Gênero da Turma --");

    while (gender != 'S') {
        // Loop to get the student gender
        do {
            printf("\nGênero [M/F] (S = Sair): ");
            scanf(" %c", &gender);
            gender = toupper(gender);
            ERROR = ((gender != 'M') && (gender != 'F') && (gender != 'S'));
            if (ERROR) printf("\nValor inválido, tente novamente.\n");
        } while (ERROR); 

        if (gender == 'S') break;

        // Loop to get the student age
        do {
            printf("Idade: ");
            scanf(" %d", &age);
            ERROR = (age < 0) || (age > 90);
            if (ERROR) printf("\nValor inválido, tente novamente.\n");
        } while (ERROR);
        
        // Conditions to check the gender and age student and add values to related variables
        if (gender == 'M') {
            men++;
            if (age > 18) of_age++;
            if (age > older) older = age;
            if (age < younger) younger = age;
        } else {
            women++;
            if (age > 18) of_age++;
            if (age > older) older = age;
            if (age < younger) younger = age;
        }

        // Increasing students variable
        students++;
    }

    // Declaring and calculating the percentages
    float percentage_m = (float) men / students * 100;
    float percentage_w = (float) women / students * 100;
    float percentage_oa = (float) of_age / students * 100;
    
    // Writing the outputs data
    printf("\nPercentual de homens: %.2f%%\nPercentual de mulheres: %.2f%%\nPercentual de alunos maiores de idade: %.2f%%\nIdade da pessoa mais velha: %d\nIdade da pessoa mais nova: %d", percentage_m, percentage_w, percentage_oa, older, younger);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}
    
    
