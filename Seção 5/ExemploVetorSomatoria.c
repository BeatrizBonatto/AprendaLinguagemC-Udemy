#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float v[5], soma = 0;
    int i;

    printf("Exibindo os Valores do Vetor\n\n");
    for (i = 0; i <= 4; i++)
    {
        printf("Informe o valor do elemento na posicao %d do vetor: ", i);
        scanf("%f", &v[i]);

        soma = soma + v[i];
        // printf("Valor atual de soma = %.1f\n", soma);  verificando soma
    }

    printf("\nSomatoria dos elementos do vetor = %.1f\n", soma);

    system("pause");
    return 0;
}