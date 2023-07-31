#include <stdio.h>
#define N 6

int main()
{
    int i,
        vetor[N];

    // Preenche o vetor
    for(i = 0; i < N; i++)
        scanf("%d", &vetor[i]);

    printf("\n");

    // Imprime os valores nas posicoes impares
    for (i = 1; i <= N; i++)
        if(i % 2 != 0)
            printf("%d\n", vetor[i-1]);

    // Imprime os valores nas posicoes pares
    for (i = 1; i <= N; i++)
        if(i % 2 == 0)
            printf("%d\n", vetor[i-1]);

    return 0;
}
