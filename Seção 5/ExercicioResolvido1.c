/* 
Exercicio 1 - Elaborar uma aplicação console para ler 5 valores inteiros digitados pelo usuario e armazena-los
em vetor denominado v1. Construir um vetor v2 do mesmo tipo , onde todo elemento do vetor v2 deverá ser o 
quadrado do elemento de posição correspondente no vetor v1. Exibir o conteúdo do vetor v2.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int v1[5], v2[5], i;

    printf("Exibindo os Valores Quadrados do Vetor V1\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Informe o valor do elemento na posicao %d do vetor: ", i);
        scanf("%d", &v1[i]);

        v2[i] = v1[i]*v1[i];

        printf("Valor ao quadrado = %d\n", v2[i]);
    }

    printf("\nElementos do vetor V1\n");
    for (i = 0; i < 5; i++)
    {
        printf("V1[%d] = %d\n", i, v1[i]);
    }

    printf("\nElementos do vetor V2\n");
    for (i = 0; i < 5; i++)
    {
        printf("V2[%d] = %d\n", i, v2[i]);
    }

    system("pause");
    return 0;
}