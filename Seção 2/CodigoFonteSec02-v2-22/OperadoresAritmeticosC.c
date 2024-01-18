#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n1, n2, numero, soma, subtracao, multiplicacao, divisao, resto;
    
    printf("\n---------Programa para demonstracao de operadores aritmeticos--------\n\n");
   
	printf("Digite um numero inteiro: ");
	scanf("%d",&n1);
	
	printf("Digite outro numero inteiro: ");
	scanf("%d",&n2);	
    
    //operadores aritméticos
	soma = n1 + n2;
	subtracao = n1 - n2;
	multiplicacao = n1 * n2;
	divisao = n1 / n2;
	resto = n1 % 3; //resto da divisão inteira
	
	//-Saída de dados
	printf("\nValor da soma de %d + %d = %d\n",n1,n2,soma);
	printf("Valor da subtracao de %d - %d = %d\n",n1,n2,subtracao);
	printf("Valor da multiplicacao de %d * %d = %d\n",n1,n2,multiplicacao);
	printf("Valor da divisao de %d / %d = %d\n",n1,n2,divisao);
	printf("Resto da divisao de %d %% 3 = %d\n\n",n1,resto); 
	
	
     
  system("pause"); //pausa da tela - somente para Windows
  return 0;
}


