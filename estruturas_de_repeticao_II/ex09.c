#include <stdio.h>
#define MIN_TERMO 0.2

int main ()
{ 
    float termo = 1, denominador = 1, soma = 0;

    // Calcula a série harmônica
    termo = 1.0 / denominador;
    while (termo >= MIN_TERMO)
    {
        soma += termo;
        printf("%f  %f\n", termo, soma);
        denominador++;
        termo = 1.0 / denominador;
    }
    return (0);
}