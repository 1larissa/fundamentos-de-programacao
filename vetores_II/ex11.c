#include <stdio.h>
#define MAX 100

int main() {

  int i, j, pedras[MAX], qtde_pedras, tam_pulo, qtde_sapos, posicao;
  scanf("%d %d", &qtde_pedras, &qtde_sapos);

  // Zero o vetor das pedras
  for (i = 0; i < qtde_pedras; i++)
    pedras[i] = 0;
  // Le posicao na pedra e tam pulo de cada sapo
  for (i = 0; i < qtde_sapos; i++) {
    scanf("%d %d", &posicao, &tam_pulo);
    // Preenche as possiveis posicoes do sapo a direita da posicao inicial
    for (j = posicao; j < qtde_pedras; j += tam_pulo)
      pedras[j] = 1;
    // Preenche as possiveis posicoes do sapo a esquerda da posicao inicial
    for (j = posicao; j >= 0; j -= tam_pulo)
      pedras[j] = 1;    
  }

  // Imprimir as pedras
  for (i = 0; i < qtde_pedras; i++)
    printf("%d", pedras[i]);

  return 0;
}