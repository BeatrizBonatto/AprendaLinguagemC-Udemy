#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float v1[4] = {5.1, 10.0, 4.5, 7.2};
    int i;

    printf("Exibindo os Valores do Vetor\n\n");
    for (i = 0; i <= 3; i++)
    {
        printf("v1[%d] = %.1f\n", i, v1[i]);
    }

    printf("\nPercorrendo os elementos do vetor e exibindo os seus valores\n");
    for (i = 0; i <= 4; i++)
    {
        printf("v[%d] = %.2f \n", i, v1[i]);
    }
    
    system("pause");
    return 0;
}