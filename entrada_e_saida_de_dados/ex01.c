#include <stdio.h>

int main ()
{
    int foo = 5, bar = 2;
    float foobar = 8.0;
    printf ("%d\n", foo + 3 * bar);// saida: 11
    printf ("%d\n", (foo + 3) * bar);// saida: 16
    printf ("%d\n", (foo * bar) / 8);// saida: 1
    printf ("%f\n", (foo * bar) / foobar);// saida: 1.25
    printf ("%d\n", foo % 3);// saida: 2
    printf ("%d\n", foo % bar);// saida: 1
    printf ("%d %d\n", foo * -1, -foo);// saida: -5 -5
    printf ("%f\n", foo + 0.1);// saida: 5.1
    printf ("%d\n", foo / bar * bar);// saida: 4
    return 0;
}
