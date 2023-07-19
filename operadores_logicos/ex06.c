  #include <stdio.h>

  int main () 
  {
    int x, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1;

    printf("Digite o valor total: ");
    scanf("%d", &x);

    nota_100 = x/100;
    x -= nota_100*100;
    nota_50 = x/50;
    x -= nota_50*50;
    nota_20 = x/20;
    x -= nota_20*20;
    nota_10 = x/10;
    x -= nota_10*10;
    nota_5 = x/5;
    x -= nota_5*5;
    nota_2 = x/2;
    x -= nota_2*2;
    nota_1 = x;

    printf("Saque %d notas de R$ 100, %d notas de R$ 50, %d notas de R$ 20, %d notas de R$ 10, %d notas de R$ 5, %d notas de R$ 2, %d notas de R$ 1.\n",
         nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1);
    return 0;
  }