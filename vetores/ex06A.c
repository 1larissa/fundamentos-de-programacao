#include <stdio.h>
#define N 5

int main()
{
    int i, v[N];

    // Preenche o vetor
    for (i = 0; i < N; i++)
    {
        scanf("%d", &(v[i]));
    }
    // Imprime na ordem inversa
    for(i = N-1; i >= 0; i--)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}