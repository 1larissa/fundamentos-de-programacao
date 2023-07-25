#include <stdio.h>
#define N 10

int main () 
{
    int i;

    //imprime de 0 até N
    i=0;
    while (i <= N)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    //imprime de 0 até N
    for(i = 0; i <= N; i++)
        printf("%d ", i);

    return 0;
}