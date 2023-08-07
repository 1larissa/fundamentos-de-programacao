# Lista de exercícios (Strings)

1. Escreva uma função que recebe um vetor de int de tamanho n e um número como parâmetros, e retorna a posição do número dado no vetor, ou -1 se o número não estiver presente. Se o número aparecer mais de uma vez no vetor, a função pode retornar a posição de qualquer uma das ocorrências. O protótipo da função deve ser:<br>
int buscaVetor (int* vetor, int n, int procurado);<br>

2. Escreva uma função que recebe uma string e retorna 1 se ela contém um palíndromo, ou 0 do contrário. Um palíndromo é uma sequência que pode ser lida igualmente da esquerda para a direita ou da direita para esquerda. Exemplos de palíndromos: “ovo”, “esse”, “eva asse essa ave”. O protótipo da função deve ser:<br>
int ehPalindromo (char* s);<br>

3. Escreva uma função que retorna 1 se os valores em um vetor de inteiros dado estiverem em ordem estritamente crescente, ou 0 do contrário. Procure fazer a função retornar tão logo quanto possível, evitando testes desnecessários.<br>

4. (Adaptado da OBI 2008)<br>
A maioria das universidades brasileiras usa o vestibular para selecionar seus alunos. O vestibular consiste de uma ou mais provas sobre as matérias do Ensino Médio, visando avaliar os conhecimentos dos candidatos. Um formato popular de prova de vestibular é a prova objetiva. Neste formato de prova, cada candidato deve escolher uma das cinco alternativas apresentadas pela questão como sendo a correta. Durante a correção dos cartões, cada questão onde a alternativa escolhida pelo candidato é a mesma do gabarito, ele ganha um ponto. Alguns dos vestibulares mais concorridos do Brasil são disputados por dezenas de milhares de candidatos, e, por isso, geralmente usa-se uma folha de leitura óptica e um programa de computador para corrigir as provas de todos os candidatos e gerar a lista com suas pontuações. Você trabalha no comitê responsável pelo vestibular em uma faculdade e deve escrever um programa que, dado o gabarito e as respostas de um dos candidatos, determina o número de acertos daquele candidato.<br>
<br>
Entrada:<br>
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão. O primeiro valor da entrada é um inteiro N (1 ≤ N ≤ 80), que indica o número de questões da prova. A segunda entrada é uma cadeia de N caracteres, que indica o gabarito da prova. A terceira entrada contém outra cadeia de N caracteres, que indica as opções marcadas pelo candidato. Ambas as cadeias contêm apenas os caracteres A, B, C, D e E (sempre em letra maiúscula).<br>
<br>
Saída:<br>
Seu programa deve imprimir na saída padrão uma única linha contendo um único inteiro, indicando o número de acertos do candidato.<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/a8959811-e366-42cb-82f3-b50927fcbc47)

<br>

5. Escreva um programa que gera e mostra um vetor contendo N elementos aleatórios. O usuário deve informar uma posição do vetor. O programa deve então remover o elemento na posição informada, “puxando” todos os elementos das posições posteriores uma posição para “trás”. Por exemplo, se o vetor contém os números 1, 3, 6, 2 e 10 e o usuário digita 2, o programa deve remover o elemento na posição número 2 do vetor – o 6 (lembre-se que a contagem inicia em 0) – ficando com os números 1, 3, 2 e 10. Após a remoção, o programa deve mostrar como o vetor ficou e pedir uma nova entrada ao usuário. O programa termina quando o vetor ficar vazio ou se o usuário selecionar uma posição que estaria fora do vetor. Note que, após uma ou mais remoções, o vetor terá posições
inutilizadas, o conteúdo destas posições é indeterminado.<br>

6. Cebolinha é um personagem de história em quadrinhos que quando fala, troca o R pelo L.<br>
Escreva uma função stling, que recebe uma string s e um buffer (um vetor capaz de armazenar outra string com o mesmo tamanho de s) e armazene no buffer uma versão de s com todos os R's trocados por L's, exceto quando o R é a última letra de uma palavra. Dois R's seguidos devem ser substituídos por um único L. Lembre-se de manter maiúsculas e minúsculas como no texto original.<br>

