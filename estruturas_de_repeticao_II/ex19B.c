#include <stdio.h>

int main ()
{
    int n , i, j;
    scanf("%d", &n);

    // Constroi a piramide
    for (i = 0; i < n; i++) // Controlando as linhas
    {
        for (j = 0; j < n - i; j++) // Controla as colunas
            printf("%c ", 'A'+ (j + i)); // Alterei 'A'+ j;

        printf("\n");
    }
    return 0;
}