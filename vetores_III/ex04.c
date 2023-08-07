#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFLEN 1024

char* empacotaString (char* string)
{
    // Descobre o tamanho da string
    int i, tamanho = 0;
    tamanho = strlen (string);
    // Cria uma nova string e aloca no tamanho correto
    char* nova_string;
    // Com tamanho + 1 para armanezar o '\0'
    nova_string = (char*)malloc(sizeof(char)*(tamanho+1));
    // Faz a copia dos elementos
    for (i = 0; i < tamanho; i++)
        nova_string[i] = string[i];
    nova_string[i] = '\0';
    // Retorna a copia
    return(nova_string);
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main()
{
    char buffer [BUFLEN];
    fgets (buffer, BUFLEN, stdin);
    char* copia_buffer;
    copia_buffer = empacotaString(buffer);
    free(copia_buffer);
}
*/