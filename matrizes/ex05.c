#include<stdio.h>
#define TAM_MAX 129 // 128 caracteres + '\0'
#define N 5

int main()
{
    char frases[N][TAM_MAX];
    // Lê cada frase e armazena em cada linha
    int i, j;
    for (i = 0; i < N; i++)
        fgets(frases[i], TAM_MAX,stdin);  

    // Imprime a matriz a partir da ultima linha
    printf("Inverso: \n");
    for (i = N-1; i >= 0; i--)
        for (j = 0; frases[i][j] != '\0'; j++)
            printf("%c", frases[i][j]);

    return 0;
}



