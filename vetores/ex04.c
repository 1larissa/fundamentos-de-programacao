#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 5
#define MIN 20
#define MAX 80

int main()
{
    int i, media, maiores, menores, iguais,
    v[N];

    srand (time(NULL)); // Define a semente da aleatoriedade

    // Preenche o vetor com numeros aleatorios entre [20,80] e imprime
    for(i = 0; i < N; i++)
    {
        v[i] = MIN + (rand() % (MAX - MIN  + 1));
        printf("v[%d] = %d\n", i, v[i]);
    }

    // Calcula a media
    media = 0;
    for (i = 0; i < N; i++)
        media += v[i];

    media /= N;
    printf("A media eh : %d\n", media);
    // Verifica quantos numeros eram maiores, menores ou igual a media e 
    // Mostra cada valor e se era maior ou menor q a media
    maiores = 0; menores = 0; iguais = 0;
    for(i = 0; i < N; i++)
    {
        if(v[i] > media)
        {
            maiores++;
            printf("v[%d] = %d eh maior que a media\n", i, v[i]);
        }
        else if(v[i] < media)
        {
            menores++;
            printf("v[%d] = %d eh menor que a media\n", i, v[i]);
        }
        else
        {
            iguais++;
            printf("v[%d] = %d eh igual a media\n", i, v[i]);
        }
    }
    printf("Haviam %d valores maiores que a media, %d menores e %d iguais.\n", maiores, menores, iguais);
    return 0;
}