#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[] = "Curso de linguagem C"; 
    char str2[] = "Contando caracteres dentro de uma string";
    int cont = 0;

    while (str1[cont] != '\0') // \0 - final da string
    {
        cont++;
    }
    printf("O tamanho da string \"%s\" e %d caracteres.\n", str1, cont);
    cont = 0; //zerando contador para contar a proxima string

    while (str2[cont] != '\0')
    {
        cont++;
    }
    printf("O tamanho da string \"%s\" e %d caracteres.\n\n", str2, cont);

    system("pause");
    return 0;
}
