#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float media[5][2];
    int i, j;
    printf("\nLeitura e apresentacao de notas armazenadas n matriz\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nInforme as notas do %do. aluno:\n\n", i+1);
        for (j = 0; j < 2; j++)
        {
            printf("Nota %d: ", j+1);
            scanf("%f", &media[i][j]);
        }
    }

    printf("\n\n********************* Saida de Notas *********************\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nAs notas do aluno %d sao:\n", i+1);
        for (j = 0; j < 2; j++)
        {
            printf("Nota %d: %5.2f\n", j+1, media[i][j]);
        }
    }
    
    system("pause");
    return 0;
}