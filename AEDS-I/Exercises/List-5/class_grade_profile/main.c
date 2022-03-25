// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdlib.h>
#include <stdio.h>

int main() {
    // Declaring the variables
    int students = 0;
    float high_score,
          sum_score,
          average_score,
          test_score = 0;
    char ERROR;

    // Initial Message
    printf("\n-- Perfil das Notas da Turma --");

    // Loop until the test_score value equals -1
    while (test_score != -1) {
        // Loop to get the test score
        do {
            printf("\n(Digite -1 para parar)\nNota na prova: ");
            scanf(" %f", &test_score);
            ERROR = ((test_score < 0) && (test_score != -1)) || (test_score > 100);
            if (ERROR) printf("\n\aValor inválido, digite outra nota.\n");
        } while (ERROR);
        
        // Condition to verify if test_score equals -1
        if (test_score == -1) break;

        // Condition to verify and get the high score
        else if (test_score > high_score) high_score = test_score;
        
        // Adding the scores
        sum_score += test_score;

        // Increasing the students variable
        students++;
    }

    // Condition to return a program discontinuation message or not.
    if ((test_score == -1) && (students == 0)) {
        printf("\nNão é possível continuar o programa sem nenhuma nota válida.");
    } else {
        // Calculating the average score
        average_score = sum_score / students;

        // Writing the output data
        printf("\nMédia das notas: %.2f\nMaior nota: %.2f", average_score, high_score);
    }

    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}