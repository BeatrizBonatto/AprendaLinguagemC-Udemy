#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota_final, frequencia;

    printf("\nDigite a nota final do aluno: ");
    scanf("%f", &nota_final);

    printf("Informe a frequencia do aluno: ");
    scanf("%f", &frequencia);

    if (nota_final > 6.0 && frequencia >= 75)
    {
        printf("\nAluno aprovado!\n");
    }
    else
    {
        printf("\nAluno reprovado.\n");
    }
    
    system("pause");
    return 0;
}

/*
     TABELA VERDADE
|   p  |   q   |   p&&q  |
--------------------------
|   V  |   V   |    V    |
|   V  |   F   |    F    |
|   F  |   V   |    F    |
|   F  |   F   |    F    |

*/