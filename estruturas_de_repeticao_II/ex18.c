#include <stdio.h>

int main ()
{

    int n,teste, div,
    ehdivisivel  =  0;

    scanf("%d", &n);

    for (teste  = 1; ehdivisivel == 0;  teste++) // Controla o num atual
    {
        ehdivisivel  =  1;
        for(div = 2; div <= n; div++) // Controla os divisores
        {

            if  (teste % div  != 0) // Não divisivel
                ehdivisivel = 0;
        }
    }

    if (ehdivisivel)
    printf ("%d", teste); // Imprime o num divisivel entre 1 e n

    return 0;
}
