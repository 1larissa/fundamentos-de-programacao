  #include <stdio.h>

  int main () 
  { 
    int distancia;
    printf("Digite a distancia para calcular a pontuacao: ");
    scanf("%d", &distancia);

    if (distancia <= 800)
        printf("1 ponto");
    else if (distancia <= 1400)
        printf("2 ponto");
    else if (distancia <= 2000)
        printf("3 ponto");
    return 0;
  }