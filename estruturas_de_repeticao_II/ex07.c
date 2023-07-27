#include <stdio.h>

int main ()
{ 
    int n, i, ant, atual, fibonacci;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    // A sequência de Fibonacci sempre inicializa com 0 e 1
    ant = 0;
    printf("%d ", ant);
    atual = 1;
    printf("%d ", atual);

    // Gera n numeros da sequência de Fibonacci
    for(i = 2; i < n; i++) 
    {
        fibonacci = ant + atual;
        printf("%d ", fibonacci);
        ant = atual;
        atual = fibonacci;
    }
    return (0);
}