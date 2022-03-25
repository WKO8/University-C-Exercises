// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    // Variables
    int students;
    int atleticanos = 0;
    int cruzeirenses = 0;
    int others = 0;
    char team;
    char ERROR;

    // Initial Message
    printf("\n-- Time favorito da turma --");

    // Loop to get the number of students
    do
    {
        printf("\nNúmero de alunos na turma: ");
        scanf(" %d", &students);
        ERROR = (students < 0) || (students > 70);
    } while (ERROR);
    
    // Condition to verify if the number of students equals zero or not.
    if (students == 0)
    {
        printf("A turma não tem alunos suficientes para continuar este programa.");
    } else {
        // Declaring a counter with the number of students.
        int count = students;

        printf("\n--- Times ---\n[A] Atlético\n[C] Cruzeiro\n[O] Outro");

        // Loop to get the teams until the counter equals zero.
        while (count > 0)
        {   
            // Loop to get the team of the student
            do
            {
                printf("\nTime: ");
                scanf(" %c", &team);
                team = toupper(team);
                ERROR = (team != 'A') && (team != 'C') && (team != 'O');
            } while (ERROR);
            
            // Conditions to increase the team-related variables
            if (team == 'A') atleticanos++;
            else if (team == 'C') cruzeirenses++;
            else others++;

            // Decreasing the counter
            count--;
        }

        // Calculating teams percentages
        float percentage_a = (float) atleticanos / students * 100;
        float percentage_c = (float) cruzeirenses / students * 100;
        float percentage_o = (float) others / students * 100;


        // Writing the output data
        printf("\n--- Porcentuais ---\nAtleticanos: %.2f\nCruzeirenses: %.2f\nOutros: %.2f", percentage_a, percentage_c, percentage_o);
    }
    
    return 0;
}