#include <stdio.h>

int main () 
{
    int a, b, soma, i;

    for (i = 1000; i <= 9999; i++)
    {
        a = i/100;
        b = i%100;
        soma = a + b;
        if ((soma * soma) == i)
            printf("%d\n", i);
    }
    return 0;
}
