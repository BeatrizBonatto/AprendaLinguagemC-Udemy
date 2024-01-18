#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float  vteste;
    printf(" --- TIPO ---|--- BYTE ---\n");
    printf(" char........: %d bytes\n", sizeof(char));
    printf(" short.......: %d bytes\n", sizeof(short));
    printf(" int.........: %d bytes\n", sizeof(int));
    printf(" long........: %d bytes\n", sizeof(long));
    printf(" float.......: %d bytes\n", sizeof(float));
    printf(" double......: %d bytes\n", sizeof(double));
    printf(" long double.: %d bytes\n", sizeof(long double));
    printf("\nO tamanho de vteste e...: %d \n\n", sizeof vteste);

    system("pause");
    return 0;
}