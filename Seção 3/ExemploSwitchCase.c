#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor;

    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("\nDomingo\n");
        break;
    case 2:
        printf("\nSegunda\n");
        break;
    case 3:
        printf("\nTerca\n");
        break;
    case 4:
        printf("\nQuarta\n");
        break;
    case 5:
        printf("\nQuinta\n");
        break;
    case 6:
        printf("\nSexta\n");
        break;
    case 7:
        printf("\nSabado\n");
        break;
    default:
    printf("\nValor esta fora da faixa\n");
        break;
    }

    system("pause");
    return 0;
}