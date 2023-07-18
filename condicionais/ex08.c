#include <stdio.h>

int main ()
{
    int inicio, fim, duracao;

    printf("Digite a hora do inicio do jogo: ");
    scanf ("%d", &inicio);
    printf("Digite a hora do fim do jogo: ");
    scanf ("%d", &fim);


    if (fim < inicio)// a partida virou o dia
        duracao = 24 - inicio + fim;
    else
        duracao = fim - inicio;

    printf("O jogo durou %d\n", duracao);

    return 0;
}
