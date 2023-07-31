# Lista de exercícios (Vetores)

1. Escreva um programa que cria um vetor do tipo int com 10 posições e o preenche, com 0 na primeira posição, 1 na segunda, etc., até 9 na última posição. Depois de preencher o vetor, percorra-o e imprima o seu conteúdo.<br>

2. Escreva um programa que preenche um vetor com N números aleatórios entre 0 e N-1, onde N é uma constante definida por uma macro. Depois que o vetor for gerado, o programa deve percorrer o vetor e mostrar quais posições têm o valor igual ao índice da sua posição. Por exemplo, se o vetor gerado tiver os valores 3, 5, 2, 1, 4, 0, nesta ordem, o programa deve mostrar 2 e 4.<br>

3. Escreva um programa que recebe N números inteiros e os imprime em ordem intercalada: o 1º valor informado, o 3º, o 5º, etc; e em seguida o 2º, o 4º, o 6º, etc. Por exemplo, se os números informados forem 1, 3, 4, 8, 5 e 10, a saída deve mostrá-los na ordem 1, 4, 5, 3, 8 e 10.<br>

4. Escreva um programa que gera N valores aleatórios do tipo int no intervalo [20, 80], onde N é uma constante dada. O programa deve calcular e imprimir a média (não se preocupe com o arredondamento), e depois mostrar cada um dos valores, dizendo se ele é maior, menor ou igual à média. Por fim, o programa deve mostrar quantos dos valores eram maiores e quantos eram menores do que a média.<br>

5. Escreva um programa que gera N valores aleatórios do tipo float no intervalo [-40,+40], onde N é uma constante dada. O programa deve calcular e imprimir a média dos positivos, e depois mostrar cada um dos valores positivos, dizendo se o valor é maior, menor ou igual à média. Já os valores
negativos não devem ser armazenados em um vetor.<br>

6. <br>
a) Escreva um programa que lê N valores do tipo int, onde N é uma constante dada. O programa deve imprimir os valores lidos na ordem inversa à fornecida. Você não deve usar N variáveis para armazenar os valores!<br>
b) Modifique o programa para que o usuário forneça o valor de N, sabendo que N <= 1024.<br>

7. Suponha que dois números formam um par de Foolano se ambos têm os mesmos dígitos, na mesma quantidade, desconsiderando-se os zeros à esquerda. Por exemplo, os pares abaixo são pares de Foolano:<br>
<br>
1234 e 4321; 1122 e 1212; 101 e 101; 344 e 443.<br>
<br>
Já os pares abaixo não são pares de Foolano:<br>
<br>
123 e 124; 221 e 112; 022 e 220.<br>
<br>
a) Escreva uma função que retorna 1 se 2 números dados formam um par de Foolano, ou 0 do contrário. O protótipo da função deve ser:<br>
int ehParDeFoolano (unsigned int n1, unsigned int n2);<br>
<br>
b) Escreva uma versão da função ehParDeFoolano que não faça uso de vetores. Você pode criar para isso uma função auxiliar que recebe como parâmetro um número e um dígito e retorne o número de ocorrências daquele dígito no número. Existe alguma vantagem em resolver este problema usando vetores?<br>

8. (Adaptado da OBI 2012)<br>
Tombólia do Oeste e Tombólia do Leste travaram uma guerra durante 50 anos. O motivo da guerra era o tamanho do território de cada país. Pelo bem da população dos dois países, os governos resolveram fazer um tratado para finalizar a guerra.<br>
O tratado consiste em fazer um divisão justa, e certamente contínua, do território. Eles resolveram pedir sua ajuda para calcular o ponto de divisão do território. Depois de tantos anos de guerra, os países não podem lhe pagar uma viagem para ver previamente o território que será dividido. Ao invés
disso, eles prepararam uma lista a1, a2, ..., aN de inteiros que indicam o tamanho de cada seção do território. A seção a1 é vizinha da seção a2 que por sua vez é vizinha da seção a3; e assim por diante. Os governos querem uma divisão em uma seção k de tal forma que a1+a2+...+ak = ak+1+ak+2+...+aN.<br>
Sua tarefa é, dada uma lista de inteiros positivos a1, a2, ..., aN, determinar a seção k tal que soma dos comprimentos das seções a1 até ak é igual à soma dos comprimentos das seções ak+1 até aN.<br>
<br>
Entrada:<br>
<br>
O programa recebe primeiro um inteiro 2 ≤ N ≤ 100, que indica o número de seções do território. Ele então deve ler N inteiros positivos que indicam os comprimentos das seções.<br>
<br>
Saída:<br>
<br>
Seu programa deve imprimir uma única linha contendo um inteiro que indica a seção do território onde acontecerá a divisão.<br>
Nota: é garantido que sempre existe uma divisão que satisfaz as condições dos países.<br>
<br>
Exemplos:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/dca2f6fd-c5d3-48d8-a1ad-eb9bd8048dc3)

<br>

9. (Adaptado da OBI 2012)<br>
Leonardo é um garoto fascinado por jogos de tabuleiro. Nas férias de janeiro, ele aprendeu um jogo chamado Campo Minado, que é jogado em um tabuleiro com N células dispostas na horizontal. O objetivo desse jogo é determinar, para cada célula do tabuleiro, o número de minas explosivas nos arredores da mesma (que são a própria célula e as células imediatamente vizinhas à direita e à esquerda, caso essas existam). Por exemplo, a figura abaixo ilustra uma possível configuração de um tabuleiro com 5 células:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/5297d9fa-11c5-43d9-9c7d-ba324b8c6670)

<br>
A primeira célula não possui nenhuma mina explosiva, mas é vizinha de uma célula que possui uma mina explosiva. Nos arredores da segunda célula temos duas minas, e o mesmo acontece para a terceira e quarta células; a quinta célula só tem uma mina explosiva em seus arredores. A próxima figura ilustra a resposta para esse caso.<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/5cea4952-3f1f-4039-b89a-13f88528e076)

<br>
Leonardo sabe que você participa da OBI e resolveu lhe pedir para escrever um programa de computador que, dado um tabuleiro, imprima o número de minas na vizinhança de cada posição. Assim, ele poderá conferir as centenas de tabuleiros que resolveu durante as férias.<br>
<br>
<br>
Entrada:<br>
O programa recebe primeiro um inteiro 2 ≤ N ≤ 50, que indica o número de células no tabuleiro. Ele então deve ler N inteiros com valor 0 ou 1, que indicam se existe (1) ou não (0) uma mina em cada posição do tabuleiro, lidos na sequência em que aparecem no tabuleiro.<br>
<br>
Saída:<br>
O programa deve mostrar N valores, indicando o número de minas explosivas nos arredores de cada casa do tabuleiro, na sequência em que aparecem no tabuleiro.<br>
Exemplos:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/6040e50f-f347-4f09-8768-102ca18bce92)

<br>