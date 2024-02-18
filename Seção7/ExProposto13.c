/*Crie uma nova versão do programa que utiliza a struct para armazenar os 
dados do produto em um vetor de struct com 4 posições.
Realize as seguintes operações:
- entrada de dados dos produtos no vetor via teclado;
- depois de armazenar exiba os dados dos produtos cadastrados;
- mostre o valor em R$ do produto mais caro entre os que foram cadastrados;
- exiba na tela todos os dados do produto mais caro. */

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
    struct produto produto1[4];
    int i;
    int mais_caro_i;
    float preco_mais_caro = 0;

    for (i = 0; i < 4; i++)
    {
        printf("\n------------ Cadastro de Produto %d ------------ \n", i+1);
        printf("Codigo do produto....: ");
        scanf("%d", &produto1[i].codigo);

        printf("Nome do produto......: ");
        fflush(stdin);
        fgets(produto1[i].nome, 50, stdin);

        printf("Peso em gramas.......: ");
        scanf("%f", &produto1[i].peso);

        printf("Valor do produto.....: ");
        scanf("%f", &produto1[i].preco);    
    }

    for (i = 0; i < 4; i++)
    {
        printf("\n------------- Dados do Produto %d --------------\n", i+1);
        printf("Codigo...............: %d\n", produto1[i].codigo);
        printf("Nome.................: %s", produto1[i].nome);
        printf("Peso.................: %.2fg\n", produto1[i].peso);
        printf("Preco................: R$%.2f\n", produto1[i].preco);       

        // procurando o produto mais caro
        if (produto1[i].preco > preco_mais_caro)
        {
            preco_mais_caro = produto1[i].preco;
            mais_caro_i = i;
        } 
    }
    
    printf("\n***********************************************\n");
  
    printf("Item mais caro da lista e %s\n", produto1[mais_caro_i].nome);
    printf("Codigo...............: %d\n", produto1[mais_caro_i].codigo);
    printf("Nome.................: %s", produto1[mais_caro_i].nome);
    printf("Peso.................: %.2fg\n", produto1[mais_caro_i].peso);
    printf("Preco................: R$%.2f\n\n", produto1[mais_caro_i].preco);
       
    system("pause");
    return 0;
}