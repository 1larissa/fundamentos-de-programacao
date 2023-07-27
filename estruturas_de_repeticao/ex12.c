#include <stdio.h>

int main () 
{
    int min = -1, max = -1,
        valor_atual, menor, maior,
        valores_faixa = 0; // Contador que salva quantos valores estavam dentro da faixa

    printf("Digite o valor min e max da faixa: (ex.: 50 60)");
    scanf("%d %d", &min, &max);

    printf("Digite um valor: ");
    scanf("%d", &valor_atual);
    menor = valor_atual;
    maior = valor_atual;

    while(valor_atual >= 0)
    {  
        if(valor_atual >= min && valor_atual <= max)
       {
            valores_faixa++;
            if(valor_atual > maior)
                maior = valor_atual;
            if (valor_atual < menor)
                menor = valor_atual;
       }
        printf("Digite um valor: ");
        scanf("%d", &valor_atual);
    }

    if(valores_faixa == 0)
        printf("Erro");
    else 
        printf("Haviam %d valores que estavam na faixa, o menor valor foi: %d, e o maior foi: %d", valores_faixa, menor, maior);

    return 0;
}