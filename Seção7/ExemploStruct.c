#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
    struct ficha_aluno
    {
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
    };
    
    struct ficha_aluno aluno;

    /* usaremos o comando fgets() para ler strings, no caso
    o nome do aluno e da disciplina
    fgets(variavel, tamanho da string, entrada)

    como estamos lendo do teclado a entrada é stdin (entrada padrão)
    porém em outro caso, a entrada também poderia ser arquivo */

    printf("\n-------------- Cadastro Aluno --------------\n\n");
    printf("Nome do aluno......: ");
    fflush(stdin); // limpando buffer do teclado
    fgets(aluno.nome, 40, stdin);

    printf("Disciplina.........: ");
    fflush(stdin);
    fgets(aluno.disciplina, 30, stdin);

    printf("Informe a nota 1...: ");
    scanf("%f", &aluno.nota_prova1);

    printf("Informe a nota 2...: ");
    scanf("%f", &aluno.nota_prova2);

    printf("\n--------- Lendo os dados da struct ---------\n\n");
    printf("Nome...............: %s", aluno.nome);
    printf("Disciplina.........: %s", aluno.disciplina);
    printf("Nota da Prova 1 ...: %.2f\n", aluno.nota_prova1);
    printf("Nota da Prova 2 ...: %.2f\n\n", aluno.nota_prova2);

    system("pause");
    return 0;
}