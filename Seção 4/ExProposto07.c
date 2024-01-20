/*7) Construa um algoritmo que receba 10 números inteiros 
inseridos pelos usuário e faça uma contagem de quantos números 
fornecidos são pares e quantos são ímpares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1, numero, impar = 0, par = 0;

    do
    {
        printf("%d - Digite um numero: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
        
        i++;

    } while (i <= 10);
    
    printf("\nQuantidade de valores:\nPAR = %d \nIMPAR = %d\n", par, impar);

    system("pause");
    return 0;
}
