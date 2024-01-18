#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // receber 2 notas e calcular média - float
    float nota1 = 0, nota2 = 0, media = 0;

    printf("\nDigite a primeira nota: ");
    scanf("%f",& nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media do aluno = %.2f \n", media);

    system("pause");
    return 0;
}