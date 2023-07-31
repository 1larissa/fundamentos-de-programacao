#include <stdio.h>

void removeExtremos (int *n, int *pri, int *ult)
{
    int tn, pot = 1;
    tn = *n;
    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }
    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}

/*
int main ()
{
    int num, primeiro, ultimo,
        eh_palindromo = 1; // Flag

    scanf("%d", &num);
    while(num > 0)
    {
        removeExtremos(&num, &primeiro, &ultimo);
        if (primeiro != ultimo) 
            eh_palindromo = 0; // Não eh palindromo
    }
    if(eh_palindromo)
        printf("Eh palindromo");
    else
        printf("Nao eh palindromo");

    return 0;
}
*/