#include<stdio.h>
#define TAM 6

void inverteString(char *string)
{
    int i, tam;
    char aux;
    
    // Descobre o tamanho da string
    tam = 0;
    for (i = 0; string[i] != '\0'; i++)
        tam++;
    
    //Troca a primeira letra pela ultima
    for(i = 0; i < tam/2; i++)
    {
        aux = string[i];
        string[i] = string[tam-1-i];
        string[tam-1-i] = aux;
    }
}

/*---MAIN PARA TESTES---
int main()
{
    char string[TAM];
    scanf("%s", string);
    inverteString(string);
    printf("%s", string);

    return 0;
}
*/

