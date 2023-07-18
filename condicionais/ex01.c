#include <stdio.h>
#include <math.h>

int main (void)
{
    int x;
    printf("Digite um numero para calcular a sua raiz quadrada:\n");
    scanf ("%d", &x);

    if (x>0)
        printf("A raiz de %d eh %.2f", x, sqrt(x));
    else
        printf("Nao foi possivel calcular\n");
    return 0;
}
