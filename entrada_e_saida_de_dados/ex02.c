#include <stdio.h>
#include <math.h>

int main ()
{
    int raio;
    float volume;

    scanf ("%d", &raio);
    volume = (4.0/3.0)*M_PI*raio*raio*raio;

    printf ("Para o raio %d o volume da esfera eh: %f", raio, volume);

    return 0;
}