#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 100, y = 10;
    printf("O valor inicial de x e %d\n", x);
    /*
    x++ ->  x = x + 1, mas aparecerá nna segunda vez que a variavel for chamada
    ++x ->  x = x + 1, atualiza a variavel antes de ser exibida no printf    */

    printf("\n------------Pos Incremento------------\n");
    printf("Valor de x na mesma linha do pos incremento: %d \n", x++);
    printf("Valor de x na linha seguinte ao pos incremento: %d \n", x);

    printf("\n------------Pre Incremento------------\n");
    printf("Valor de x na mesma linha do pre incremento: %d \n", ++x);
// ----------------------------------------------------------------------------
    printf("\n------------Pos Decremento------------\n");
    printf("Valor de x na mesma linha do pos incremento: %d \n", y--);
    printf("Valor de x na linha seguinte ao pos incremento: %d \n", y);

    printf("\n------------Pre Decremento------------\n");
    printf("Valor de x na mesma linha do pre incremento: %d \n", --y);

    system("pause");
    return 0;
}