#include <stdio.h>

int main () 
{
    int hora_1, hora_2, minuto_1, 
        minuto_2, segundo_1, segundo_2,
        hora_total = 0, minuto_total = 0, segundo_total = 0;

    printf("Digite dois horarios no formato hora:minuto:segundo para soma - los: ");
    scanf("%d:%d:%d", &hora_1, &minuto_1, &segundo_1);
    scanf("%d:%d:%d", &hora_2, &minuto_2, &segundo_2);
    // Testa se os horarios sao validos
    if (hora_1 < 0 || minuto_1 < 0 || minuto_1 > 59 || segundo_1 < 0 || segundo_1 > 59 ||
        hora_2 < 0 || minuto_2 < 0 || minuto_2 > 59 || segundo_2 < 0 || segundo_2 > 59)
    printf ("Horario invalido");

    // Somo os segundos
    segundo_total = segundo_1 + segundo_2;
    // Se o total for maior do que 60 aumenta um minuto
    if (segundo_total > 60)
    {
        minuto_total = 1;
        segundo_total -= 60;
    }

    // Somo os minutos
    minuto_total += (minuto_1 + minuto_2);
    // Se o total for maior do que 60 aumenta uma hora
    if (minuto_total > 60)
    {
        hora_total = 1;
        minuto_total -= 60;
    }

    // Somo as horas
    hora_total += (hora_1 + hora_2);

    printf("Soma dos horario: %d:%d:%d", hora_total, minuto_total, segundo_total);
    return 0;
}

