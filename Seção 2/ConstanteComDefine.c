#include <stdio.h>
#include <stdlib.h>
#define ICMS 0.18;  // declaração da constante como diretiva que será usada

int main(void)
{
    float preco_produto, valor_icms, valor_total;
    // const tipo nome_da_variavel = valor_da_variavel
    const float frete = 10.50;

    printf("Informe o valor do produto: ");
    scanf("%f", &preco_produto);

    valor_icms = preco_produto * ICMS;

    printf("Valor de imposto a ser pago: R$ %.2f \n", valor_icms);

    valor_total = preco_produto + valor_icms + frete;

    printf("Valor total a pagar: R$ %.2f \n", valor_total);

    system("pause");
    return 0;
}

// define irá substituir tods os locais onde seu nome aparece pelo seu valor definido
// já o const é uma variável, ocupando mais espaço na memória RAM