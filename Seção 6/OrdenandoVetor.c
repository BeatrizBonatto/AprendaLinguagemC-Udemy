#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[6];
    int i, j, auxiliar;

    printf("Digite um inteiro para o elemento:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d - ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nValores no vetor antes de ordenar:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d - %d\n", i, vetor[i]);
    }

//-------------------- Ordenando o Vetor --------------------

    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 6; j++)
        {
            if (vetor[i] > vetor[j])
            {
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }
    printf("\nVetor ordenado:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d - %d\n", i, vetor[i]);
    }

    system("pause");
    return 0;
}