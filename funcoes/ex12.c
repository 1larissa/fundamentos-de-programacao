#include <stdio.h>
#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */
#define COMPRIMENTO_FAIXA 10 /* Largura da faixa de tecido, em cm. */

void pontoRolo1 ()
{
    // A máquina faz um ponto de 1cm usando a linha do rolo 1 (vermelha)
    printf("v");
}
void pontoRolo2 ()
{
    // A máquina faz um ponto de 1cm usando a linha do rolo 2 (azul)
    printf("a");
}
void moveAgulha()
{
    // A máquina move a agulha 1cm para baixo, sem dar ponto
    printf("-");
}
void rolaTecido()
{
    // A máquina leva a agulha novamente ao topo da faixa, sem dar ponto, e move a faixa de tecido 1 cm para a esquerda.<br>
    printf("\n");
}

int main ()
{
    int i, j;
    /* Funciona até desligar ou o tecido acabar. */

    for (i = 0; i < LARGURA_FAIXA; i++)
    {
        for(j = 0; j < COMPRIMENTO_FAIXA; j++)
        {
            if (i == 1)
                pontoRolo1 ();
            else if (i == LARGURA_FAIXA-2)
                pontoRolo2 ();
            else
                moveAgulha ();
        }
        rolaTecido ();

    }
    return 0;
}