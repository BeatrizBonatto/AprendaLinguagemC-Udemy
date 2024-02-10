/*
Crie um programa que utilize uma struct para armazenar os 
dados de um produto a saber: código ,  nome, peso (em gramas) 
e o preço (R$). Faça a entrada de dados via teclado e exiba 
na tela o que foi armazenados na struct.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct produto
    {
        int codigo;
        char nome[50];
        float peso;
        float preco;
    };
    struct produto produto1;
     
    printf("------------ Cadastro de Produto ------------ \n\n");
    printf("Codigo do produto....: ");
    scanf("%d", &produto1.codigo);

    printf("Nome do produto......: ");
    fflush(stdin);
    fgets(produto1.nome, 50, stdin);

    printf("Peso em gramas.......: ");
    scanf("%f", &produto1.peso);

    printf("Valor do produto.....: ");
    scanf("%f", &produto1.preco);

    printf("------------- Dados do Produto --------------\n\n");
    printf("Codigo...............: %d\n", produto1.codigo);
    printf("Nome.................: %s", produto1.nome);
    printf("Peso.................: %.2fg\n", produto1.peso);
    printf("Preco................: R$%.2f\n\n", produto1.preco);

    system("pause");
    return 0;
}