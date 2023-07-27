# Lista de exercícios (Estrutura de repetição - Parte 2)

1. O programa abaixo deveria calcular o resultado da exponenciação de uma base por um expoente, ambos inteiros e positivos.
```C
#include <stdio.h>
int main ()
{
    unsigned int base, expoente;
    unsigned long long total = 0;

    scanf ("%u", &base);
    scanf ("%u", &expoente);

    while (expoente > 0)
    {
        base *= base;
        expoente--;
    }

    printf ("%llu\n", total);
    return (0);
}
```
Este programa não funciona. O resultado impresso para qualquer entrada é 0.<br>
O que precisa ser feito para que o programa funcione corretamente? Você deve modificar apenas 2 linhas do código.<br>
Dica: os erros são de lógica, e não envolvem a sintaxe da linguagem C nem a formatação dos dados de E/S.<br>

2. Zeca está organizando um bolão de futebol. Segundo suas regras, os apostadores informam o placar do jogo e ganham 10 pontos se acertarem o vencedor ou se foi empate, e ganham mais 5 pontos para o placar de cada time que acertarem. A tabela a seguir dá um exemplo, considerando que
o placar real foi 3x2: <br>
![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/897dfd90-a926-4938-8d17-503672850795)<br>
Escreva um programa que requisita do usuário o placar apostado e depois o placar do jogo e informa quantos pontos o apostador fez.

3. (Adaptado da OBI 2003)<br>
Os alunos do último ano resolveram organizar uma quermesse para arrecadar fundos para a festa de formatura. A festa prometia ser um sucesso, pois o pai de um dos formandos, Teófilo, dono de uma loja de informática, decidiu doar um computador para ser sorteado entre os que comparecessem. Os
alunos prepararam barracas de quentão, pipoca, doces, ensaiaram a quadrilha e colocaram à venda ingressos numerados sequencialmente a partir de 1.<br>
O número do ingresso serviria para o sorteio do computador. Ficou acertado que Teófilo decidiria o método de sorteio; em princípio o sorteio seria, claro, computadorizado. O local escolhido para a festa foi o ginásio da escola. A entrada dos participantes foi pela porta principal, que possui uma roleta, onde passa uma pessoa por vez. Na entrada, um funcionário inseriu, em uma lista no computador da escola, o número do ingresso, na ordem de chegada dos participantes. Depois da entrada de todos os participantes, Teófilo começou a trabalhar no computador para preparar o sorteio. <br>
Verificando a lista de presentes, notou uma característica notável: havia apenas um caso, em toda a lista, em que o participante que possuía o ingresso numerado com i havia sido a i-ésima pessoa a entrar no ginásio. Teófilo ficou tão encantado com a coincidência que decidiu que o sorteio não seria necessário: esta pessoa seria o ganhador do computador.<br>
Escreva um programa que recebe como entrada um número inteiro positivo N que indica o número de participantes da festa. Em seguida são fornecidos N valores, correspondendo aos números dos ingressos das pessoas que participaram da festa. Suponha que, para cada conjunto de teste da entrada, haverá um único ganhador. O programa deve então informar qual foi o número do ingresso do ganhador, determinado pelo seu programa.<br>

Exemplos:<br>

Entrada: <br>
4<br>
4 5 3 1<br>
<br>
Saída:<br>
3<br>
<br>
Entrada:<br>
10<br>
9 8 7 6 1 4 3 2 12 10<br>
<br>
Saída:<br>
10<br>

