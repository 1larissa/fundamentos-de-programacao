#include <stdio.h>
int main ()
{
    unsigned int base, expoente;
    // Antiga linha: unsigned long long total = 0;
    // Nova linha:  
    unsigned long long total = 1;

    scanf ("%u", &base);
    scanf ("%u", &expoente);

    while (expoente > 0)
    {      
        // Antiga linha: base *= base;
        // Nova linha: 
        total *= base;
        expoente--;
    }

    printf ("%llu\n", total);
    return (0);
}