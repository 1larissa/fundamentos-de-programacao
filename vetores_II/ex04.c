#include<stdio.h>
#define MAX_QUESTOES 80

int main () {

   int qtde_questoes, acertos, i;

    printf ("Quantas questoes na prova? ");
    scanf("%d", &qtde_questoes);
    char gabarito[MAX_QUESTOES], // Gabarito de respostas oficial
        aluno[MAX_QUESTOES]; // Gabarito de respostas do aluno

    // Lê o gabarito oficial
    printf ("Gabarito oficial:\n");
    for(i = 0; i < qtde_questoes; i++)
        scanf("%s", &gabarito[i]);

    // Lê o gabarito do aluno
    printf ("Gabarito do aluno: \n");
    acertos = 0;
    for(i = 0; i < qtde_questoes; i++)
    {
       scanf("%s", &aluno[i]);
       // Computa os acertos
       if(gabarito [i] == aluno [i])
          acertos++;
    }
    printf("%d", acertos);

    return 0;
}