#include<stdio.h>

int ehPalindromo (char* s)
{
    int i;
    // Descobre o tamanho da string
    int tam_s = 0;
    for(i = 0; s[i] != '\0'; i++)
        tam_s++;

    for(i = 0; i < tam_s/2; i++) 

        // Se for de tamanho par
        if(s[i] != s[tam_s-1-i]) // Compara o primeiro e o ultimo digito
            return (0); // Nao palavra palidroma

    return (1); // Eh palindromo
}


/*--MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    int n = 4;
    char v[n];

    fgets(v, n, stdin);

    printf("%d", ehPalindromo(v));
}
*/
