/* 
Escreva um programa que leia os dados para uma matriz 3 x 3, 
conte e escreva na tela a quantidade de valores maiores que 
10 que foram encontrados na matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int matriz[3][3];
    int i, j, cont=0;

    printf("Leitura de dados para uma matriz 3X3:\nInsira numeros inteiros:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Valor da linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] >10)
            {
                cont++;
            }
        }
    }

    printf("\n\nMatriz 3X3\n");
    printf("------------\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d", matriz[i][j]);
            
            if (j < 2) 
            {
                printf(" - ");
            }
        }
        printf("\n");
    }
    printf("------------\n");
    
    printf("\nValores acima de 10: %d\n\n", cont);

    system("pause");
    return 0;
}