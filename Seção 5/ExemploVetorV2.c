#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float v2[5];
    int i;

    printf("Exibindo os Valores do Vetor\n\n");
    for (i = 0; i <= 4; i++)
    {
        printf("Informe o valor do elemento na posicao %d do vetor: ", i);
        scanf("%f", &v2[i]);
    }

    printf("\nPercorrendo os elementos do vetor e exibindo os seus valores\n");
    for (i = 0; i <= 4; i++)
    {
        printf("v[%d] = %.2f \n", i, v2[i]);
    }
    
    system("pause");
    return 0;
}