#include <stdio.h>

int main()
{
    float preco_alcool, preco_gasolina,
          desempenho_gasolina, desempenho_alcool,
          alcool, gasolina;

    printf("Digite o valor do litro do alcool hoje:\n");
    scanf("%f", &preco_alcool);
    printf("Digite o valor do litro da gasolina hoje:\n");
    scanf("%f", &preco_gasolina);

    printf("Qual o desempenho desse automovel? (Km/L de alcool)\n");
    scanf("%f", &desempenho_alcool);
    printf("Qual o desempenho desse automovel? (Km/L de gasolina)\n");
    scanf("%f", &desempenho_gasolina);

    // calcula qual a opçao mais economica
    alcool = preco_alcool/desempenho_alcool;
    gasolina = preco_gasolina/desempenho_gasolina;

    if (gasolina > alcool)
        printf("Eh mais economico abastecer com alcool hoje.\n");
    else
        printf("Eh mais economico abastecer com gasolina hoje.\n");
    return 0;
}
