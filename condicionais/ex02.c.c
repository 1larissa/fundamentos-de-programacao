#include <stdio.h>

int main ()
{
    int x;
    printf("Digite um valor para verificar seu valor absoluto:\n");
    scanf("%d", &x);

    //imprime o valor absoluto
    if(x>=0)
        printf("%d", x);
    else
        printf("%d", x*-1);

    return 0;
}
