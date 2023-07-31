#include<stdio.h>
#define N_MAX 100

int main ()
{
    int n, i, media_secoes, total_territorio, secao_div,
    secoes[N_MAX]; 
    printf("Quantas secoes? ");
    scanf("%d", &n);

    // Le comprimento das secoes e soma para a media final
    media_secoes = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &secoes[i]);
        media_secoes += secoes[i];
    }
    media_secoes /= 2;

    // Verifica qual secao sera feita a divisao de territorio
    total_territorio = 0;
    for (i = 0; total_territorio < media_secoes; i++)
    {
        total_territorio += secoes[i];
        secao_div = i;
    }
    printf("%d", secao_div+1);
    return 0;
}