# Lista de exercícios (Entrada e saída de dados)

1. Qual será a saída mostrada pelo programa abaixo? (Importante: descubra somente analisando o código, só execute o programa para conferir o resultado.)
```C
#include <stdio.h>
int main ()
{
    int foo = 5, bar = 2;
    float foobar = 8.0;
    printf ("%d\n", foo + 3 * bar);
    printf ("%d\n", (foo + 3) * bar);
    printf ("%d\n", (foo * bar) / 8);
    printf ("%f\n", (foo * bar) / foobar);
    printf ("%d\n", foo % 3);
    printf ("%d\n", foo % bar);
    printf ("%d %d\n", foo * -1, -foo);
    printf ("%f\n", foo + 0.1);
    printf ("%d\n", foo / bar * bar);
    return 0;
}
```
2. Escreva um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio, r. A fórmula para calcular o volume é: (4/3)·π·r3. Para obter o valor de π, você pode utilizar um valor chamado M_PI, que está declarado no arquivo math.h. Por exemplo, para r = 3, o volume é 113.097336, e para r = 15, o volume é 14137.166941.

3. Qual será a saída mostrada pelo programa abaixo? (Importante: descubra somente analisando o código, só execute o programa para conferir o resultado.)
```C
#include <stdio.h>
int main ()
{
    int foo = 10, bar = 5;
    printf ("%d\n", foo + 10);
    printf ("%d\n", foo + 10);
    printf ("%d\n", foo + 10);
    bar = foo + 1;
    printf ("%d\n", foo);
    printf ("%d\n", bar);
    printf ("%d\n", foo+bar);
    foo = foo + 2;
    printf ("%d\n", foo);
    return 0;
}
```

4. Escreva um programa em C que recebe 5 números reais, lidos usando a função scanf, e calcule e mostre a média dos 2 primeiros números, dos 3 primeiros números, dos 4 primeiros números, e dos 5 números. Por exemplo, se os números forem 1, 2, 3, 4 e 5, as médias serão:<br />
1º e 2º – 1.5<br />
1º a 3º – 2<br />
1º a 4º – 2.5<br />
1º a 5º – 3<br />
Importante: o programa deve usar 5 variáveis para os números, e a linha de código para apresentar todas as médias deve ser sempre:<br />
printf ("%f\n", media);<br />
, onde 'media' é uma única variável que deve ser reaproveitada para todas as médias.

5. Escreva um programa que converta um dado número de segundos em dias, horas, minutos esegundos. Por exemplo, 7322 segundos correspondem a 0 dia, 2 horas, 2 minutos e 2 segundos.

6. Todas as linhas do programa abaixo após a declaração das variáveis e antes do return possuem um (e somente um) erro no uso da linguagem C (ou seja, não são erros de lógica). Quais são os erros? Dica: para começar, tente identificar os erros mais óbvios apenas analisando o código, mas se tiver dúvidas quanto a alguma estrutura, você pode criar um pequeno programa apenas para  está-la. O erro da última linha NÃO foi mencionado em aula, você vai precisar testar e pesquisar para descobrir o problema!

```C
#include <stdio.h>
int main ()
{
    float x1 = 5.0, x2 = 2.0;
    int x3;
    printf ("%f\n", x1 % x2);
    printf ("%f\n", &x1);
    x1 = x2
    printf ("%d\n", x3);
    X2 = 10;
    x1 + 10.0;
    x3 = 039;
    return 0;
}
```

7. Quais os 5 erros no programa abaixo? Atenção: eles podem ser de compilação ou de execução!

```C
# include < stdio .h >
int main ()
{
    int idade , matricula , cod ;
    float peso ;
    scanf ( "% d " , cod ) ;
    scanf ( "% d % f " , & peso , & idade ) ;
    scanf ( "% d " , & Matricula ) ;
    printf ( "% d " , & cod ) ;

    return 0;
}
```

8. Escreva um programa em linguagem C que mostre o resultado de N^3, para um N inteiro qualquer, recebendo o valor de N usando a função scanf.