#include <stdio.h>

int main ()
{
    int num_original, novo_num, digito, num;

    printf("Digite um numero para verificar se eh palindromo: ");
    scanf("%d", &num_original);

    num = num_original;
    novo_num = 0;
    while(num > 0)
    {     
        digito = num % 10;
        novo_num = (novo_num * 10) + digito;
        num /= 10;
    }
    if(novo_num == num_original)
        printf("Eh palindromo");
    else
        printf("Nao eh palindromo");

    return (0);
}