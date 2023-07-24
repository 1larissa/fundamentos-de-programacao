#include <stdio.h>

  int main ()
  {
    float total_rendimento, rendimento_parcial, total_imposto = 0;
    printf("Qual foi o seu rendimento mensal? ");
    scanf("%f", &total_rendimento);

    // calculo do imposto
    if (total_rendimento > 4000) // rendimento > R$4000,00 imposto é de 27,5%
    {
        rendimento_parcial = total_rendimento - 3999.99; // descobre o valor que sera aplicado o 27,5%
        total_imposto = rendimento_parcial * 0.275; // aplica 27,5% neste rendimento parcial
        total_rendimento -= rendimento_parcial; // atualiza o total
    }
    if (total_rendimento >= 3500.76 && total_rendimento <= 4000) // rendimento entre R$3.500,76 até R$4.000,00 imposto é de 22,5%
    {
        rendimento_parcial = total_rendimento - 3500.75; // descobre o valor que sera aplicado o 22,5%
        total_imposto += rendimento_parcial * 0.225; // aplica 22,5% neste rendimento parcial e soma com o imposto da aliquota anterior
        total_rendimento -= rendimento_parcial; // atualiza o total
    }
    if (total_rendimento >= 2300.51 && total_rendimento <= 3500.75) // rendimento entre R$2300,51 até R$3.500,75 imposto é de 15%
    {
        rendimento_parcial = total_rendimento - 2300.50; // descobre o valor que sera aplicado o 15%
        total_imposto += rendimento_parcial * 0.15; // aplica 15% neste rendimento parcial e soma com o imposto da aliquota anterior
        total_rendimento -= rendimento_parcial; // atualiza o total
    }
    if (total_rendimento >= 1200.26 && total_rendimento <= 2300.50) // rendimento entre R$1200,26 até R$2300,50 imposto é de 7,5%
    {
        rendimento_parcial = total_rendimento - 1200.25; // descobre o valor que sera aplicado o 7,5%
        total_imposto += rendimento_parcial * 0.075; // aplica 7,5% neste rendimento parcial e soma com o imposto da aliquota anterior
        total_rendimento -= rendimento_parcial; // atualiza o total
    }

    printf("%.2f", total_imposto);
    return 0;
  }
