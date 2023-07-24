#include <stdio.h>

  int main () 
  {
    int x;
    printf("Digite um numero para decosbrir se eh par: ");
    scanf("%d", &x);
    
    if (x & 0x01) //verifica se o resto eh 1
        printf ("Eh impar");
    
    else
        printf ("Eh par");
    return 0;
  }