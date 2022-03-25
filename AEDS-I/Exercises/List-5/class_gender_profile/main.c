// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting them.

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    // Declaring the variables
    int students,
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

    // Loop to get the number of students
    do {
        printf("\nNúmero de alunos: ");
        scanf(" %d", &students);
        ERROR = students < 0;
        if (ERROR) printf("\nValor inválido, tente novamente.\n");
    } while (ERROR);

    // Condition to check if number of students equals 0 or not.
    if (students == 0) {
        printf("\nA turma não tem alunos suficientes para continuar este programa.\n");
    } else {
        // Declaring a counter with the number of students.
        int count = students;

        // Loop to get all student profile (until count equals 0)
        while (count > 0) {
            // Loop to get the student gender
            do {
                printf("\nGênero [M/F]: ");
                scanf(" %c", &gender);
                gender = toupper(gender);
                ERROR = ((gender != 'M') && (gender != 'F'));
                if (ERROR) printf("\nValor inválido, tente novamente.\n");
            } while (ERROR);

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
            
            // Decreasing the counter
            count--;
        }

        // Declaring and calculating the percentages
        float percentage_m = (float) men / students * 100;
        float percentage_w = (float) women / students * 100;
        float percentage_oa = (float) of_age / students * 100;
        
        // Writing the outputs data
        printf("\nPercentual de homens: %.2f%%\nPercentual de mulheres: %.2f%%\nPercentual de alunos maiores de idade: %.2f%%\nIdade da pessoa mais velha: %d\nIdade da pessoa mais nova: %d", percentage_m, percentage_w, percentage_oa, older, younger);
    }
    
    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}