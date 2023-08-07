#include<stdio.h>
#define TAM 10

void copiaVetor (int *vetor, int *vetor2)
{
    int vetor_aux [TAM], i;
    for (i = 0; i < TAM; i++)
    { // Faltava as chaves
        // O vetor_aux nao é realmente necessario,  solucao poderia fazer direto : vetor2[i] = vetor[i];
        vetor_aux [i] = vetor [i]; 
        vetor2[i] = vetor_aux[i]; //Faltava os [i]
    }
}
void imprimeVetor (int *vetor)
{
    int i;
    for (i = 0; i < TAM; i++)
        printf("%d ", vetor [i]);
    printf("\n");
}
int main ()
{
    int vet [TAM], vet2 [TAM];
    int i;
    for (i = 0; i < TAM; i++)
        scanf ("%d", &vet [i]);
    copiaVetor (vet, vet2);
    printf("Vetor:\n");
    imprimeVetor (vet);
    printf("Copia:\n");
    imprimeVetor (vet2);
    return (0);
}