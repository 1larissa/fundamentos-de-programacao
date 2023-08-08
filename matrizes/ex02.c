#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N_LINHAS 3
#define N_COLUNAS 2

int main()
{
    int matrizA[N_LINHAS][N_COLUNAS],
        i, j, lin, col;

    // Preenche a matriz com valores aleatorios
    srand(time(NULL));
    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            matrizA[i][j] = rand () % 11;
    
    // Imprime a matriz
    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
            printf("%d ",  matrizA[i][j]);
        printf("\n");
    }

    printf("Informe uma linha entre 0 e %d: ", N_LINHAS-1);
    scanf("%d", &lin);
    printf("Informe uma coluna entre 0 e %d: ", N_COLUNAS-1);
    scanf("%d", &col);

    // Soma da linha
    int soma = 0;
    for (i = 0; i < N_COLUNAS; i++)
        soma += matrizA[lin][i];
    // Soma da coluna
    for (i = 0; i < N_LINHAS; i++)
        soma += matrizA[i][col];
    // Desconta a leitura extra de matriz[lin][col]
    soma -= matrizA[lin][col];

    printf("A soma dos elementos da linha[%d] e coluna[%d] da matriz eh %d\n", lin, col, soma);   
                             
    return 0;
}