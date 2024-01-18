#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declarando variáveis e fazendo entradas de dados com scanf()

    int num;     // números inteiros
    float nota;  // número com decimal
    char conceito;  // armazena apenas uma unica letra/caracter

    printf("Digite o numero do aluno: ");
    scanf("%d", &num);  // "%d - tipo da variável, &num - enderoço de memória, variável onde será alocado

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    printf("Digite o conceito do aluno (A, B, C, D ou E): ");
    setbuf(stdin, NULL);  // para limpar o buffer do teclado, remover "Enter" da memória temporário que alocaria no &conceito sem querer
    scanf("%c",&conceito);

    // printf para mostrar os dados
    printf("\n---------Mostrando os dados das variaveis---------\n");
    printf("Numero = %d \n", num);
    printf("Nota = %.2f \n", nota);
    printf("Conceito = %c \n", conceito);

    system("pause");  // pausa a tela do executavel -- SOMENTE para Windows
    return 0;
}