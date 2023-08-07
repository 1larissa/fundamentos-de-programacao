#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFLEN 6

char* concatenaStrings (char* s1, char* s2)
{
    // Descobre o tamanho das duas strings
    int tam_s1 = strlen(s1),
        tam_s2 = strlen(s2),
        tam_s3 = tam_s1 + tam_s2;        
    // Cria e aloca o tamanho da nova string
    char* s3;
    // Com tamanho + 1 para armanezar o '\0'
    s3 = (char*)malloc((tam_s3 + 1)* sizeof(char));
    // Concatena as strings
    int i;
    for (i = 0; i < tam_s3; i++)
        // Concatena a primeira string
        if (i < tam_s1)
        {
           s3[i] = s1[i];
        }
        // Concatena a segunda string
        else
            s3[i] = s2[i-tam_s1];
        
        s3[i] = '\0';
    // Retorna a nova string alocada
    return(s3);
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main()
{
    char s1 [BUFLEN], s2[BUFLEN];
    char* s3;
    int i;
    printf("Digite a primeira string: ");
    fgets (s1, BUFLEN, stdin);
    printf("Digite a segunda string: ");
    scanf("%s", s2);
    s3 = concatenaStrings(s1, s2);
    printf("teste main:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%c", s3[i]);
    }
    free(s3);
}
*/
