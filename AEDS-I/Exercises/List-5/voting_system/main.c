// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting them.

#include <stdlib.h>
#include <stdio.h>

int main() {
    // Declaring the variables
    int students,
        option,
        chapa1 = 0,
        chapa2 = 0,
        blank_null = 0;
    char ERROR;

    // Initial Message
    printf("\n-- Sistema de Votação --");

    // Loop to get the number of students
    do {
        printf("\nNúmero de alunos: ");
        scanf(" %d", &students);
        ERROR = students < 0;
        if (ERROR) printf("\nValor inválido, tente novamente.\n");
    } while (ERROR);

    // Condition to verify if number of students equals 0 or not.
    if (students == 0) {
        printf("\nNão tem alunos suficientes para continuar o programa.");
    } else {
        // Declaring the counter and incrementing the number of students
        int count = students;

        printf("\n-- Menu de Opções --\n[0] Sair do Programa\n[1] Chapa 1\n[2] Chapa 2\n[3] Voto em branco/nulo");

        // Loop to get the student option
        while (count > 0) {
            // Loop to get the option
            do {
                printf("\nOpção desejada: ");
                scanf(" %d", &option);
                ERROR = (option < 0) || (option > 3);
                if (ERROR) printf("\nValor inválido, tente novamente.\n");
            } while (ERROR);
            
            // Conditions to check option variable and increase related variables
            if (option == 0) {
                printf("\nVocê escolheu sair do programa.\n\n");
                exit(1);
            } else if (option == 1) chapa1++;
            else if (option == 2) chapa2++;
            else blank_null++;

            // Most correct structure to do this check
            // // Conditions to check option variable and increase related variables
            // switch (option) {
            // case 0:
            //     printf("\nVocê escolheu sair do programa.\n\n");
            //     exit(1);
            // case 1:
            //     chapa1++;
            //     break;
            // case 2:
            //     chapa2++;
            //     break;
            // default:
            //     blank_null++;
            //     break;
            // }

            // Increasing the counter
            count--;
        }

        // Declaring and calculating percentages
        float percentual_c1 = (float) chapa1 / students * 100;
        float percentual_c2 = (float) chapa2 / students * 100;
        float percentual_bn = (float) blank_null / students * 100;

        // Writing the output data
        printf("\n-- Número de Votos --\nChapa 1: %d\nChapa 2: %d\nBrancos/Nulos: %d\n", chapa1, chapa2, blank_null);

        // Conditions to verify the winning option
        if (chapa1 > chapa2) {
            printf("\nA chapa 1 foi a vencedora.\nPercentual de %.2f%%", percentual_c1);
        }
        else if (chapa1 == chapa2) {
            printf("\nAs duas chapas tiveram o mesmo número de votos.\nPercentual de %.2f%%", percentual_c1);
        }
        else {
            printf("\nA chapa 2 foi a vencedora.\nPercentual de %.2f%%", percentual_c2);
        }
    }
    
    // Final Message
    printf("\n\nPrograma finalizado com sucesso.\n\n");

    return 0;
}