#include <stdio.h>
#include <stdlib.h>

/* 1) Elabore um programa que calcule a área de um triângulo.  
Considere a seguinte fórmula para fazer o cálculo: Area = (Base X Altura)/2 */

int main(void)
{
    float base, altura, area;

    printf("\n------- Calculo de Area de Triangulo ------\n");
    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo = %.2f \n", area);

    system("pause");
    return 0;
}