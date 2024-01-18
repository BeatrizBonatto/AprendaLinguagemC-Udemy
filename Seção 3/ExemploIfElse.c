#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A, B, Soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &A);

    printf("Digite um numero inteiro: ");
    scanf("%d", &B);

    Soma = A + B;
    printf("\nO valor da soma = %d\n", Soma);

    if(Soma > 10) //se soma for maior que 10
    {
        printf("Valor da soma MAIOR que 10\n");
    }
    else  //se não
        {
            printf("Valor da soma MENOR que 10\n");
        }

    system("pause");
    return 0;
}