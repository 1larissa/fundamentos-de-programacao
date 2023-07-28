#include <stdio.h>

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4)
{
    int razao;

    razao = n2 - n1;
    if(n3 - n2 == razao && n4 - n3 == razao)
        return (razao);
    
    return 0;
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main() 
{
    int a, b, c, d, resposta;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    resposta = ehProgressaoAritmetica(a, b, c, d);
    printf("%d", resposta);
}
*/