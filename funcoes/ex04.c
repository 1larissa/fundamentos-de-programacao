#include <stdio.h>

int arredonda (double x)
{
    if (x >= 0) // Se for positivo soma 0.5
        return ((int) x + 0.5);
    else // Se for negativo substrai 0.5
        return ((int) x - 0.5);
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    double num, resposta;
    scanf("%lf", &num);

    resposta = arredonda(num);
    printf("%lf", resposta);
}
*/