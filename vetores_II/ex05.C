#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main() {

  int vetor[N], tam, i;
  tam = N;

  // Preenche o vetor com números aleatórios
  srand(time(NULL));
  for (i = 0; i < tam; i++) {
    vetor[i] = rand() % 40;
    printf("vetor[%d] = %d\n", i, vetor[i]);
  }
  // Remove a posição que o usuário quer
  int posicao;
  while (tam > 0) {
    printf("Qual posicao quer excluir? ");
    scanf("%d", &posicao);
    // Remove a posicao indesejada e puxa os demais elementos para "tras"
    int aux;
    for (i = 0; i < tam - posicao; i++) {
      aux = vetor[posicao + 1 + i];
      vetor[posicao + i] = aux;
    }
    tam--;
    // Imprimo o novo vetor
    for (i = 0; i < tam; i++)
      printf("vetor[%d] = %d\n", i, vetor[i]);
  }
  return 0;
}