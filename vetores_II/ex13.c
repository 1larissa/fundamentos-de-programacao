#include<stdio.h>
#define BUFLEN 14

void tiraRepeticao(int* input, int* output)
{
    int i, j, posicao = 0,
        n_salvo = 0; // Flag

    // Começa colocando 7 todos os elementos indeterminados do output
    for (i = 0; i < BUFLEN; i++)
        output[i] = 7;

    // Salvo o elemento do input no output se nao foi salvo antes
    // Para cada input..
    for (i = 0; i < BUFLEN; i++)
    {
        // Verifica se já não foi salvo no output
        for (j = 0; j < BUFLEN && !n_salvo; j++)
            if(input[i] == output[j])
                n_salvo = 1;

        // Salva no output
        if(!n_salvo)
        {
            output[posicao] = input[i];
            posicao++; // Aumenta a posicao para salvar os demais elementos do output
        }

        n_salvo = 0; // Reseta a flag
    }
}


/*---MAIN PARA TESTE DA FUNCAO---
int main()
{
    int i,
        v1[BUFLEN] = {0, 1, 2, 3, 4, 3, 2, 4, 5, 3, 2, 6, 1, 0},
        v2[BUFLEN];
    tiraRepeticao(v1, v2);
    for (i = 0; i < BUFLEN; i++)
        printf("v2[%d] = %d\n", i, v2[i]);
    return 0;
}
*/