7. (adaptado de https://neps.academy/br/exercise/118)<br>
Em chats, é muito comum entre jovens e adolescentes utilizar sequências de letras, que parecem muitas vezes aleatórias, para representar risadas. Alguns exemplos comuns são:<br>
<br>
huaauhahhuahau<br>
hehehehe<br>
ahahahaha<br>
jaisjjkasjksjjskjakijs<br>
huehuehue<br>
<br>
Cláudia é uma jovem programadora que ficou intrigada pela sonoridade das “risadas digitais”. Algumas delas ela nem mesmo consegue pronunciar! Mas ela percebeu que algumas delas parecem transmitir melhor o sentimento da risada que outras. A primeira coisa que ela percebeu é que as consoantes não
interferem no quanto as risadas digitais influenciam na transmissão do sentimento. A segunda coisa que ela percebeu é que as risadas digitais mais engraçadas são aquelas em que as sequências de vogais são iguais quando lidas na ordem natural (da esquerda para a direita) ou na ordem inversa (da
direita para a esquerda), ignorando as consoantes. Por exemplo, “hahaha” e “huaauhahhuahau” estão entre as risadas mais engraçadas, enquanto “riajkjdhhihhjak” e “huehuehue” não estão entre as mais engraçadas.<br>

Cláudia está muito atarefada com a análise estatística das risadas digitais e pediu sua ajuda para escrever uma função que determine, para uma risada digital, se ela é das mais engraçadas ou não.<br>
<br>
Entrada:<br>
A função deve receber como entrada uma string contendo uma sequência de no máximo 50 caracteres, formada apenas por letras minúsculas sem acentuação. As vogais são as letras ‘a’,‘e’,‘i’,‘o’,‘u’. A sequência contém pelo menos uma vogal.<br>
<br>
Saída:
A função deve retornar 1 caso a risada seja das mais engraçadas, ou 0 caso contrário.<br>
Exemplos:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/d3083bda-8f95-4726-b71e-ceea4bc40678)

<br>

8. Realize o teste de mesa, mostrando o que será impresso pelo programa abaixo. Não é preciso explicar a saída, apenas desenhá-la.<br>
```C
#include <stdio.h>

#define N 7

int main() {
    int i, j;
    char b[N * 2 + 1];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N * 2; j++)
            b[j] = 'x';
        b[N * 2] = '\0';

        for (j = 0; j <= i; j++) {
            b[j] = '1';
            b[N * 2 - j - 1] = '0';
        }

        /* %s é a sequência de escape para strings. */
        printf("%s\n", b);
    }
    return 0;
}
```
<br>

9. Escreva uma função que inverte uma string, deixando o texto de trás para a frente. A função deve receber como parâmetro apenas a string, e colocar o resultado no próprio buffer de entrada. Suponha que a string é terminada em '\0', e não use funções da biblioteca-padrão. Os tamanhos da string e do buffer que a contém são desconhecidos a priori. Aviso: você não pode criar um vetor auxiliar!<br>

10. Escreva uma função que recebe uma string e mostra o número de ocorrências de cada letra nela. A contagem não deve fazer diferenciação entre maiúsculas e minúsculas, então a string “A vida eh assim” tem 3 ocorrências da letra A, 0 ocorrência da letra B, 0 da letra C, 1 da letra D, etc. Dicas:<br>
a) Lembre-se que na tabela ASCII as letras aparecem em sequência.<br>
b) Lembre-se que a diferença entre uma letra maiúscula e a sua versão minúscula na tabela ASCII é sempre a mesma, ou seja, a diferença entre 'A' e 'a' é igual à diferença entre 'Z' e 'z'.<br>
c) Lembre-se que as constantes caracteres são números.<br>
d) Você não precisa usar explicitamente nenhum valor da tabela ASCII.<br>

11. (Adaptado da OBI 2011)<br>
Sebastião Bueno Coelho, apelidado de SBC pelos familiares e amigos, passou as férias de janeiro de 2011 no sítio de seus avós. Durante sua estadia, uma das atividades prediletas do SBC era nadar no rio que havia no fundo da casa onde morava.<br>
Uma das características do rio que mais impressionava SBC era um belo caminho, feito inteiramente com pedras brancas. Há muito tempo, o avô de SBC notara que os habitantes do sítio atravessavam o rio com grande frequência e, por isso, construiu um caminho no rio com pedras posicionadas em linha
reta; ao fazê-lo, tomou muito cuidado para que o espaçamento das pedras fosse de exatamente um metro.<br>
Hoje em dia, a única utilidade do caminho é servir de diversão para os sapos que vivem no rio, que pulam de uma pedra a outra agitadamente. Um certo dia, enquanto descansava e nadava nas águas, SBC assistiu atentamente às acrobacias dos bichos e notou que cada sapo sempre pulava (zero, uma
ou mais vezes) uma quantidade fixa de metros.<br>
SBC sabe que você participa da OBI todos os anos e resolveu desafiar-te com o seguinte problema: Dado o número de pedras no rio, o número de sapos, a pedra inicial sobre a qual cada sapo está (cada pedra é identificada por sua posição na sequência de pedras) e a distância que cada sapo pula, determinar as posições onde pode existir um sapo depois que SBC chega no rio.<br>
<br>
Entrada:<br>
O programa recebe como entradas dois inteiros N e M (ambos no intervalo [1, 100], que representam o número de pedras no rio e o número de sapos, respectivamente. São então lidos M pares de valores, cada par contendo a posição inicial de um sapo e a distância fixa de um pulo, ambos valores no
intervalo [0, N]. Considere que a primeira pedra corresponde à posição 0, a segunda pedra à posição 1, etc. Desta forma, a última pedra tem a posição N-1.<br>
Saída:<br>
O programa deve mostrar N valores, que indicam a possibilidade ou não de ter um sapo em cada pedra. Para as pedras que podem ter um sapo você deve imprimir 1, e para as pedras que com certeza não podem ter nenhum sapo você deve imprimir 0.<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/67522e22-9097-413f-9512-0758a4993eb3)

