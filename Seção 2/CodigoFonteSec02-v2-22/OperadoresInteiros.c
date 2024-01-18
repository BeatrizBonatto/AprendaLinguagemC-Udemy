#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int numA = 10, numB = 2, resultado, resto;
	
	printf("Valor de numA = %d\n",numA);
	printf("Valor de numB = %d\n",numB);
	
	//Executando operações com inteiros	
	resultado = numA + numB;	
	printf("Soma = %d\n",resultado);
	
	resultado = numA - numB;	
	printf("Subtracao = %d\n",resultado);

	resultado = numA * numB;	
	printf("Multiplicacao = %d\n",resultado);

    resultado = numA / numB;	
	printf("Divisao = %d\n",resultado);	
	
	//Calculando o resto da divisão de um número inteiro
	resto = numA % numB;//operador % equivale a mod, ou seja resto da divisão
	printf("Resto da divisao = %d\n",resto);
	
	system("pause");//pausa da tela somente para Windows
	return 0;//retorno da função main	
}
