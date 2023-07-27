#include <stdio.h>

int main () 
{
    int divisor, dividendo, quociente, resto;
    printf("Digite o conta: ");
    scanf("%d/%d", &dividendo, &divisor);


    quociente = 0;
    while(dividendo >= divisor)
    {
        dividendo -= divisor;
        quociente++;
    }
    resto = dividendo;
    printf("O quociente eh %d e o resto eh %d", quociente, resto);
    return 0;
}