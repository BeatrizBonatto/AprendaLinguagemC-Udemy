/* 10) Construa um algoritmo que utilize um vetor do tipo inteiro 
com 6 posições de armazenamento e receba valores via teclado. 
Exiba os valores do vetor na saída na ordem em que foram armazenados 
e depois exiba-os na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[6], i;

    printf("Digite 6 valores: \n");

    for (i = 0; i < 6; i++)
    {
        printf("%d - ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores do vetor: \n");

    for (i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\nOrdem inversa: \n");

    for (i = 5; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }    

    printf("\n");

    system("pause");
    return 0;
}