4. (Adaptado da OBI 2012)<br>
Leonardo é um corredor profissional que participa de diversos campeonatos de atletismo pelo mundo. O tamanho das pistas ao redor do mundo não é padronizado. Por isso, Leonardo, que treina em um clube que possui uma pista circular, resolveu fixar seu treinamento em C metros, ao invés de um
número fixo de voltas na pista. Após cada treinamento, Leonardo deve tomar meio litro de água antes de fazer qualquer esforço, e por isso quer deixar sua garrafa de água exatamente no ponto da pista onde ele termina o seu treinamento.<br>
Sabendo o comprimento da pista de corrida que Leonardo pretende treinar, ele resolveu pedir sua ajuda para calcular o local do ponto de término do treinamento. O ponto de término é o local da pista onde ele termina o percurso de C metros considerando que ele parte do ponto de partida e se movimenta sempre na mesma direção. O ponto de término é dado pelo número de metros entre o ponto de partida e o local onde Leonardo termina seu treinamento, contados na direção do percurso.Leonardo quer deixar sua garrafa de água neste ponto.<br>
Por exemplo, se a pista tem 12 m e Leonardo fixou seu treinamento em 22 m, o ponto de término é 10. Já se a pista tiver 100 m e Leonardo correr 7000 m, o ponto de término é igual ao ponto de partida: 0. E se a pista tiver 76 m e Leonardo correr 918 m, o ponto de término é 6.<br>
Escreva um programa que recebe como entradas o número C de metros que Leonardo pretende correr e o comprimento em metros da pista circular. O programa deve mostrar um número, que indica o ponto de término do treinamento de Leonardo.

5. Em 1937, o matemático Lothar Collatz propôs a seguinte conjetura, ainda não provada: dado um número natural arbitrário a0, a sequência gerada por: <br>
ai = ai-1/2, se ai-1 for par ou <br>
ai = 3·ai-1+1, se ai-1 for ímpar, <br>
<br>
em que ai-1 e ai representam o último elemento produzido para a sequência e o próximo valor a ser gerado, respectivamente, sempre chegará ao valor 1, independente do valor inicial escolhido para a0.<br>
<br>
Por exemplo, a sequência de Collatz para a0 = 7 é: 7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2 e 1.<br>
<br>
Escreva um programa que leia o primeiro elemento de uma sequência de Collatz e imprima na tela a sequência a partir do elemento dado, até que se alcance o valor 1. O programa deve também mostrar o número de elementos da sequência gerada. Se o programa receber o valor 7, por exemplo, deve
mostrar os 17 elementos listados acima, e dizer que gerou 17 elementos.

6. (Adaptado da OBI 2015)<br>
Alice e Bia criaram uma página na Internet com informações sobre o Macaco-prego-de-peito-amarelo, uma espécie em extinção. A página mostra como todos podem ajudar a manter o habitat natural para evitar que a espécie seja extinta.<br>
Uma empresa gostou tanto da iniciativa de Alice e Bia que prometeu doar um prêmio para que as duas amigas possam realizar outras iniciativas semelhantes. A empresa decidiu que o prêmio seria dado quando a soma do número de acessos à página chegasse a 1 milhão.<br>
Dada a lista de acessos diários que ocorreram à página de Alice e Bia, escreva um programa para determinar quantos dias foram necessários para a soma dos acessos chegar a 1 milhão e as amigasganharem o prêmio. O programa recebe como entrada um número inteiro N, que indica o número de
dias que a lista contém. Ele deve então ler N valores, correspondentes ao número de acessos de cada dia: o primeiro número dado indica o número de acessos no primeiro dia, o segundo número dado indica o número de acessos no segundo dia, e assim por diante. O programa deve então mostrar na
saída o número de dias que foram necessários para a soma dos acessos à página de Alice e Bia chegar a 1.000.000. Se a meta não for atingida, o programa deve mostrar o valor de erro -1.<br>
![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/72ed42b7-8808-47c6-9ce9-6fcb79fa34cf)
<br>

