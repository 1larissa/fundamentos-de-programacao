#include <stdio.h>

int main ()
{
    int i, j; 

    for(i = 1; i < 6; i++) // Controla o dado 1
        for(j = 1; j < 6; j++) // Controla o dado 2
            printf("%d, %d \n", i, j);

    return 0;
}