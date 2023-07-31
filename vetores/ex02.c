#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10

int main ()
{
    int i,
    v[N];

    srand (time(NULL)); // Define a semente da aleatoriedade

    // Preenche o vetor com numeros aleatorios e imprime
    for(i = 0; i < 10; i++)
    {
        v[i] = rand() % N;
        printf("v[%d] = %d\n", i, v[i]);
    }

    // Imprime os valores que sao iguais a sua posicao
    for(i = 0; i < 10; i++)
        if(v[i] == i)
            printf("%d\n", v[i]);

    return 0;
}