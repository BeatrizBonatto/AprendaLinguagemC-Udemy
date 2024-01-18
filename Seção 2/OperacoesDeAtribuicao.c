#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;  // declaração da variável
    
    num = 10;  // atribuição de valor à variável
    printf("Valor inicial de num = %d\n\n", num);

    num += 5;  // num = num + 5 
    printf("Somando 5 ao valor atual temos num = %d \n", num);

    num -= 1;  // num = num - 1 
    printf("Subtraindo 1 temos num = %d \n", num);

    num *= 2;  // num = num * 2 
    printf("Multiplicando por 2 temos num = %d \n", num);

    num /= 7;  // num = num / 7 
    printf("Dividindo por 7 temos num = %d \n", num);

    system("pause");
    return 0;
}