#include<stdio.h>
#include<string.h>
#define TAM_V 6

int ehCrescente (int* vetor, int tamanho)
{  
    int i;

    for (i = 1; i < tamanho; i++)
        if(vetor[i] < vetor[i-1])
            return 0; // Não é crescente

    return 1;
}

/*--MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    int v[] = {6,5,4,3,2,1};
    printf("%d", ehCrescente(v, TAM_V));
}
*/
