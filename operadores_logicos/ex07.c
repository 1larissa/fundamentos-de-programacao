#include <stdio.h>

  int main () 
  {
    int x1, x2, x3;
    printf("Digite tres valores para verificar se podem ser comprimentos de um triangulo: ");
    scanf("%d %d %d", &x1, &x2, &x3);

    if ((x1 < x2+x3) && (x2 < x1+x3) && (x3 < x1+x2))// condicao de existencia do triangulo
    {
      if (x1 == x2 && x1 == x3)
        printf("Equilatero");
      else if (x1 == x2 || x1 == x3 || x2 == x3)
        printf("Isoceles");
      else
        printf("Escaleno");
    }
    else 
      printf("Nao sao medidas de um triangulo!\n");
    return 0;
  }