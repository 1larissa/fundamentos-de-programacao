#include<stdio.h>

int ehParDeFoolano (unsigned int n1, unsigned int n2)
{
    int i, dig_n1, dig_n2,
    eh_par = 1, // Flag
    v1[10], v2[10]; // Vetores contadores

    // Zero todos os elementos dos dois vetores
    for (i = 0; i < 10; i++)
    {
        v1[i] = 0;
        v2[i] = 0;
    }
    // Verifico cada elemento de n1 e contabilizo no v1
    for (i = 0; n1 > 0; i++)
    {
        dig_n1 = n1 % 10;
        v1[dig_n1]++;
        n1 /= 10;
    }
    // Verifico cada elemento de n2 e contabilizo no v2
    for (i = 0; n2 > 0; i++)
    {
        dig_n2 = n2 % 10;
        v2[dig_n2]++;
        n2 /= 10;
    }

    /* Imprimo o vetor contador v1
    for (i = 0; i < 10; i++)
    {
        printf("v1[%d] = %d\n", i, v1[i]);
    }
    printf("\n");
    //Imprimo o vetor contador v2
    for (i = 0; i < 10; i++)
    {
        printf("v2[%d] = %d\n", i, v2[i]);
    }
    */
   
    // Compara e verifica se eh par foolano
    for (i = 0; i < 10; i++)
    {
        if(v1[i] != v2[i]) // Não eh par foolano
        {
            eh_par = 0;
            return 0;
        }
    }
    return 1;
}

//---MAIN PARA TESTE DA FUNÇÃO---
int main ()
{
    unsigned int  x1, x2, resposta;
    scanf("%d %d", &x1, &x2);
    resposta = ehParDeFoolano (x1, x2);
    printf("%d", resposta);
    return 0;
}
