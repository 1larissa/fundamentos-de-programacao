#include<stdio.h>
#define M 2
#define N 3


int main ()
{
    int a[M][N] = {{2, 4, 6},
                   {3, 9, 12}},

        b[N][M] = {{5, 10,},
                   {10, 100},
                   {1, 2}},
         
        multp[M][M];

    // Para cada elemento da matriz multp..
    int i, j, k, soma = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            // Faz a multiplica N vezes e soma
            for (k = 0; k < N; k++)
                soma += a[i][k] * b[k][j];
            multp[i][j] = soma;
            soma = 0;
        }
    }
    // Imprime a matriz multiplicada
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
            printf("%d ", multp[i][j]);
        printf("\n");
    }
    return 0;
}