#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[6] = {0, 3, 2, 5, 1, 4};
    int i, elemento = 5, encontrei = 0;

    for (i = 0; i < 6; i++)
    {
        if (vetor[i] == elemento)
        {
            printf("Elemento %d encontrado com indice %d\n", elemento, i);
            encontrei = 1;
            break;
        }
    }

    if (encontrei == 0)
    {
        printf("Valor buscado nao existe dentro do vetor\n");
    }

    system("pause");
    return 0;
}