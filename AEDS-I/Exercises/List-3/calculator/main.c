#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n- Calculadora -\n");

    printf("-------------------");
    printf("\n[1] Soma (+)\n[2] Subtracao (-)\n[3] Multiplicacao (x)\n[4] Divisao (:)\n");
    printf("-------------------");

    int operador;
    printf("\nQual operacao voce deseja realizar? ");
    scanf("%d", &operador);

    float operando1;
    printf("Digite o primeiro operando: ");
    scanf("%f", &operando1);

    float operando2;
    printf("Digite o segundo operando: ");
    scanf("%f", &operando2);

    float resultado;

    switch (operador)
    {
    case 1:
        resultado = operando1 + operando2;
        printf("A soma %.2f + %.2f é igual a %.2f", operando1, operando2, resultado);
        break;

    case 2:
        resultado = operando1 - operando2;
        printf("A subtracao %.2f - %.2f é igual a %.2f", operando1, operando2, resultado);
        break;

    case 3:
        resultado = operando1 * operando2;
        printf("A multiplicacao %.2f x %.2f é igual a %.2f", operando1, operando2, resultado);
        break;

    case 4:
        resultado = operando1 / operando2;
        printf("A divisao %.2f x %.2f é igual a %.2f", operando1, operando2, resultado);
        break;

    default:
        printf("Valor inválido.");
        break;
    }
    return 0;
}
