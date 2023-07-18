#include <stdio.h>
int main ()
{
    int foo = 10, bar = 5;
    printf ("%d\n", foo + 10);// saida: 20
    printf ("%d\n", foo + 10);// saida: 20
    printf ("%d\n", foo + 10);// saida: 20
    bar = foo + 1;
    printf ("%d\n", foo);// saida: 10
    printf ("%d\n", bar);// saida: 11
    printf ("%d\n", foo+bar);// saida: 21
    foo = foo + 2;
    printf ("%d\n", foo);// saida: 12
    return 0;
}
