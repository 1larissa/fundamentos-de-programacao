#include <stdio.h>

int main () 
{ 
    int tam_seq, i, ant, atual,
        eh_cresc = 1, eh_decres = 1; // Flags começam ativadas

    printf("Quantidade de numeros a serem lidos: ");
    scanf("%d", &tam_seq);

    printf("Digite um valor: ");
    scanf("%d", &ant); // Faz com q i comece em 1

    for(i = 1; i < tam_seq; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &atual);

        if(ant >= atual)
            eh_cresc = 0;
        else if (ant <= atual)
            eh_decres = 0;
        
        ant = atual;
    }

    if(eh_cresc)
        printf("A seq eh crescente\n");

    else if(eh_decres)
        printf("A seq eh decrescente\n");
    
    else
        printf("A seq nao eh crescente nem decrescente\n");
    return 0;
}