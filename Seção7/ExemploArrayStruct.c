#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
    // Vetor de struct com 5 posições
    struct ficha_aluno
    {
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
    };
    
    struct ficha_aluno valunos[5];
    int i; //contador

    printf("\n------------- Cadastro Alunos --------------\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("Nome do aluno......: ");
        fflush(stdin); // limpando buffer do teclado
        fgets(valunos[i].nome, 40, stdin);

        printf("Disciplina.........: ");
        fflush(stdin);
        fgets(valunos[i].disciplina, 30, stdin);

        printf("Informe a nota 1...: ");
        scanf("%f", &valunos[i].nota_prova1);

        printf("Informe a nota 2...: ");
        scanf("%f", &valunos[i].nota_prova2);
    }

    printf("\n---- Lendo os dados armazenados na struct ----\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("Nome...............: %s", valunos[i].nome);
        printf("Disciplina.........: %s", valunos[i].disciplina);
        printf("Nota da Prova 1 ...: %.2f\n", valunos[i].nota_prova1);
        printf("Nota da Prova 2 ...: %.2f\n\n", valunos[i].nota_prova2);
    }
    
    system("pause");
    return 0;
}