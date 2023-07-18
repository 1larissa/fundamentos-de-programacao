#include <stdio.h>

int main ()
{
    int a, b, c;

    printf("Digite 3 numeros inteiros para descobrir qual o maior:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("%d eh o maior", a);
        else
            printf("%d eh o maior", c);
    }


    else
    {
        if (b > c)
            printf("%d eh o maior", b);
        else
            printf("%d eh o maior", c);
    }

    return 0;
}
