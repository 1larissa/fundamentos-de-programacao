#include <stdio.h>
int main ()
{
    float x1 = 5.0, x2 = 2.0;
    int x3;
    printf ("%f\n", x1 % x2);// correto: %d
    printf ("%f\n", &x1);// correto: printf ("%f\n", x1);
    x1 = x2// correto: x1 = x2;
        printf ("%d\n", x3);// x3 não foi inicializado
    X2 = 10;// correto: x2 = 10;
    x1 + 10.0;// x1 é int e não float e falta o sinal de atribuição
    x3 = 039;// correto: x3 = 39;
    return 0;
}
