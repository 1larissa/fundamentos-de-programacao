#include <stdio.h>

int main ()
{   
    int n, i, j;
    // Le o tamanho do quadrado
    scanf("%d", &n);

    // Monta a piramide
    for(i = 0; i < n; i++) // Controla as linhas
    {
        for(j = n; j > i; j--) // Controla as colunas
            printf("A");

        printf("\n");
    }
    return 0;
}