7. A sequência de Fibonacci é uma sequência de números naturais na qual os primeiros termos são 0 e 1, e cada termo subsequente é a soma dos dois termos anteriores. Desta forma, o terceiro termo é 0+1=1, o quarto termo é 1+1=2, o quinto termo é 1+2=3, o sexto termo é 2+3=5 e assim por diante. Os 10 primeiros números da sequência são:<br>
0, 1, 1, 2, 3, 5, 8, 13, 21, 34<br>
Os números da sequência de Fibonacci são usados em certos algoritmos para codificação, compressão e ordenamento de dados. Eles também podem ser usados em computação gráfica, na geração de transições suaves de cores e de objetos com aspecto natural (por exemplo, em animações 
cinematográficas).<br>
Escreva um programa que mostra os n primeiros números de Fibonacci, com n dado pelo usuário. Pressuponha que n será sempre maior ou igual a 3, mas nunca grande o suficiente para causar overflow em variáveis do tipo int.

8. (Adaptado da OBI 2017)<br>
Um sistema de informações geográficas computadorizado está representando o perfil de uma montanha através de uma sequência de números inteiros, na qual não há dois números consecutivos iguais, como ilustrado na figura abaixo para três montanhas. Os números representam a altura da montanha ao longo de uma certa direção.<br>
![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/0a3e4086-312f-4430-b3a6-4e2062c5bb55)
<br>
O gerente do sistema de informações geográficas pesquisou e encontrou uma maneira de identificar se uma sequência de números inteiros representa uma montanha com mais de um pico, ou com apenas um pico. Ele observou que, como não há números consecutivos iguais, se houver três números consecutivos na sequência, tal que o número do meio é menor do que os outros dois números, então a montanha tem mais de um pico. Caso contrário, a montanha tem apenas um pico.<br>
De forma mais rigorosa, se a sequência é A = [A1, A2, A3, ..., AN-2, A N-1, AN], ele quer saber se há uma posição i, para 2 ≤ i ≤ N-1, tal que Ai-1 > Ai e Ai < Ai+1. Para ajudar o gerente, seu programa deve determinar, dada a sequência de números inteiros representando a montanha, se ela tem mais de um pico, ou se tem um pico apenas. O programa recebe como entrada o tamanho N da sequência, seguido por N inteiros, representando a sequência de alturas da montanha em cada ponto. O programa deve indicar então se o programa tem apenas um pico (S) ou não (N).<br>
![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/5b895e3f-7521-4ce4-938d-fa61087a8a06)
<br>

9. A série harmônica é definida por:<br>
![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/3817c059-bcb2-48e1-907c-521565c0a04b)
<br>
Escreva um programa que calcule a série harmônica. O programa deve mostrar, a cada termo calculado, o valor do termo e o valor total do somatório até aquele momento. Os termos devem parar de ser calculados quando o seu valor for inferior a uma constante MIN_TERMO, que deve ser definida como uma macro. Por exemplo, se MIN_TERMO for 0.2, os 5 primeiros termos da série devem ser calculados, e o programa deve mostrar na tela a seguinte saída (sem nos preocuparmos com o número de casas decimais):<br>
<br>
1.0000 &emsp; 1.0000<br>
0.5000 &emsp; 1.5000<br>
0.3333 &emsp; 1.8333<br>
0.2500 &emsp; 2.0833<br>
0.2000 &emsp; 2.2833<br>
<br>

10. Escreva um programa que recebe um número inteiro positivo digitado pelo usuário e verifica e informa se ele é um número palíndromo ou não. Um número é palíndromo se puder ser lido igualmente na ordem normal e de trás para a frente. Alguns exemplos de números palíndromos:<br>
12321, 123321, 101, 2, 9, 99.

11. (Adaptado da OBI 2012)<br>
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores inteiros. O número de pontos do  participante é o tamanho da maior sequência de valores consecutivos iguais. Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores:<br>
<br>
30 30 30 30 40 40 40 40 40 30 30<br>
<br>
Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos. Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante. A entrada é um número inteiro N, que representa o número de valores sorteados. Depois, o programa deve ler N valores inteiros, na ordem do sorteio. Note que os valores são simplesmente informados, não são sorteados pelo programa! O programa então deve mostrar o número de pontos do participante.<br>
![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/9ea00ea0-6d68-432d-96d9-64c6dc6361b0)
