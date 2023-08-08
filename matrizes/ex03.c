#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N_LINHAS 3
#define N_COLUNAS 2

int main()
{
    int matrizA[N_LINHAS][N_COLUNAS],
        i, j;

    // Preenche a matriz com valores aleatorios entre [1 e 20]
    srand(time(NULL));
    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            matrizA[i][j] = 1 + (rand () % 20);
    
    // Imprime a matriz
    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
            printf("%d ",  matrizA[i][j]);
        printf("\n");
    }
    printf("\n");

    // Cria a nova matriz transposta
    int transposta[N_COLUNAS][N_LINHAS];

    // Preenche a matriz transposta, onde j,i era i,j na matriz original
    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            transposta[j][i] = matrizA[i][j];

    // Imprime a matriz transpostaa
    for (i = 0; i < N_COLUNAS; i++)
    {
        for (j = 0; j < N_LINHAS; j++)
            printf("%d ",  transposta[i][j]);
         printf("\n");
    }
    return 0;
}
