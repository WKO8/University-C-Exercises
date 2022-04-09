// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declaring the variables
    int students = 1,
        approved_students = 0,
        flag = -1;
    float score,
          high_score = 0,
          lower_score = 21,
          average = 0;
    bool ERROR;

    // Initial Message
    printf("\n-- Análise das Notas --\n");

    // Loop to get the scores until user input is the flag
    while (flag) {
        // Loop to get a valid score
        do {
            printf("\n%dª nota: ", students);
            scanf("%f", &score);
            ERROR = ((score < 0) || (score > 20)) && (flag);
        } while (ERROR);

        // Condition for checking if the score is the flag
        if (flag) {
            // Conditions for analyse the score
            if (score > high_score) high_score = score;
            if (score < lower_score) lower_score = score;
            if (score >= 12) approved_students++;

            // Increasing the score to the average and increasing the students variable by 1
            average += score;
            students++;
        }
    }

    // Dividing the sum of scores by the number of students (scores)
    average /= students;

    // Output Message
    printf("\nMenor nota: %f\nMaior nota: %f\nMédia das notas: %f\nNúmero de alunos com nota igual ou superior a 60%% do total: %d", lower_score, high_score, average, approved_students);

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}
