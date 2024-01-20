/*7) Construa um algoritmo que receba 10 números inteiros 
inseridos pelos usuário e faça uma contagem de quantos números 
fornecidos são pares e quantos são ímpares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero, i, contImpar = 0, contPar = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("%d - Digite um numero imteiro: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("O numero %d e par\n", numero);
            contPar++;
        }
        else
        {
            printf("O numero %d e impar\n", numero);
            contImpar++;
        }   
    }

    printf("Quantidade de numeros pares: %d\n", contPar);
    printf("Quantidade de numeros impares: %d\n", contImpar);

    system("pause");
    return 0;
}