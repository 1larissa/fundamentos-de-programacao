#include <stdio.h>

int main ()
{
    int vel, velMax,
        diferenca;

    printf("Digite a velocidade maxima da avenida:\n");
    scanf("%d",&velMax);
    printf("Digite a velocidade dirigida:\n");
    scanf("%d",&vel);

    if(vel > velMax)
    {
        diferenca = vel-velMax;
        printf("A multa eh de %d", diferenca*50);
    }
    else
        printf("Nao ha multa");
    return 0;
}
