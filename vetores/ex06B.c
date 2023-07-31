#include <stdio.h>
#define N_MAX 1024

int main()
{
    int i, n, v[N_MAX];

    scanf("%d", &n);
    // Preenche o vetor
    for (i = 0; i < n; i++)
        scanf("%d", &(v[i]));

    // Imprime na ordem inversa
    for(i = n-1; i >= 0; i--)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}