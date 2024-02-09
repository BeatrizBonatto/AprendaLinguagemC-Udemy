#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[6] = {0, 1, 2, 3, 4, 5};
    int i = 0, j = 5, elemento = 5;
    int meio;

    while (i <= j)
    {
        meio = (i + j) / 2;

        if (elemento == vetor[meio])
        {
            printf("Elemento %d encontrado com indice %d\n\n", elemento, meio);
            break;
        }
        else if (elemento < vetor[meio])
        {
            j = meio -1;
        }
        else
        {
            i = meio + 1;
        }        
    }
    
    system("pause");
    return 0;
}