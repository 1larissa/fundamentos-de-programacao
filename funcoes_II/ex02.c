#include <stdio.h>

void incDec (int *a, int *b)
{
    (*a)++;
    (*b)--;
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main ()
{
    int x, y;

    x = 10;
    y = 5;
    incDec (&x, &y);
    printf("x: %d e y: %d", x, y);
    return 0;
}
*/