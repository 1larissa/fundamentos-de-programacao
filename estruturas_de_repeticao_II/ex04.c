#include <stdio.h>

int main ()
{
    int objetivo, tam_pista, ponto;

    printf("Digite quantos metros pretende correr: ");
    scanf("%d", &objetivo);
    printf("Digite o comprimento da pista: ");
    scanf("%d", &tam_pista);

    ponto = objetivo % tam_pista;

    printf("O ponto do termino eh: %d", ponto);

    return (0);
}