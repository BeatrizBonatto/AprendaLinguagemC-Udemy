#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia dois valores inteiros, e mostre na tela o menor deles.*/

int main(void)
{
    int valor1, valor2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor1);

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor2);

    if (valor1 < valor2)
    {
        printf("\nO menor numero eh %d\n", valor1);
    }
    else if (valor1 > valor2)
    {
        printf("\nO menor numero eh %d\n", valor2);
    }    
    else
    {
        printf("\nOs numeros sao iguais\n");
    }
    
    system("pause");
    return 0;
}