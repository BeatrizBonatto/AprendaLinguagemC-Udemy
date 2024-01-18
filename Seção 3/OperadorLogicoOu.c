#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float limite_min = 5, limite_max = 12, temperatura;

    printf("Informe o valor da temperatura: ");
    scanf("%f", &temperatura);

    // se temperatura > limite máximo OU temperatura < limite mínimo
    if (temperatura > limite_max || temperatura < limite_min)
    {
        printf("\nAlerta: Temperatura fora da faixa permitida!!!\n");
    }
    else
    {
        printf("\nTemperatura OK \n");
    }

    system("pause");
    return 0;
}