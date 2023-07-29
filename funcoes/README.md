# Lista de exercícios (Funções)

1. Um ano é bissexto se for divisível por 400, ou se for divisível por 4 mas não por 100. Escreva uma função que retorna 1 se um ano dado é bissexto ou 0 do contrário. A função deve ter o seguinte protótipo:<br>
int ehBissexto (int ano);

2. Escreva uma função que recebe 4 números inteiros e diz se eles formam, na ordem dada, uma progressão aritmética. Em caso positivo, a função deve retornar a razão da PA, do contrário a função retorna 0. O protótipo da função deve ser:<br>
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
int arredonda (double x);

5.  Escreva uma função que retorna apenas a parte não-inteira de um número dado. <br>
Por exemplo, se a função receber o valor 1.43, deve retornar 0.43. O protótipo da função deve ser:<br>
double casasDecimais (double x);<br>

6. A sequência de Fibonacci é uma sequência de números naturais na qual os primeiros termos são 0 e 1, e cada termo subsequente é a soma dos dois termos anteriores. Desta forma, o terceiro termo é 0+1=1, o quarto termo é 1+1=2, o quinto termo é 1+2=3, o sexto termo é 2+3=5 e assim por
diante. Os 10 primeiros números da sequência são:<br>
<br>
0, 1, 1, 2, 3, 5, 8, 13, 21, 34<br>
<br>
Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro número da série de Fibonacci que é maior ou igual a n. Por exemplo, para n=7, a função retorna 8, pois 8 é o primeiro termo que pertence à sequência de Fibonacci que é maior ou igual a 7. Da mesma
forma, para n=15, a função retorna 21.<br>
<br>
int proxFibonacci (int n);<br>

7. Escreva uma função que receba uma base 'b' e um expoente 'e', e calcule o valor de 'b^e'. Considere que todos os valores envolvidos são inteiros positivos. O protótipo da função deve ser:<br>
unsigned long long potencia (unsigned int base, unsigned int expoente);<br>

8. Escreva uma função que recebe um número com uma quantidade arbitrária de dígitos, e retorna o número com os dígitos invertidos. Por exemplo, se a função receber o valor 1234, deve retornar 4321. Zeros à esquerda devem ser ignorados – portanto, se a função receber o valor 1400, deve retornar 41. O protótipo da função deve ser:<br>
unsigned int inverteNum (unsigned int n);<br>

9. Escreva uma função que recebe um caractere e retorna 1 se o caractere for uma vogal maiúscula, 2 se for uma vogal minúscula, 3 se for uma consoante maiúscula, 4 se for uma consoante minúscula, 5 se for um dígito, e 0 do contrário. O protótipo da função deve ser:<br>
<br>
int testaTipoChar (char c);<br>
<br>
Dica: observe atentamente como é a tabela ASCII. Você não precisa usar NENHUM valor dela, mas entender a forma como os caracteres estão dispostos pode ajudar.<br>  

10. Um número primo é aquele que só é divisível por 1 e por si mesmo. O programa abaixo deveria imprimir os 10 primeiros números primos, um por linha.<br>

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
apenas analisando o código! Não é preciso explicar o erro nem reescrever o programa, apenas entender quais são as correções necessárias. Você deve modificar apenas 2 linhas do código. Dica:os erros são de lógica, e não envolvem a sintaxe da linguagem C nem a formatação dos dados de E/S.<br>
<br>

11. Escreva uma função que recebe dois inteiros positivos a e b e retorna 1 se b corresponde aos últimos dígitos de a, ou 0 do contrário. <br>
Exemplo:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/3b342d2e-b978-4405-be39-cbe25eb22e58)
<br>
<br>
----------------------------------------------------------------------------------------------------------------------
O texto abaixo se refere às questões 12, 13, 14 e 15:<br>
Um amigo seu, dono de uma tecelagem, tem uma máquina muito antiga, que é usada para costurar padrões vermelhos e azuis em faixas de tecido com 6 cm de largura. Prestes a se desfazer da máquina, seu amigo lembrou-se que ela continha um antigo disquete de 3.5”. Com a ajuda de um velho computador, vocês conseguiram analisar o conteúdo do disquete, e para sua surpresa, ali estava a programação do padrão que a máquina deveria costurar – em uma versão interpretada da linguagem C! Este é o programa encontrado:<br>
<br>

```C
#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */
void main ()
{
    int i;
    /* Funciona até desligar ou o tecido acabar. */
    while (1)
    {
        for (i = 0; i < LARGURA_FAIXA; i++)
        {
            if (i == 1)
                pontoRolo1 ();
            else if (i == LARGURA_FAIXA-2)
                pontoRolo2 ();
            else
                moveAgulha ();
        }
        rolaTecido ();
    }
}
```
<br>
Analisando o código, você inferiu que o sistema tem algumas funções embutidas:<br>
- pontoRolo1: a máquina faz um ponto de 1cm usando a linha do rolo 1 (vermelha).<br>
- pontoRolo2: a máquina faz um ponto de 1cm usando a linha do rolo 2 (azul).<br>
- moveAgulha: a máquina move a agulha 1cm para baixo, sem dar ponto.<br>
- rolaTecido: a máquina leva a agulha novamente ao topo da faixa, sem dar ponto, e move a faixa de tecido 1 cm para a esquerda.<br>
<br>
O padrão desenhado por este código pode ser descrito da seguinte forma (v indica um ponto com a linha vermelha, a um ponto com a linha azul, (...) que o padrão se repete indefinidamente):<br>
<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/6c1f2c56-60ef-46d4-810e-5e1580e9243d)

