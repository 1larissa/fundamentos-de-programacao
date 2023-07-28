# Lista de exercícios (Funções)

1. Um ano é bissexto se for divisível por 400, ou se for divisível por 4 mas não por 100. Escreva uma função que retorna 1 se um ano dado é bissexto ou 0 do contrário. A função deve ter o seguinte protótipo:<br>
<br>
int ehBissexto (int ano);

2. Escreva uma função que recebe 4 números inteiros e diz se eles formam, na ordem dada, uma progressão aritmética. Em caso positivo, a função deve retornar a razão da PA, do contrário a função retorna 0. O protótipo da função deve ser:<br>
<br>
int ehProgressaoAritmetica (int n1, int n2, int n3, int n4);

3. Qual a saída do programa abaixo? Responda somente analisando o código, só execute-o para conferir a sua resposta.
```C
#include <stdio.h>
int func (int x)
{
    int i, n;
    n = 0;
    for (i = 1; i < x; i++)
        n += i;
    return (n);
}
int main ()
{
    int i, n;
    for (i = 1; i <= 4; i++)
    {
        n = 3*i;
        printf ("%d\n", func (n));
    }
    return (0);
}
```

4. Escreva uma função que arredonda um valor dado. O número deve ser arredondado para o inteiro mais próximo. Se o número for equidistante de dois inteiros, deve ser arredondado para o valor de maior magnitude. Ou seja, 1.5 é arredondado para 2, e -1.5 é arredondado para -2. O protótipo da função deve ser:<br>
<br>
int arredonda (double x);

5.  Escreva uma função que retorna apenas a parte não-inteira de um número dado. <br>
Por exemplo, se a função receber o valor 1.43, deve retornar 0.43. O protótipo da função deve ser:<br>
<br>
double casasDecimais (double x);

6. A sequência de Fibonacci é uma sequência de números naturais na qual os primeiros termos são 0 e 1, e cada termo subsequente é a soma dos dois termos anteriores. Desta forma, o terceiro termo é 0+1=1, o quarto termo é 1+1=2, o quinto termo é 1+2=3, o sexto termo é 2+3=5 e assim por
diante. Os 10 primeiros números da sequência são:<br>
<br>
0, 1, 1, 2, 3, 5, 8, 13, 21, 34<br>
<br>
Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro número da série de Fibonacci que é maior ou igual a n. Por exemplo, para n=7, a função retorna 8, pois 8 é o primeiro termo que pertence à sequência de Fibonacci que é maior ou igual a 7. Da mesma
forma, para n=15, a função retorna 21.<br>
<br>
int proxFibonacci (int n);

7. Escreva uma função que receba uma base 'b' e um expoente 'e', e calcule o valor de 'b^e'. Considere que todos os valores envolvidos são inteiros positivos. O protótipo da função deve ser:<br>
<br>
unsigned long long potencia (unsigned int base, unsigned int expoente);

8. Escreva uma função que recebe um número com uma quantidade arbitrária de dígitos, e retorna o número com os dígitos invertidos. Por exemplo, se a função receber o valor 1234, deve retornar 4321. Zeros à esquerda devem ser ignorados – portanto, se a função receber o valor 1400, deve retornar 41. O protótipo da função deve ser:<br>
<br>
unsigned int inverteNum (unsigned int n);

9. Escreva uma função que recebe um caractere e retorna 1 se o caractere for uma vogal maiúscula, 2 se for uma vogal minúscula, 3 se for uma consoante maiúscula, 4 se for uma consoante minúscula, 5 se for um dígito, e 0 do contrário. O protótipo da função deve ser:<br>
<br>
int testaTipoChar (char c);<br>
<br>
Dica: observe atentamente como é a tabela ASCII. Você não precisa usar NENHUM valor dela, mas entender a forma como os caracteres estão dispostos pode ajudar.

10. 1. Um número primo é aquele que só é divisível por 1 e por si mesmo. O programa abaixo deveria imprimir os 10 primeiros números primos, um por linha.<br>

```C
#include <stdio.h>
#define N_TERMOS 10
int ehPrimo (int numero)
{
    int i;
    if (numero == 2)
        return (1);

    if (!(numero % 2))
        return (0);
    for (i = 3; i <= numero; i += 2)
        if (!(numero % i))
            return (0);
    return (1);
}

int main ()
{
    int n_encontrados;
    int n = 2;

    while (n_encontrados < N_TERMOS)
    {
        if (ehPrimo (n))
        {
            printf ("%d\n", n);
            n_encontrados++;
        }
        n++;
    }

    return (0);
}
```
<br>
Este programa não funciona. Às vezes, ele imprime o número 2, e depois “trava”. Outras vezes, ele simplesmente termina sem imprimir qualquer coisa. Descreva o que precisa ser feito para que o programa funcione corretamente. Não copie e execute o programa, você deve chegar à resposta
apenas analisando o código! Não é preciso explicar o erro nem reescrever o programa, apenas entender quais são as correções necessárias. Você deve modificar apenas 2 linhas do código. Dica:os erros são de lógica, e não envolvem a sintaxe da linguagem C nem a formatação dos dados de E/S.

11. Escreva uma função que recebe dois inteiros positivos a e b e retorna 1 se b corresponde aos últimos dígitos de a, ou 0 do contrário. <br>
Exemplo:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/3b342d2e-b978-4405-be39-cbe25eb22e58)
<br>

