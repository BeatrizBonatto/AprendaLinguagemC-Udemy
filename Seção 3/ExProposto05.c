#include <stdio.h>
#include <stdlib.h>

/*5) Elabore um fluxograma que receba um valor inteiro digitado 
pelo usuário e verifique se este se encontra na faixa de zero a 10. 
Mostre mensagem informando se o valor está dentro da faixa permitida 
ou se está fora da faixa.*/

int main(void)
{
    int valor;

    printf("Digite um numero inteiro entre 0 e 10: ");
    scanf("%d", &valor);

    if (valor >= 0 && valor <= 10)
    {
        printf("Valor dentro da faixa esperada!\n");
    }
    else
    {
        printf("Valor fora da faixa\n");
    }
    
    system("pause");
    return 0;
}