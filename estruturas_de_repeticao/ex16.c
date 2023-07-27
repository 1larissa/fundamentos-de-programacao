#include <stdio.h>

int main () 
{
    int num_original, dig_original, num, dig,
        contem; // Flag
    printf("Digite um numero: ");
    scanf("%d", &num_original);
    printf("Digite um digito: ");
    scanf("%d", &dig_original);

    num = num_original;
    contem = 0; // Começa assumindo que nao contem o digito
    while(num > 0 && !contem)
    {
        dig = num%10;
        num /=  10;
        if (dig == dig_original)
            contem = 1;
    }
    if (contem)
        printf("O numero %d contem o digito %d", num_original, dig_original);
    else if (!contem)
    printf("O numero %d nao contem o digito %d", num_original, dig_original);

    return 0;
}