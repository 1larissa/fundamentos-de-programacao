#include<stdio.h>
#define N_LINHAS 3
#define N_COLUNAS 4


int main()
{
    int campo [N_LINHAS][N_COLUNAS] = { {81, 28, 240, 10},
                                        {40, 10, 100, 240},
                                        {20, 180, 110, 35}};
                                        

    // Verifica a soma para cada linha, salvando a maior
    int i, j, maior_soma = 0, soma_atual = 0;
        for (i = 0; i < N_LINHAS; i++)
        {
            for (j = 0; j < N_COLUNAS; j++)
                soma_atual += campo [i][j];
            if (soma_atual > maior_soma)
                maior_soma = soma_atual;
            soma_atual = 0;
        }
    // Verifica a soma para cada coluna, salvando a maior
    for (i = 0; i < N_COLUNAS; i++)
    {
        for (j = 0; j < N_LINHAS; j++)
            soma_atual += campo [j][i];
        if (soma_atual > maior_soma)
            maior_soma = soma_atual;
        soma_atual = 0;
    }
    printf("maior soma: %d", maior_soma);
    return 0;
}