<br>

12. Seu amigo resolveu que pode ser interessante, em vez de se desfazer da máquina, modificar a sua programação. Mas como você não vai ficar desperdiçando material, resolveu analisar o comportamento do código que já estava lá no seu computador. Isso gera um problema: como fazer um teste se o código tem funções embutidas da máquina?<br>
Seu primeiro objetivo é criar funções que possam simular no seu computador o comportamento da máquina. Para isso, você deve implementar “substitutas” para as funções pontoRolo1, pontoRolo2, moveAgulha, e rolaTecido. Você deve ser capaz de executar o programa original da máquina sem modificações, de forma que através das funções “substitutas” ele gere algo análogo ao padrão costurado.<br>
<br>

13. A pedido do seu amigo, reescreva o código da máquina para que ela costure o padrão abaixo:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/de051b7c-e869-4a77-addd-f74397aef39b)

<br>

14. Reescreva o código da máquina para que ela costure um padrão de triângulos intercalados, como mostrado abaixo:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/0fadf8ee-8f15-4605-9e82-5a691d7fcd35)

<br>

15. A prefeitura de Curitiba está desenvolvendo um projeto-piloto para avaliar o uso do transporte público e testar melhorias no sistema. Um sistema de visão computacional analisa periodicamente as imagens enviadas por câmeras instaladas em estações tubo, contando quantos passageiros aguardam um ônibus. O gráfico abaixo exemplifica a ocupação de uma estação durante um dia.<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/445521ba-a89b-4dc8-8d84-bbb9e5f10059)

<br>
A ideia do projeto é, com base em informações sobre a ocupação das estações, otimizar o uso da frota e estimular o uso do transporte público. Por exemplo, é possível avaliar o impacto de um aumento do número de ônibus em circulação, ou mesmo de uma mudança no preço da passagem.<br>
Como parte do seu trabalho no projeto, você deve criar um pequeno programa em C para identificar certos padrões de comportamento na ocupação de uma estação tubo, que servirão para análises futuras. Os valores de entrada se referem ao número de passageiros em uma estação. Um padrão pode ser identificado agrupando-se esses valores 3 a 3, na ordem em que são gerados, e observando o segundo valor do grupo. Os padrões que devem ser identificados são:<br>
<br>
- Pico: o valor é maior que ambos os vizinhos.<br>
- Vale: o valor é menor que ambos os vizinhos.<br>
- Subida: o valor é maior que o anterior, mas menor que o próximo.<br>
- Descida: o valor é menor que o anterior, mas maior que o próximo.<br>
<br>
Por exemplo, se a sequência de valores for 0, 5, 4, 3, 3, 1, 3, 3, 4, 6, temos:<br>
<br>
- Um pico no segundo valor (0, 5, 4).<br>
- Uma descida do terceiro valor (5, 4, 3).<br>
- Um vale no sexto valor (3, 1, 3).<br>
- Uma subida no nono valor (3, 4, 6).<br>
<br>
O número total de valores é arbitrário. Para fornecer os valores (coletados em tempo real), outra pessoa da equipe escreveu a função leProximoDado, que deve ser chamada pelo seu programa para ler cada valor. A cada chamada, a função retorna o próximo dado, ou -1 se não existirem mais dados disponíveis. O protótipo da função é o seguinte:<br>
int leProximoDado ();<br>
<br>
Para registrar os padrões, você deve usar a função registraPadrao:<br>
void registraPadrao (int posicao, int tipo);<br>
<br>
Essa função recebe como parâmetros a posição do valor na série e um valor que indica o tipo de padrão observado. Os tipos de padrão são identificados pelas macros PICO, VALE, SUBIDA e DESCIDA, que têm valores inteiros. No exemplo acima, a função registraPadrao seria chamada 4 vezes, sendo que na primeira chamada teria como parâmetros 2 e PICO, e na última chamada teria 9 e SUBIDA. Pressuponha que as duas funções, assim como as macros, já estão definidas. Ou seja, você deve escrever apenas a função main que recebe os dados e registra os padrões.<br>
Atenção: a função main não deve chamar as funções scanf e printf, ela deve usar as funções leProximoDado e registraPadrao. Você pode usar printf e scanf para simular o comportamento interno destas funções, já que não é possível criá-las como seriam na realidade.
Também não use vetores, matrizes ou outras estruturas de dados que não foram vistas em aula.

