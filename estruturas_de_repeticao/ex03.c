#include <stdio.h>

int main () 
{
    int n, i;
    scanf ("%d", &n);

    //imprime a tabuada de n até n*10 com while
    i=1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }

    printf("\n");
    //imprime a tabuada de n até n*10 com for
    for(i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n*i);

    return 0;
}