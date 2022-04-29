#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
float requestScore();
bool isApproved(float);
void outputMessage();
void finalMessage();

// Main function
int main()
{
    // Initial Message
    initialMessage();

    // Output Message
    outputMessage();

    // Final Message
    finalMessage();

    return 0;
}

// initialMessage function
void initialMessage() {
    printf("-- Número Primo --");
}

// requestScore function
float requestScore() {
    // Declaring the variables
    float score;
    bool ERROR;

    // Loop to get a valid value
    do {
        printf("\nInsira a nota final do aluno: ");
        scanf("%f", &score);
        ERROR = score < 0;
        if (ERROR) printf("\n\nInsira uma nota válida.\n");
    } while(ERROR);

    return score;
}

// isApproved function
bool isApproved(float score) {
    // Declaring the variable
    bool res = false;

    if (score > 0) {
        // Condition for checking if the score is greater or equal than 60
        if (score >= 60) res = true;
    }
    
    return res;
}

// outputMessage function
void outputMessage() {
    // Saving the requestScore and isApproved returns in variables
    int score = requestScore();
    bool res = isApproved(score);

    // Output Message
    if (res) printf("\nO aluno está aprovado.");
    else printf("\nO aluno não está aprovado.");
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}