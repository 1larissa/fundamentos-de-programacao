#include <stdio.h>

int main ()
{
    int x, unidade, dezena, centena;

    printf("Digite um numero entre 100 e 999: ");
    scanf("%i", &x);

    unidade = x%10;
    dezena = (x%100)/10;
    centena = x/100;

    x = (unidade*100) + (dezena*10) + (centena);
    printf("Numero invertido:%d\n", x);
    return 0;
}
