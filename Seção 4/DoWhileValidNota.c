#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota;

    do
    {
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);

        if(nota < 0 || nota > 10)
        {
            printf("ERRO valor incorreto!\nDigite novamente.\n\n");
        }

    } while (nota < 0 || nota > 10);

    printf("Nota = %.2f\n", nota);

    system("pause");
    return 0;
}