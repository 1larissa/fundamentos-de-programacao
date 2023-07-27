#include <stdio.h>

int main () 
{
    int x;

    scanf("%d", &x);
    while(x >=10 && x <= 20)
    {
        printf("ECO %d", x);
        scanf("%d", &x);
    }
    return 0;
}

