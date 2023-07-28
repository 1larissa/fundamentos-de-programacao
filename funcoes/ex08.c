#include <stdio.h>

unsigned int inverteNum (unsigned int n)
{   
    unsigned int novo_n = 0, digito, i;

    for (i = 0; n > 0; i++)
    {   
        digito = n % 10;
        novo_n = (novo_n*10) + digito;
        n /= 10;        
    }
    return (novo_n);
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    unsigned int num, resposta;
    scanf("%i", &num);

    resposta = inverteNum(num);
    printf("%i", resposta);
}
*/
