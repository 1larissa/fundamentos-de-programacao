/*1. Escreva um programa que gera N valores aleatórios do tipo float no intervalo [-40,+40], onde N
é uma constante dada. O programa deve calcular e imprimir a média dos positivos, e depois mostrar
cada um dos valores positivos, dizendo se o valor é maior, menor ou igual à média. Já os valores
negativos não devem ser armazenados em um vetor.*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
#define MIN -40
#define MAX 40

int main ()
{
    int i, posicao;
    float num, media,
    vetor[N]; // Vetor para armazenar os valores positivos

    srand(time(NULL)); // Define a semente da aleatoriedade

    // Preenche o vetor somente com os valores positivos até 40 e soma os valores para a media
    posicao = 0;
    media = 0;
    for (i = 0; i < N; i++)
    {
        num = MIN + (rand() % (MAX - MIN  + 1));
        printf("Numero gerado = %.2f\n", num);
        if(num > 0)
        {
            vetor[posicao] = num;
            printf("v[%d] = %.2f\n", posicao, num);
            posicao++;
            media += num;
        }
    }
    // Descubro o tamanho do vetor
    media /= posicao;
    printf("A media eh: %.2f\n", media);

    // Imprime o vetor de positivos e diz se cada elemento eh maior, menor ou igual a media
    for (i = 0; i < posicao; i++)
    {
        if(vetor[i] > media)
            printf("v[%d] = %.2f eh maior que a media", i, vetor[i]);
        else if(vetor[i] > media)
            printf("v[%d] = %.2f eh menor que a media", i, vetor[i]);
        else
            printf("v[%d] = %.2f eh igual a media", i, vetor[i]);
    }
    return 0;
}