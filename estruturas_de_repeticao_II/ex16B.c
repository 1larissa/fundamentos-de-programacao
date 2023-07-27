#include <stdio.h>

int main ()
{
    int i, j, k; 

    for(i = 1; i < 6; i++) // Controla o dado 1
        for(j = 1; j < 6; j++) // Controla o dado 2
            for(k = 1; k < 6; k++) // Controla o dado 3
                printf("%d, %d, %d\n", i, j, k);
                
    return 0;
}