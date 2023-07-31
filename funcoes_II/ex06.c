#include <stdio.h>

int k_alternante (int *k)
{
    int n, // Tamanho da sequencia a ser lida
    tam_k, i, atual, anterior,
    tam_k_definido = 0, // Flag sinaliza se o tam de k já foi definido
    seq_atual;

    scanf("%d", &n);
    scanf("%d", &anterior);
    seq_atual = 1; tam_k = 1;

    for (i = 1; i < n; i++)
    {
        scanf("%d", &atual);

        // Define o tamanho k-alternancia e da sequencia atual
        if((atual%2 == 0 && anterior%2 == 0) || (atual%2 != 0 && anterior%2 != 0))
        {
            seq_atual++;
            if(!tam_k_definido)
                tam_k++;
        }
        else // Quebra de sequencia
        {
            tam_k_definido = 1;
            if(seq_atual != tam_k)
                return 0;// Não eh k alternante
            seq_atual = 1; // Inicia novamente a contagem da sequencia
        }
        anterior = atual;
    }
    *k = tam_k;
    return 1;
}

/*
int main()
{
    int k;
    k_alternante(&k);
    printf("%d", k);
    return 0;
}
*/