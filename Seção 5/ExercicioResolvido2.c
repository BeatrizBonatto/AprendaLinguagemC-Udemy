/* 
Exercicio 2 - Elaborar uma aplicação console que receba dos dados digitados 
pelo usuario e preencha um vetor com 10 números reais , calcule e mostre os números superiores 
a 99 e suas respectivas posições.
Deverá ser mostrada mensagem se não existir nenhum número que satisfaça essa condição 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float v1[10];
    int i, contMaior = 0;

        for (i = 0; i < 10; i++)
    {
        printf("Informe o valor do elemento na posicao %d do vetor: ", i);
        scanf("%f", &v1[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (v1[i] > 99.0)
        {
            printf("\nValor maior que 99 encontrado na posicao [%d] do vetor = %.2f", i, v1[i]);
            contMaior++;
        }
    }
    if (contMaior == 0)
    {
        printf("\nNao foram encontrados valores maiores que 99 neste vetor\n");
    }
    else
    {
        printf("\nForam encontrados %d valor(es) maiores que 99 neste vetor\n", contMaior);
    }
    

    system("pause");
    return 0;
}