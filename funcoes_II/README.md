# Lista de exercícios (Funções - Parte 2)

1. Escreva um programa que contenha 1 variável do tipo int e um ponteiro para esta variável. O programa deve atribuir um valor à variável e imprimir, nesta ordem:<br>
a) O valor da variável.<br>
b) O endereço da variável.<br>
c) O endereço apontado pelo ponteiro.<br>
d) O valor apontado pelo ponteiro.<br>
e) O endereço do ponteiro.<br>
Dica: use a sequência de escape %p para imprimir endereços.<br>

2. Faça uma função que receba dois números inteiros a e b, em seguida, decremente o primeiro e incremente o segundo, Usando os operadores ++ e --. No exercício, a e b devem ser passados por referência. Teste a sua função, invocando-a! O protótipo da função deve ser:<br>
void incDec (int *a, int *b);<br>

3. Faça uma função que leia n valores do tipo float do teclado e retorne o menor e o maior valor, assim como a média de todos os valores lidos. A função deve receber o valor de n como parâmetro, e retornar o menor e o maior valor através de parâmetros de saída, passados por referência. Já a média deve ser retornada normalmente pela função.<br>

4. Desenvolva uma função que recebe um número de segundos e converte para o tempo correspondente no formato de horas, minutos e segundos. Por exemplo, 10000 segundos corresponde a 2 horas, 46 minutos e 40 segundos. O protótipo da função deve ser:<br>
void segundosParaHMS (int total_segundos, int *h, int *m, int *s);<br>
Inclua na sua resposta uma função main simples, que invoque a função acima e mostre os valores retornados, no formato hh:mm:ss.<br>

5. Suponha a seguinte função, a qual retorna o primeiro e o último dígito de um número:<br>

```C
void removeExtremos (int *n, int *pri, int *ult)
{
    int tn, pot = 1;
    tn = *n;
    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }
    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}
```

Escreva um programa que utilize esta função para determinar se um dado inteiro positivo n é um número palíndromo (i.e. se pode ser lido igualmente da esquerda para a direita e da direita para a esquerda). Suponha que n não contém o dígito 0. Atenção: você não deve modicar a função dada no enunciado! <br>
Apenas invoque-a de forma adequada. (E também ignore o fato de que usar uma função assim não é a forma mais eficiente de testar se um número é palíndromo, se você se lembra!)<br>

6. Dizemos que uma sequência de n inteiros positivos é k-alternante se for composta alternadamente por segmentos de números pares de tamanho k e segmentos de números ímpares de tamanho k. Exemplos:<br>
<br>
A sequência 1 3 6 8 9 11 2 4 1 7 6 8 é 2-alternante.<br>
A sequência 2 1 4 7 8 9 12 é 1-alternante.<br>
A sequência 4 2 3 1 6 4 2 9 3 não é alternante.<br>
A sequência 1 3 5 é 3-alternante.<br>
<br>
Escreva uma função que recebe como parâmetro um valor n, e lê (através da função scanf) até n números inteiros, verificando se a sequência dada é k-alternante. Você pode considerar que o n dado é maior que 1. A função deve retornar 1 caso a função seja k-alternante, e 0 do contrário; e deve
retornar imediatamente, sem ler os n valores, caso detecte que a sequência não é k-alternante. Adicionalmente, caso ela seja k-alternante, o valor encontrado para k deve ser inserido em uma variável passada por referência à função.<br>