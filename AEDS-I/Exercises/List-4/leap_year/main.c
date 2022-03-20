#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() 
{
    int ano;
    bool bissexto;
    bool ERRO;
    char repetir = 'S';

    printf("\n\tVerificador de Ano Bissexto");

    while (repetir == 'S') {
        do {
            printf("\nAno: ");
            scanf(" %d", &ano);
            ERRO = ano < 0;
        } while (ERRO);

        // The least semantic way
        if (((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0)) || ((ano % 4 == 0) && (ano % 100 != 0)) || ((ano % 4 != 0) && (ano % 400 == 0))) {
            bissexto = true;
        } else bissexto = false;

        // The most semantic way
        // if (ano % 4 == 0) {
        //     if (ano % 100 == 0) {
        //         if (ano % 400 == 0) {
        //             bissexto = true;
        //         } else bissexto = false;
        //     } else bissexto = true;
        // } else {
        //     if (ano % 400 == 0) {
        //         bissexto = true;
        //     } else bissexto = false;
        // }

        if (bissexto) printf("%d é um ano bissexto.", ano);
        else printf("%d não é um ano bissexto", ano);
        
        do {
            printf("\n\nDeseja verificar outro ano [S/N]? ");
            scanf(" %c", &repetir);
            repetir = toupper(repetir);
            ERRO = (repetir != 'S') && (repetir != 'N');
        } while (ERRO);
    }
    printf("\nPrograma finalizado com sucesso.\n\n");

    return 0;
}