#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM_MAX 10

int* criaVetorInt(int tamanho)
{
    int* vetor;
    // Aloca a memoria
    vetor = (int*)malloc(sizeof(int)*tamanho);
    if (vetor == NULL)
        printf("Erro na alocacao de memoria");
    // Retorna o endereço do inicio da memoria alocada
    return(vetor);
}
void preencheVetorRandom(int* vetor, int tamanho)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < tamanho; i++)
        vetor[i] = rand () % (TAM_MAX + 1);

}
void ImprimeVetor(int* vetor, int tam)
{
    int i;
    for (i = 0; i < tam; i++)
        printf("v[%d] = %d\n", i, vetor[i]);
}

int main()
{
    int* v1;
    int* v2;
    int tamanho1, tamanho2;

    // Cria os vetores
    scanf("%d", &tamanho1);
    v1 = criaVetorInt(tamanho1);
    scanf("%d", &tamanho2);
    v2 = criaVetorInt(tamanho2);
    preencheVetorRandom(v1, tamanho1);
    preencheVetorRandom(v2, tamanho2);
    printf("v1\n");
    ImprimeVetor(v1, tamanho1);
    printf("v2\n");
    ImprimeVetor(v2, tamanho2);
    // Define o tamanho do vetor, para caber todos os elementos a multiplicação dos elementos de v1 e v2
    int tamanho3;
    tamanho3 = tamanho1 * tamanho2;    
    // Cria o novo vetor
    int* v3;
    v3 = criaVetorInt(tamanho3);
    // Preenche o vetor com a multiplicacao dos elementos
    int i, j;
    for (i = 0; i < tamanho1; i++)
        for (j = 0; j < tamanho2; j++)
            //A posição em v3 é dada pelo número de vezes que já percorremos o vetor2 + a posição atual no vetor2.
            v3[i*tamanho2 + j] = v1[i] * v2[j];

    printf("v3\n");
    ImprimeVetor(v3, tamanho3);
    // Desaloca as memorias
    free(v1);
    free(v2);
    free(v3);

    return 0;
}