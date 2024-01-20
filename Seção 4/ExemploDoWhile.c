#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;

    do
    {
        printf("Linguagem C\n");
        i++; // i = i + 1
    } while (i <= 10);

    printf("Valor do contador fora do loop: %d\n", i);

    system("pause");
    return 0;
}