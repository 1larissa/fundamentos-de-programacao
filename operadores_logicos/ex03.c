#include <stdio.h>

  int main () 
  {
    int a, b, c;
    printf("Digite 03 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b < c && a > c)
        printf ("A ordem crescente eh %d %d %d", c, b, a);
    else if (a > b && b > c && a > c)
        printf ("A ordem crescente eh %d %d %d", c, b, a);
    else if (a < b && b > c && a > c)
        printf ("A ordem crescente eh %d %d %d", c, a, b);
    else if (a < b && b > c && a < c)
        printf ("A ordem crescente eh %d %d %d", a, c, b);
    else if (a > b && b < c && c > a)
        printf ("A ordem crescente eh %d %d %d", b, a, c);
    else if (a < b && b < c && c > a)
        printf ("A ordem crescente eh %d %d %d", a, b, c);

    return 0;
  }