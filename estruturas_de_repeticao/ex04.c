#include <stdio.h>

int main () 
{   
    int n, i;
    scanf("%d", &n);

    // imprime os 10 primeiros números inteiros maiores que o n
    // imprime com while
    i = 1;
    while (i <= 10)
    {
        printf("%d ", n+i);
        i++;
    }

    printf("\n");
    // imprime com for
    for(i = 1; i <= 10; i++)
        printf("%d ", n+i);
        
    return 0;
}