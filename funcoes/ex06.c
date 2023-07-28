#include <stdio.h>

int proxFibonacci (int n)
{
    // Roda o Fibonacci
    int ant = 0, atual = 1, // Sempre começa com 0, 1
        prox = ant + atual; // Somatorio

    // Caso especial do zero
    if (n == 0)
        return 0;

    while(prox < n)
    {
        ant = atual;
        atual = prox;
        prox = ant + atual;
    }    
        return prox;
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    int num, resposta;
    scanf("%d", &num);

    resposta = proxFibonacci(num);
    printf("%d", resposta);
}
*/