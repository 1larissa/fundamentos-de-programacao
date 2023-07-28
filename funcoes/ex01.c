#include <stdio.h>

int ehBissexto (int ano)
{
    // Eh bissexto se for divisível por 400, ou se for divisível por 4 mas não por 100. 
    if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        return 1;
    else 
        return 0;
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main() 
{
    int x_ano, resposta;
    scanf("%d", &x_ano);

    resposta = ehBissexto(x_ano);
    
    if(!resposta)
        printf("Nao eh bissexto");
    else
        printf("Eh bissexto");

    return 0;
}
*/