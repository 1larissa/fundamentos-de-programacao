#include<stdio.h>

int buscaVetor (int* vetor, int n, int procurado)
{
    int i;
    for(i = 0; i < n; i++) // Roda o vetor procurando o numero
        if(vetor[i] == procurado)
            return (i); 

    return (-1); // Não existe o numero no vetor
}


/*---MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    int i, n = 5, digito = 2,
    v[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    printf("%d", buscaVetor(v, n, digito));
}
*/