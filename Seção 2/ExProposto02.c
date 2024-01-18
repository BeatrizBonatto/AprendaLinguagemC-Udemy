#include <stdio.h>
#include <stdlib.h>
#define euro 0.18785

/*2)Elaborar um algoritmo que converta um determinado valor em R$ para Euros. 
Este algoritmo deve solicitar que o usuário informe a quantidade de moeda em 
R$ que deseja converter e a cotação do Euro.*/

int main(void)
{
    float real, conversao;

    printf("\n--------------CONVERSOR R$ PARA EUROS--------------\n");
    printf("Valor em Real: ");
    scanf("%f", &real);

    conversao = euro*real;

    printf("Valor em Euros: %.2f \n", conversao);

    system("pause");
    return 0;
}