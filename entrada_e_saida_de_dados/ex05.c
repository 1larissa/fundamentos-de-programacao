#include <stdio.h>

int main ()
{
    int totalSegundos;
    int dias, horas, minutos, segundos;

    scanf ("%d", &totalSegundos);

    dias = totalSegundos / 86400;
    horas = totalSegundos % 86400 / 3600;
    minutos = totalSegundos % 86400 % 3600 / 60;
    segundos = totalSegundos % 86400 % 3600 % 60;

    printf ("%d segundos equivalem a %d dias, %d horas, %d minutos e %d segundos", totalSegundos, dias, horas, minutos, segundos);

    return 0;
}
