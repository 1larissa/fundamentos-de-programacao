#include<stdio.h>
#include<stdlib.h>
#define TAM 10

int main()
{
    // Ponteiro para a memoria
    float* vetor;
    // Aloca a memoria e indica o endereço
    vetor = (float*) malloc (sizeof(float)*TAM);
    // Preenche o vetor
    int i;
    for (i = 0; i < TAM; i++)
        scanf("%f", &vetor[i]);
    // Imprime o conteudo do vetor
    for (i = 0; i < TAM; i++)
        printf("%f\n", vetor[i]);
    // Desaloca a memoria do vetor
    free(vetor);

    return 0;
}