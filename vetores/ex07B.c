#include<stdio.h>

int qtde_digito (unsigned int num, int digito)
{
    int i, total = 0;
    for(i = 0; num > 0; i++)
    {
        if(digito % 10 == digito)
            total++;
        num /= 10;
    }
    return(total);
}
int ehParDeFoolano (unsigned int n1, unsigned int n2)
{
    int digito;

    for (digito = 0; digito <= 9; digito++)
        if(qtde_digito(n1, digito) != qtde_digito(n2, digito))
            return 0; // Não eh par foolano 

    return 1;
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main ()
{
    unsigned int  x1, x2, resposta;
    scanf("%d %d", &x1, &x2);
    resposta = ehParDeFoolano (x1, x2);
    printf("%d", resposta);
    return 0;
}
*/
