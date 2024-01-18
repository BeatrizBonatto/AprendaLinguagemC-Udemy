#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // -------- Operador Ternário --------
    //  condição à testar ? ação se verdadeira : ação se for falsa      (é um if/else simplificado)
    numero > 0 ? printf("\nValor valido\n") : printf("\nValor invalido\n");

    // mesma situação, mas com IF e ELSE
    if (numero > 0)
        printf("\nValor valido\n");
    else
        printf("\nValor invalido\n");

    system("pause");
    return 0;
}