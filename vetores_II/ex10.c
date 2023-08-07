#include<stdio.h>
#define TAM 8

int quantasLetras (char *string)
{
    int i, j,
        contador[26];
    char alfabeto[26];

    // Preenche um vetor com o alfabeto maiusculo
    for (i = 0; i < 26; i++)
        alfabeto[i] = 'A' + i;

    // Zera o vetor
    for (i = 0; i < 26; i++)
        contador[i] = 0;

    // Percorre a string e salva as ocorrencias de cada letra maiuscula ou minuscula
    for (i = 0; string[i] != '\0'; i ++)
    {
        for(j = 0; j < 26; j++)
        {
            // Se for mesma letra maiuscula ou minuscula
            if(string[i] == alfabeto[j] || string[i] == alfabeto[j] + 32)
                contador[j]++;
        }
    }
    // Imprimo as ocorrencias
    for (i = 0; i < 26; i++)
    {
        if(contador[i])
            printf("%d letras %c\n", contador[i], alfabeto[i]);
    }
    return 0;
}

/*---MAIN PARA TESTES---
int main()
{
    char string[TAM];
    fgets(string, TAM, stdin);
    quantasLetras(string);

    return 0;
}
*/