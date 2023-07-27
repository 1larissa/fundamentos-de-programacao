#include <stdio.h>

int main () 
{
    int tam_seq_cres = 0, maior_cres = 0,
        ant = 0, atual;

    printf("Digite a sequencia: ");
    scanf("%d", &atual);
    while(atual > 0)
    {
        if (ant < atual)
        {
            tam_seq_cres++;
            if(tam_seq_cres > maior_cres) // Sibstitui o maior
                maior_cres = tam_seq_cres;            
        }
        else
            tam_seq_cres = 1; // Reseto a contagem

        ant = atual;
        scanf("%d", &atual);
    }
    printf("A maior sequencia crescente foi: %d", maior_cres);

    return 0;
}