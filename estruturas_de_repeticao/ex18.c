#include <stdio.h>
#define N 50
int main () {

    int palpites, chute, resposta_user, fim,
    inicio = 0;

    //   |-------------|------------|
    //   0           chute          50
    //(inicio)                     (fim)
    fim = N;
    chute = fim / 2;
    printf("O intervalo definido para esse jogo eh [0,%d]\n", N);
    printf ("Pense em um numero neste intervalo..\n");
    printf ("O numero eh: %d ?\n", chute);

    printf ("Responda com 1(menor), 2 (igual), ou 3 (maior) ao chute\n");
    scanf("%d", &resposta_user);

    for (palpites = 1; resposta_user != 2; palpites++)
    {
        if (resposta_user == 1)
        {
            fim = chute; // Redefine o intervalo
            chute = (fim + inicio) / 2;//média
        }

        else if (resposta_user == 3)
        {
            inicio = chute; // Redefine o intervalo
            chute = (fim + inicio) / 2; //média
        }
        printf ("O numero eh: %d ?\n", chute);
        printf ("Responda com 1(menor), 2 (igual), ou 3 (maior) ao chute\n");
        scanf("%d", &resposta_user);
    }
    printf ("Acertei! Foram necessarios %d palpites", palpites);

return 0;
}