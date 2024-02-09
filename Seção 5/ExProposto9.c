/* 9)Elabore um programa que receba 8 valores reais armazenando-os 
em um vetor e determine quantos números maiores que 10 estão 
presentes no vetor. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float vetor[8];
    int count = 0, i;

    printf("Digite 8 valores:\n");

    for (i = 0; i < 8; i++)
    {
        printf("%d - ",i+1);
        scanf("%f", &vetor[i]);

        if (vetor[i] > 10)
        {
            count++;
        }
    }

    printf("\nO vetor possui %d valores acima de 10.\n", count);

    system("pause");
    return 0;
}