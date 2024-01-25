/*8)Modifique o exercício 5 da seguinte forma: caso o valor 
fornecido pelo usuário esteja fora da faixa, o programa deve 
voltar automaticamente e pedir para o usuário digitar o valor 
novamente. Dica: use a estrutura de repetição do...while */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor;

    do
    {
        printf("Digite um valor inteiro entre 0 e 10: ");
        scanf("%d", &valor);

        if (valor >= 0 && valor <= 10)
        {
            printf("Valor dentro da faixa esperada!\n");
        }
        else
        {
            printf("Valor fora da faixa!\n");
            printf("Insira novamente");
        }        

    } while (valor < 0 || valor > 10);
    
    

    system("pause");
    return 0;
}