#include <stdio.h>

int main () 
{    
    int n, i,
        total_fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = n; i > 1; i--)
    {
        total_fat *= i;
    }

    printf("!%d = %d", n, total_fat);
    return 0;
}