#include <stdio.h>

int ultimosDigitos (int a, int b)
{
    int b_copia;
    // Calculo o "tamanho" de b
    int i, tam_b = 1;
    b_copia = b; // Salvo em outra variavel para nao perder o valor original
    for(i = 0; b_copia > 0; i++)
    {
        b_copia /=10;
        tam_b *= 10;
    }

    if (a % tam_b == b)
        return 1;

    return 0;
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    int x1, x2, resposta;
    scanf("%d %d", &x1, &x2);

    resposta = ultimosDigitos(x1, x2);
    printf("%d", resposta);
}
*/