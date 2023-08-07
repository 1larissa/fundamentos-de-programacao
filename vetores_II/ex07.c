#include <stdio.h>
#include<string.h>
#define MAX_TAM 50

int ehEngracada (char *string)
{
    int i, tam, vogais;
    char string_vogais[MAX_TAM], invertida[MAX_TAM];

    // Descubre o tamanho da string
    tam = strlen(string);

    // Faz um novo vetor somente com as vogais da risada
    vogais = 0;
    for (i = 0; i < tam; i++)
    {
        // Apenas as vogais
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            string_vogais[vogais] = string[i];
            vogais++;
        }
    }
    
    // Crio um vetor com a string invertida
    for (i = 0; i < vogais; i++)
    {
        invertida[i] = string_vogais[vogais-1-i];
    }

    // Comparo se sao iguais quando lidas invertidas ou normalmente
    for (i = 0; i < vogais; i++)
    {
            if (invertida[i] != string_vogais[i])
                return 0; // Nao eh a mesma sequencia

    }
    return 1;
}
/*---MAIN PARA TESTE DA FUNCAO---
int main()
{
    char risada[MAX_TAM];

    scanf("%s", risada);
    printf("%d", ehEngracada(risada));

    return 0;
}
*/