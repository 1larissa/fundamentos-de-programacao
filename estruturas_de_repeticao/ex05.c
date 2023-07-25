#include <stdio.h>

int main () 
{ 
    int i, x;
    int media = 0, qtde_x = 0;

    printf("Insira dez numeros para calcular a media:");
    //calcula a media com for
    i = 0;
    while (i < 10)
    {
        scanf("%d", &x);
        if (x <= 20)
        {
            media += x;
            qtde_x ++;
        }
        i++;
    }
    media /= qtde_x;
    printf("(Com while) A media eh: %d", media);

    printf("\n");
    
    //calcula a media com for
    media = 0;
    qtde_x = 0;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &x);
        if (x <= 20)
        {
            media += x;
            qtde_x ++;
        }
    }

    media /= qtde_x;
    printf("(Com for) A media eh: %d", media);

    return 0;
}   