  #include <stdio.h>

  int main () 
  {
    int x;
    scanf("%d", &x);

    if ((!(x%2) && x > 10) || (x%2 && x < 50))
        printf("SIM");    
    else
        printf("NAO");

    return 0;
  }