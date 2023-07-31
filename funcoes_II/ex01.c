#include <stdio.h>

int main ()
{
    int x, *px;

    px = &x;
    *px = 60;

    printf("O valor da variavel: %d\n", x);
    printf("O endereco da variavel: %p\n", &x);
    printf("O endereco apontado pelo ponteiro: %p\n", px);
    printf("O valor apontado pelo ponteiro: %d\n", *px);
    printf("O endereco do ponteiro: %p\n", &px);

    return 0;
}