#include<stdio.h>

int main ()
{
    int i,
    v[10];

    for(i = 0; i < 10; i++)
    {
        v[i] = i;
        printf("v[%d] = %d\n", i, v[i]);
    }

    return 0;
}