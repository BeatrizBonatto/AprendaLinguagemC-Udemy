#include <stdio.h>
#include <stdlib.h>

/*3)Dados três valores reais X,Y e Z.
Construa um algoritmo que leia esses valores e verifique se a soma é maior que 50, ou não e informe esse resultado.
Também deve ser informado caso a soma seja exatamente 50.*/

int main(void)
{
    float x, y, z, soma;

    printf("Digite valor de x: ");
    scanf("%f", &x);
    
    printf("Digite valor de y: ");
    scanf("%f", &y);
    
    printf("Digite valor de z: ");
    scanf("%f", &z);

    soma = x + y + z;

    if (soma > 50)
    {
        printf("\nSoma MAIOR que 50, aproximadamente %.1f\n", soma);
    }
    else if (soma < 50)
    {
        printf("\nSoma MENOR que 50, aproximadamente %.1f\n", soma);
    }
    else
    {
        printf("\nSoma igual que 50\n");
    }
    
    system("pause");
    return 0;
    
}