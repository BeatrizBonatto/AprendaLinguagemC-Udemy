/*  Matriz é um array de duas dimensões
    Sintaxe: tipo nome_matriz [linhas][colunas]
    Exemplo: int matriz1 [2][2] - é uma matriz de números inteiros com 2 linhas por colunas 
    linha 0    | 1 | 2 |
    linha 1    | 3 | 4 |
          coluna 0   coluna 1
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int linha, coluna, matriz[2][2] = {10, 20, 30, 40};

    //Imprimindo os valores atribuidos
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("matriz [%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);
        }
    }
    
    system("pause");
    return 0;
}