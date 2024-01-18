#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float nota1=0, nota2=0, media=0;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota do aluno: ");
	scanf("%f",&nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("Media do aluno = %.2f\n",media);
	
	system("pause");//pausa da tela somente para Windows
	return 0;//retorno da função main	
}
