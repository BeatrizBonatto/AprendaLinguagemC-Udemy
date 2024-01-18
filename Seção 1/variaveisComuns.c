#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 100;
    float valor = 7.2;
    char letra = 'z';
    char frase [35] = "Estamos programando em C";
    double num2 = 1.1234;

    printf("-------Mostrando as variaveis------- \n");
    printf("Valor da variavel  interira num = %d \n", num);
    printf("Valor da variavel float valor = %.1f \n", valor);
    printf("Valor da variavel char letra = %c \n", letra);
    printf("Valor da variavel char frase = %s \n", frase);
    printf("Valor da variavel double num2 = %.f \n", num2);

    system("pause");
    return 0;
}