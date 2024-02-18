/*Crie uma nova versão do programa que utiliza a struct para armazenar os dados do produto em um vetor de struct
 com 4 posições.
Realize as seguintes operações:
 - entrada de dados dos produtos no vetor via teclado;
 - depois de armazenar exiba os dados dos produtos cadastrados; 
 - mostre o valor em R$ do produto mais caro entre os que foram cadastrados;
 - exiba na tela todos os dados do produto mais caro. */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
  /*Criando a struct  */
  struct cad_produto
  {
    int codigo;
	char nome[50];    
    float peso;  
    float preco;        
  }; //final da definição da struct
 
  /*Criando a variável produto que é do tipo struct cad_produto */
  struct cad_produto vprodutos[4];  
  int i;
  float maior_valor = 0;
  int codigo_maior_valor = 0, indice_maior_valor=0;
   
  printf("\n---------- Cadastro de produtos -----------\n");
  for(i = 0; i < 4; i++)
  {
  	  printf("\nCodigo do produto.......:");
	  scanf("%d", &vprodutos[i].codigo);
	  
	  printf("Nome do produto......: ");
	  fflush(stdin);//limpando o buffer do teclado	  
	  fgets(vprodutos[i].nome, 50, stdin);
		   
	  printf("Peso em gramas.......:");
	  scanf("%f", &vprodutos[i].peso);
	      
	  printf("Preco.......:");
	  scanf("%f", &vprodutos[i].preco); 
	  
  }   	    
        
  printf("\n\n--------- Exibindo dados dos produtos cdastrados ---------\n");  
  for(i = 0; i < 4; i++)  
  {
	  printf("\nCodigo ....: %d", vprodutos[i].codigo);
	  printf("\nNome ......: %s", vprodutos[i].nome);
	  printf("Peso ......: %.1f gramas", vprodutos[i].peso);
	  printf("\nValor .....: R$ %.2f\n", vprodutos[i].preco); 
  
   
      if(vprodutos[i].preco > maior_valor)
	  {
	  	maior_valor = vprodutos[i].preco;
	  	codigo_maior_valor = vprodutos[i].preco;
	  	indice_maior_valor = i;
	  }
  }
  printf("\n==========================================================");
  
  printf("\nProduto mais caro: R$ %.2f\n", maior_valor);
  
  printf("\nCodigo ....: %d", vprodutos[indice_maior_valor].codigo);
  printf("\nNome ......: %s", vprodutos[indice_maior_valor].nome);
  printf("Peso ......: %.1f gramas", vprodutos[indice_maior_valor].peso);
  printf("\nValor .....: R$ %.2f\n", vprodutos[indice_maior_valor].preco); 
  
  system("pause");//pausa na tela
  return(0);
} 
 
