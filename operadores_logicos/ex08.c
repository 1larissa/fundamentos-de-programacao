#include <stdio.h>

  int main () 
  {
    int conta, conta_invertido, soma, digito,
        unidade, dezena, centena;

    printf("Digite o numero da conta corrente: ");
    scanf("%d", &conta);

    unidade = conta%10;
    dezena = (conta/10)%10;
    centena = conta/100;

    conta_invertido = (unidade*100) + (dezena*10) + centena;

    soma = conta + conta_invertido;

    // Separa de novo os dígitos. Se o resultado for >= 1000, desconsidera o milhar
    if (soma >= 1000)
        soma %= 1000;
    
    unidade = (soma%10)*3;
    dezena = ((soma/10)%10)*2;
    centena = soma/100;
    digito = (unidade + dezena + centena)%10;// apenas o ultimo digito

    printf("O digito verificador dessa conta eh: %d ",  digito);
    return 0;
  }