#include <stdio.h>

int media (float *maior, float *menor, float n)
{   
    int i;
    float num, soma = 0;
    scanf("%f", &num);
    *maior = num;
    *menor = num;

    for (i = 1; i < n; i++)
    {
        scanf("%f", &num);
        if(num > *maior)
            *maior = num;
        else if(num < *menor)
            *menor = num;
        soma += num;
    }
    return (soma / n);
} 
/*---MAIN PARA TESTE DA FUNÇÃO---
int main ()
{
    float maior, menor, resposta;
    int  x;
    scanf("%d", &x);
    resposta = media (&maior, &menor, x);
    printf("Maior: %f, Menor: %f e Media: %f", maior, menor, resposta);
    return 0;
}
*/