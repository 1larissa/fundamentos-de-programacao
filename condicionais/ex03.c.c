#include <stdio.h>

int main ()
{
    int anoNasc, anoAtual, idade;

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &anoNasc);
    printf("Digite o ano atual: \n");
    scanf("%d", &anoAtual);
    idade = anoAtual-anoNasc;
    printf("A idade ao final do ano atual sera: %d\n", idade);


    // define classe eleitoral
    if(idade<16)
        printf("Nao eleitor\n");
    else if(idade<18)
        printf("Eleitor facultativo");
    else if(idade<65)
        printf("Eleitor obrigatorio");
    else
        printf("Eleitor facultativo");

    return 0;
}
