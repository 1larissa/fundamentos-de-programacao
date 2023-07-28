#include <stdio.h>

double casasDecimais (double x)
{
    return (x - (int) x);
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    double num, resposta;
    scanf("%lf", &num);

    resposta = casasDecimais(num);
    printf("%lf", resposta);
}
*/