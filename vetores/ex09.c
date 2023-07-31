#include<stdio.h>
#define N_MAX 50

int main ()
{
    int i, tam,
    tab[N_MAX];

    printf("Qual o tamanho do tabuleiro? ");
    scanf("%d", &tam);

    // Preencho o restante tabuleiro 
    for (i = 0; i < tam; i++)
        scanf("%d", &tab[i]);        

    // Imprime o tabuleiro resposta
    // O primeiro elemento
    printf("%d", tab[0] + tab[1]);
    // Imprime os demais elementos
    for (i = 1; i < tam-1; i++)
        printf("%d", tab[i] + tab[i-1] + tab[i+1]); 
    // Imprime o ultimo elemento
    printf("%d", tab[tam-1] + tab[tam-1-1]);

    return 0;
}