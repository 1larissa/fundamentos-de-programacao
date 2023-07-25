#include <stdio.h>

int main () 
{
    int n, soma_div, i;
    printf("Digite um numero para verificar se eh perfeito: ");
    scanf ("%d", &n);

    //descubre os divisores e vai somando/acumulando
    soma_div = 0;
    for(i = 1; i < n; i++)
    {
        if (n % i == 0) // Se eh divisor
            soma_div += i;
    }

    if (soma_div == n)
        printf("Eh um numero perfeito");
    else 
        printf("Nao eh um numero perfeito");
    return 0;
}