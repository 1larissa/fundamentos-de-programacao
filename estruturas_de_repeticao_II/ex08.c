#include <stdio.h>

int main ()
{ 
    int tam, i, a, b, c,
        um_pico; // Flag que identifica montanhas de apenas 1 pico

    scanf("%d", &tam);
    scanf("%d", &a);
    scanf("%d", &b);

    um_pico = 1; // Assumindo que tem apenas 1 pico
    for(i = 2; i < tam; i++) // Para se encontrar dois picos
    {
        scanf("%d", &c);
        if (a > b && b < c) // Tem dois picos
            um_pico = 0;
        
        a = b;
        b = c;       
    }

    // Indicar se tem APENAS um pico (S) ou não (N).
    if(um_pico)
        printf("S");
    else
        printf("N");

    return (0);
}