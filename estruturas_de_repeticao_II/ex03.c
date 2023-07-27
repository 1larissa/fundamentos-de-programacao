#include <stdio.h>
int main ()
{
    int n, ingresso, i, ingresso_sorteado;
    printf("Digite a quantidade de participantes da festa: ");
    scanf("%d", &n);

    // Le os numeros dos ingressos
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &ingresso);
        // Se o numero do ingresso for igual a posicao, imprime o ganhador
        if (ingresso == i)
            ingresso_sorteado = ingresso;
    }
    printf("%d", ingresso_sorteado);
    return (0);
}