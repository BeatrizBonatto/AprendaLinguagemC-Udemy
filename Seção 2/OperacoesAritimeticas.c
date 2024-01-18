#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, soma, subtracao, multiplicacao, divisao, resto;

    printf("\n--------Programa para demonstracao dos operadores aritimeticos--------\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite um numero inteiro: ");
    scanf("%d", &n2);

    //numero;
    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;
    resto = n1 % 2;

    printf("\nO valor da soma de %d + %d = %d", n1, n2, soma);
    printf("\nO valor da subtracao de %d - %d = %d", n1, n2, subtracao);
    printf("\nO valor da multiplicacao de %d * %d = %d", n1, n2, multiplicacao);
    printf("\nO valor da divisao de %d / %d = %d", n1, n2, divisao);
    printf("\nO resto da divisao de %d %% 2 = %d\n", n1, resto);

    system("pause");
    return 0;
}