#include <stdio.h>

void segundosParaHMS (int total_segundos, int *h, int *m, int *s)
{
    *h = total_segundos / 3600;
    *m = total_segundos % 3600 / 60;
    *s = total_segundos % 3600 % 60;
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main ()
{
    int  x, hora, minuto, segundo;
    scanf("%d", &x);
    segundosParaHMS (x, &hora, &minuto, &segundo);
    printf("%d:%d:%d", hora, minuto, segundo);
    return 0;
}
*/