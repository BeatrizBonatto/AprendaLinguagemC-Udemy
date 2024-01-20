/*6)Utilizando a estrutura de repetição for elabore um programa 
que receba 10 valores reais e calcule a média desses valores.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, repeticoes = 10;
    float numero, soma = 0, media = 0;

    printf("-------Somando %d numero reais-------\n\n", repeticoes);

    for(i=1; i<=repeticoes; i++)
    {
        printf("%d - Digite um numero: ", i);
        scanf("%f", &numero);

        soma = soma + numero;
    }

    media = soma / repeticoes;

    printf("\nMedia entre os valores = %.2f\n", media);

    system("pause");
    return 0;
}