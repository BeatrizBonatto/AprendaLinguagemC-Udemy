#include <stdio.h>
#include <stdlib.h>

/*2)Elaborar um algoritmo que converta um determinado valor em R$ para Euros. 
Este algoritmo deve solicitar que o usuário informe a quantidade de moeda em 
R$ que deseja converter e a cotação do Euro.*/

int main(void)
{
    float valorReais, cotacaoEuro, valorEuros;

    printf("\n--------------CONVERSOR R$ PARA EUROS--------------\n");
    printf("Quantos R$ deseja converter? \n");
    scanf("%f", &valorReais);

    printf("Informe a cotacao atual do Euro: ");
    scanf("%f", &cotacaoEuro);

    valorEuros = valorReais / cotacaoEuro;

    printf("R$ %.2f equivale a %.2f Euros \n",valorReais, valorEuros);

    system("pause");
    return 0;
}