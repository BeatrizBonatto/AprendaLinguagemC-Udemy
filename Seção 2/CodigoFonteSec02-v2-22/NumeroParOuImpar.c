#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int numero, resto;	
    	
	printf("Digite um numero inteiro: ");
	scanf("%d",&numero);
	
	//Operador % em C � equivalente ao m�dulo (mod), ou seja, resto da divis�o
	resto = numero % 2;
	
	printf("Resto da divisao de %d por 2 = %d\n",numero,resto);	
	
	if(resto == 0)	
		printf("Numero par!\n");
	else  		
		printf("Numero impar\n");				
    
	system("pause"); 
	return 0;
}
