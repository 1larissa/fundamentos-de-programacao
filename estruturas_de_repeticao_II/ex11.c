#include <stdio.h>

int main ()
{   
    int tam, maior_seq, seq_atual, i,
        ant, atual;

    printf("Digite a qtde de numeros a serem sorteados: ");
    scanf("%d", &tam);
    printf("Digite os numeros sorteados:\n");
    scanf("%d", &ant);

    // Computa a maior sequencia
    maior_seq = 0;
    seq_atual = 1; // Já leu um valor
    for(i = 1; i < tam; i++)
    {
        scanf("%d", &atual);
        if(ant == atual) // Se for sequencia, computa
        {
            seq_atual++; 
            if (seq_atual > maior_seq) // Salva a maior sequencia
                maior_seq = seq_atual;
        }
        else
            seq_atual = 1;
        ant = atual;
    }
    printf("%d", maior_seq);
    return (0);
}