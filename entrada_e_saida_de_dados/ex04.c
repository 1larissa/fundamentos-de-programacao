#include <stdio.h>

int main ()
{

    float a, b, c, d, e;
    float media;

    scanf ("%f %f %f %f %f", &a, &b, &c, &d, &e);

    media = (a + b) / 2.0;
    printf ("%f\n", media);

    media = (a + b + c) / 3.0;
    printf ("%f\n", media);

    media = (a + b + c + d) / 4.0;
    printf ("%f\n", media);

    media = (a + b + c + d + e) / 5.0;
    printf ("%f\n", media);

    return 0;
}
