#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resto = numero % 2;

    printf("Resto da divisao de %d por 2 = %d\n", numero, resto);

    if(resto == 0)
        printf("Numero e par!\n");
    else
        printf("Numero e impar\n");

    system("pause");
    return 0;
}