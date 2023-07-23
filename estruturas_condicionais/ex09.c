#include <stdio.h>

int main ()
{
    float x, y;
    printf("Digite as coordenadas: (x y)\n");
    scanf("%f %f", &x, &y);

    if (x > 0)
    {
        if (y > 0)
            printf("Q1");
        else if (y < 0)
            printf("Q4");
        else //y=0
            printf("Eixo x ");
    }
    else if (x < 0)
    {
        if (y > 0)
            printf("Q2");
        else if (y < 0)
            printf("Q3");
        else //y=0
            printf("Eixo x");
    }
    else //x=0
    {
        if (y == 0)
            printf("Origem");
        else // y!=0
            printf("Eixo y");
    }
    return 0;
}
