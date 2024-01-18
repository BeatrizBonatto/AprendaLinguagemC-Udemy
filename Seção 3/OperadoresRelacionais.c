#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 10, y = 5, z = 7, k = 7;
    printf("Os operadores relacionais sao usados para fazer comparacoes\n");
    printf("Quando o resultado da comparacao eh FALSO retorna 0 (zero)\n");
    printf("Quando o resultado da comparacao eh VERDADEIRO retorna 1 \n");

    printf("\nValor de x = %d | ", x);
    printf("Valor de y = %d \n", y);
    printf("Valor de z = %d  | ", z);
    printf("Valor de k = %d \n", k);

    printf("\nExemplo 1: x > y : %d", x > y); // 1 - VERDADEIRO
    printf("\nExemplo 2: x < y : %d\n", x < y); // 0 - FALSO

    printf("\nExemplo 3: z == k : %d", z == k); // 1 - VERDADEIRO
    printf("\nExemplo 4: z != k : %d\n", z != k); // 0 - FALSO

    printf("\nExemplo 5: z >= x : %d", z >= x); // 0 - FALSO
    printf("\nExemplo 6: z <= k : %d \n\n", z <= k); // 1 - VERDADEIRO

    system("pause");
    return 0;
}