#include <stdio.h>
#define TAM 8

void stling(char *string, char *buffer)
{
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {

        // Nao troca o R por L, se for a ultima letra
        if (string[i] == 'r' && string [i+1] == '\0')
            buffer[i] = string[i];

        // Troca o R por L
        else if(string[i] == 'r')
            buffer[i] = 'l';

        // Se nao for R, copia a mesma letra
        else
            buffer[i] = string[i];
    }

    // if(string[i] = 'r' && ) //Não troca se for a ultima letra
}

/*---MAIN PARA TESTE DA FUNCAO---
int main(void)
{
    int i;
    char palavra[TAM], palavla[TAM];
    fgets(palavra, TAM, stdin);

    printf("Antes da função: %s", palavra);
    stling(palavra, palavla);

    printf("\n");
    printf("Depois da função: %s", palavla);
    return 0;
}
*/