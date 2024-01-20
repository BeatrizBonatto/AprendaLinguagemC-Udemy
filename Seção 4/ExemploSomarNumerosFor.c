#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, soma = 0;

    printf("---------Somando 3 numeros inteiros---------\n\n");

    for (i = 1; i <= 3; i++)
    {
        printf("%d - Digite o numero: ", i);
        scanf("%d", &n);

        soma = soma +  n;
    }
    
    printf("\nSoma dos valores = %d\n", soma);

    system("pause");
    return 0;
}