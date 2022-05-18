// This code is not perfect and it is not the only way to solve this problem. Feel free to create your code and solve this problem.
// PS.: If you find any grammatical errors, please make a pull request correcting this error.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes
void initialMessage();
float percentageStudents(int*, int, float);
int readAge(int*, int);
int sumAges(int*, int);
float averageAges(int*, int, int);
void showAllArray(int*, int);
void outputMessage();
void finalMessage();

int main() {

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
    printf("-- Percentual de Alunos com Idade Superior à Média das Idades da Turma --");
}

// percentageStudents function
float percentageStudents(int array[], int length, float average) {
    int studentsAboveAvg = 0;
    float percentage = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] > average) studentsAboveAvg++;
    }

    percentage = (float) (studentsAboveAvg * 100) / (float) length;

    return percentage;
}

// readAge function
int readAge(int array[], int pos) {
    int age;
    bool ERROR;

    do {
        printf("\nDigite uma idade: ");
        scanf("%d", &age);
        ERROR = ((age < 1) && (age != 0)) || (age > 150);
        if (ERROR) printf("Digite uma idade válida, de 0 a 150 anos.");
        else if (age != 0) array[pos] = age;
    } while(ERROR);

    
    return age;
}

// sumAges function
int sumAges(int array[], int length) {
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    return sum;
}

// averageAges function
float averageAges(int array[], int length, int sum) {
    return (float) sum / (float) length;
}

// outputMessage function
void outputMessage() {
    int array[10];
    int age = -1;
    int index = 0;

    while (age != 0) {
        age = readAge(array, index);
        index++;
    }
    
    int length = sizeof(array) / (float) sizeof(int);
    float res = percentageStudents(array, length, averageAges(array, length, sumAges(array, length)));
    
    // Output Message
    printf("\nO percentual de alunos com idade superior à idade média da turma foi de %.2f%%", res);
}

// finalMessage function
void finalMessage() {
    printf("\n\nPrograma finalizado com sucesso.\n\n");
}