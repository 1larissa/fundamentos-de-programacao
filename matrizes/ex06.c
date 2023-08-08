#include<stdio.h>
#define N 6

int main()
{
    // Preto = 1
    // Branco = 0
    // Desconhecido = 9
    int tabuleiro [N][N] = {{0,0,1,0,0,0},
                            {1,9,9,9,9,9},
                            {0,9,9,9,9,9},
                            {0,9,9,9,9,9},
                            {1,9,9,9,9,9},
                            {1,9,9,9,9,9}};

    // Para cada posição desconhecida da matriz(9) iniciando em (1,1)
    int i, j, total_pretas = 0, total_brancas = 0;
    for (i = 1; i <= N-1; i++)
    {
        for (j = 1; j <= N-1; j++)
        {     
            // Analisa -se o total de pedras petras e brancas ao redor
            // Em cima
            if(!tabuleiro[i-1][j])
                total_brancas++;
            else
                total_pretas++;            
            // Na diagonal
            if(!tabuleiro[i-1][j-1])
                total_brancas++;
            else
                total_pretas++; 
            // Na esquerda
            if(!tabuleiro[i][j-1])
                total_brancas++;
            else
                total_pretas++; 
            // Se houver mais pedras pedras, a posicao atual recebe branco
            if(total_pretas > total_brancas)
                tabuleiro[i][j] = 0;                        
            // Se houver mais pedras brancas, a posicao atual recebe preto
            else //total_brancas > total_pretas
                tabuleiro[i][j] = 1;  
            // Reseta as contagens
            total_pretas = 0;
            total_brancas = 0;
        }
    }
    // Imprime o tabuleiro
    for (i = 0; i <= N-1; i++)
    {
        for (j = 0; j <= N-1; j++)
            printf("%d", tabuleiro[i][j]);
        printf("\n");
    }
    return 0;
}