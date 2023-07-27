#include <stdio.h>
int main ()
{
    int aposta_timeA, aposta_timeB, timeA, timeB,
        pontos;

    printf("Digite o placar apostado: (ex.: 2x1)");
    scanf("%dx%d", &aposta_timeA, &aposta_timeB);
    printf("Digite o placar do resultado oficial: (ex.: 2x1)");
    scanf("%dx%d", &timeA, &timeB);

    // Calcula quantos pontos o usuario fez
    pontos = 0;
    // 10 pontos se acertarem o vencedor ou se foi empate

    // Se acertar o empate
    if((aposta_timeA == aposta_timeB && timeA == timeB) ||
        // Ou se acertar o ganhador
       (aposta_timeA > aposta_timeB && timeA > timeB) ||
       (aposta_timeB > aposta_timeA && timeB > timeA))
       pontos += 10;
    
    // 5 pontos para o placar de cada time que acertarem.
    if(aposta_timeA == timeA)
        pontos += 5;
    if(aposta_timeB == timeB)
        pontos += 5;
    
    printf("Total de pontos: %d", pontos);
      return (0);
}