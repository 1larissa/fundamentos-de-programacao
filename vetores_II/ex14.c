#include<stdio.h>

int tamMaiorSeqNDec (int* val, int n, int* inicio, int* fim)
{
    int i, tam_maior_seq = 1, tam_seq_atual;

    // Percorre o vetor até o penultimo elemento
    tam_seq_atual = 1;
    for (i = 0; i < n-1; i++)
    {


        // Compara com um elemento com o proximo
        if(val[i] <= val[i+1]) // Se for uma sequencia nao decrescente (crescente ou igual)
        {
            // Se for o inicio da sequencia salva o primeiro valor
            if (tam_seq_atual == 1)
                *inicio = val[i];
            tam_seq_atual++;
            if(tam_seq_atual > tam_maior_seq)
            { 
                tam_maior_seq = tam_seq_atual;
                *fim = val[i+1];
            }
        }
        else // Reseta a contagem e salva o ultimo valor
        {
            tam_seq_atual = 1; 
        }
    }
    //Comparo o ultimo elemento com o anterior
    if (val[n-1] >= val[n-2])
    {
            tam_seq_atual++;
            if(tam_seq_atual > tam_maior_seq)
            tam_maior_seq = tam_seq_atual;
            *fim = val[n-1];
    }
    
    return(tam_maior_seq);
}

/*---MAIN PARA TESTE DA FUNCAO---
int main()
{
    int pri, ult, resposta,
        v1[12] = {1, 5, 6, 4, 9, 13, 13, 13, 55, 54, 40, 28};

    resposta = tamMaiorSeqNDec(v1, 12, &pri, &ult);
    printf("tam maior seq: %d, primeiro: %d, ultimo: %d", resposta, pri, ult);

    return 0;
}
*/
