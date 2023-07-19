  #include <stdio.h>

  int main () 
  {
    int ano_nasc, ano_atual, ano_inicio_contr, idade, total_contr;

    printf ("Digite o ano de nascimento do empregado?: ");
    scanf("%d", &ano_nasc);
    printf ("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf ("Digite o ano em que o empregado comecou a contribuir com o INSS: ");
    scanf("%d", &ano_inicio_contr);

    idade = ano_atual - ano_nasc;
    printf("O empregado tera %d anos ao final de %d.\n", idade, ano_atual);

    // Calcula o tempo de contribuicao
    total_contr = ano_atual - ano_inicio_contr;
    printf ("O empregado contribuiu por %d anos.\n", total_contr);

    // Verifica se pode se aposentar até o final do ano
    if (idade >= 65 || (idade >= 60 && total_contr >= 25) || total_contr >= 30)
        printf("Esse empregado podera se aposentar ate o final do ano.\n");
    else
        printf("Esse empregado NAO podera se aposentar ate o final do ano.\n");

    return 0;
  }