<br>

Neste exemplo, SBC indicou a existência de 5 pedras no rio e 2 sapos. Os sapos estavam inicialmente nas pedras 2 e 3. SBC também lhe disse que o primeiro sapo da entrada sempre pula 2 metros, e o segundo sempre pula 4 metros. A figura a seguir ilustra as possíveis pedras que podem ser ocupadas
pelos sapos quando eles começam a pular.<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/055272d6-523c-432f-a229-af3a656f2710)

<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/055272d6-523c-432f-a229-af3a656f2710)

<br>
Neste exemplo, SBC indicou a existência de 8 pedras no rio e 3 sapos. Os sapos estavam inicialmente nas pedras 2, 1 e 5. SBC também lhe disse que o primeiro sapo da entrada sempre pula 3 metros, o segundo e terceiro sempre pulam 2 metros. Dessa forma, o primeiro sapo pode estar nas pedras 2 ou
5; o segundo sapo pode estar nas pedras 1, 2, 4 ou 6; e o terceiro sapo pode estar nas pedras 5, 3, 1 e 7. A figura a seguir ilustra as possíveis pedras que podem ser ocupadas pelos sapos quando eles começam a pular.<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/f0d89d6c-2f14-437a-8c68-1640a9590ba1)

<br>

12. A contagem de palavras em um texto é uma funcionalidade básica encontrada em vários softwares para edição de texto. Existem também sofwares e websites dedicados unicamente a esta simples tarefa!<br>
Escreva uma função que recebe como parâmetro apenas uma string, e retorna o número de palavras que existem nela, supondo que uma palavra contém apenas letras – ou seja, números, espaços, pontuação e quaisquer outros caracteres são tratados como divisores entre palavras. Suponha que a string é terminada em '\0', e não use funções da biblioteca-padrão. Os tamanhos da string e do buffer que a contém são desconhecidos a priori.<br>

13. Escreva uma função que recebe um vetor de inteiros e um vetor de saída com a mesma capacidade. A função deve colocar nas posições iniciais do vetor de saída os elementos do vetor de entrada, mas sem repetições, e retornar o número de elementos inseridos no vetor de saída. As posições que sobrarem no vetor de saída terão conteúdo indeterminado. Os dados do vetor original devem ser mantidos intactos. Por exemplo, se os elementos do vetor original são {0, 1, 2, 3, 4, 3, 2, 4, 5, 3, 2, 6, 1, 0}, o novo vetor deve conter nas posições iniciais os valores {0, 1, 2, 3, 4, 5, 6}, com as demais posições tendo conteúdo indeterminado, e a função deve retornar 7.<br>

14. Escreva uma função que recebe como parâmetros um vetor de inteiros e o seu tamanho, e retorna o tamanho da maior sequência não decrescente encontrada. Por exemplo, considere o vetor abaixo:<br>
1, 5, 6, 4, 9, 13, 13, 13, 55, 54, 40, 28<br>
A maior sequência não decrescente tem 6 números, e vai do 4 até o 55 (inclusive). Em outro exemplo, considere o vetor abaixo:<br>
10, 9, 8, 7, 6, 5, 4, 3, 2, 1<br>
Como o vetor está em ordem decrescente, a maior sequência não decrescente tem tamanho 1 – qualquer um dos números isolados seria uma sequência de tamanho 1!<br>
Além de retornar o tamanho da sequência, a função deve retornar, em 2 parâmetros passados por referência, as posições do início e do fim da sequência. O protótipo da função deve ser:<br>
int tamMaiorSeqNDec (int* val, int n, int* inicio, int* fim);<br>