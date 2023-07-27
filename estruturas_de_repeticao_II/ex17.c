#include <stdio.h>
#define N 5

int main ()
{
    int i, div,
        total_primos, soma,
        eh_primo;

    total_primos = 0;
    soma = 0;

    for (i = 2; total_primos < N; i++)
    {   
        eh_primo = 1;  // Flag
        for (div = 2; div < i && eh_primo; div++)  // Verifica com todos os divisores se eh primo
        {
            if(i % div == 0) // Se tem divisor nao eh primo
                eh_primo = 0;
        }

        if(eh_primo)
        {
            total_primos++;
            soma += i; // Soma no total se for primo
            printf("%d ", i);
        }   
    }
    printf("\n");
    printf("%d\n", soma);
    return 0;
}