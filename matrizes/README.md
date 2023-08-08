# Lista de exercícios (Matrizes)

1. a) Simule a execução do código abaixo, anotando o valor de cada posição da matriz no final do programa.<br>

```C
#define N_LINHAS 7
#define N_COLUNAS 5
int main ()
{
int i, j;
int matriz_foo [N_LINHAS][N_COLUNAS];
for (i = 0; i < N_LINHAS; i++)
for (j = 0; j < N_COLUNAS; j++)
matriz_foo [i][j] = i*j;
return (0);
}
```

<br>
b) Modifique o código acima de forma a imprimir os valores da matriz, em linhas e colunas, em uma tabela. Execute e compare o resultado que você obteve no teste de mesa com o resultado impresso.<br>

2. Escreva um programa que, dada uma matriz (A) e dois inteiros (lin e col), calcule a soma total de todos os elementos da linha lin com os elementos da coluna col. Atenção: o elemento que está na linha lin e na coluna col deverá ser contado uma única vez.<br>

3. A transposta AT de uma matriz A NxM é uma matriz MxN na qual cada elemento em uma posição (j, i) é o elemento da posição (i, j) em A. Por exemplo:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/3bafc356-3bb8-4e1f-97a5-34365ab16cc0)

<br>

Escreva um programa que gera uma matriz contendo valores aleatórios entre 1 e 20, e depois gera a transposta da matriz, mostrando o resultado na tela.

4. (Adaptado da OBI 2005)<br>
Minhocas são muito importantes para a agricultura e como insumo para produção de ração animal. A Organização para Bioengenharia de Minhocas (OBM) é uma entidade não governamental que promove o aumento da produção, utilização e exportação de minhocas.<br>
Uma das atividades promovidas pela OBM é a manutenção de uma fazenda experimental para pesquisa de novas tecnologias de criação de minhocas. Na fazenda, a área destinada às pesquisas é de formato retangular, dividida em células quadrangulares de mesmo tamanho. As células são utilizadas para testar os efeitos, na produção de minhocas, de variações de espécies de minhocas, tipos de terra, de adubo, de tratamento, etc. Os pesquisadores da OBM mantêm um acompanhamento constante do desenvolvimento das minhocas em cada célula, e têm uma estimativa extremamente precisa da produtividade em cada uma das células. A tabela abaixo mostra um mapa da fazenda, mostrando a produtividade estimada de cada uma das células.<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/6648b5fb-3c78-4efc-86b6-7221574b9c38)

<br>
Um pesquisador da OBM inventou e construiu uma máquina colhedeira de minhocas, e quer testá-la na fazenda. A máquina tem a largura de uma célula, e em uma passada pelo terreno de uma célula colhe todas as minhocas dessa célula, separando-as, limpando-as e empacotando-as. Ou seja, a máquina eliminará uma das etapas mais intensivas de mão de obra no processo de produção de minhocas. A máquina, porém, ainda está em desenvolvimento e tem uma restrição: não faz curvas, podendo movimentar-se somente em linha reta.<br>
Decidiu-se então que seria efetuado um teste com a máquina, de forma a colher o maior número possível de minhocas em uma única passada, em linha reta, de lado a lado do campo de minhocas. Ou seja, a máquina deve colher todas as minhocas de uma “coluna” ou de uma “linha” de células do campo de minhocas (a linha ou coluna cuja soma das produtividades esperadas das células é a maior possível).<br>

Escreva um programa que, fornecido o mapa do campo de minhocas, descrevendo a produtividade estimada em cada célula, calcule o número esperado total de minhocas a serem colhidas pela máquina durante o teste, conforme descrito acima.<br>
<br>
Entrada:<br>
Para simplificar o código, as entradas serão digitadas diretamente no código-fonte. Use as macros N_LINHAS e N_COLUNAS para determinar o tamanho do campo. Já o campo pode ser informado diretamente como uma matriz (veja o exemplo na próxima página).<br>
<br>
Saída:<br>
O programa deve mostrar um inteiro, indicando o número esperado total de minhocas a serem colhidas pela máquina durante o teste.<br>

Exemplos (pode copiar as entradas para o seu código!):<br>

```C
#define N_LINHAS 3
#define N_COLUNAS 4
int campo [N_LINHAS][N_COLUNAS] = {{81, 28, 240, 10},
                                    {40, 10, 100, 240},
                                    {20, 180, 110, 35}};
```

Saída esperada: 450

```C
#define N_LINHAS 4
#define N_COLUNAS 1
int campo [N_LINHAS][N_COLUNAS] = {{100},
                                    {110},
                                    {0},
                                    {100}};
```

Saída esperada: 310<br>

5. Escreva um programa que lê N strings de até 128 caracteres e depois mostra na tela as strings em ordem inversa à fornecida (i.e. o programa mostra a última string, depois a penúltima, e assim por diante, e no final mostra a primeira string digitada).<br>

6. (Adaptado da OBI 2017)<br>
Flavinho não se cansa de bolar joguinhos para passar o tempo. Ele diz que é uma boa forma de treinar a memória e a capacidade de resolver problemas. Dessa vez ele inventou uma forma de preencher um tabuleiro de N linhas e N colunas com pedras brancas e pretas. Inicialmente ele coloca, aleatoriamente, pedras brancas e pretas em todas as células da primeira coluna e da primeira linha. A figura abaixo dá um exemplo de tabuleiro com N = 6. Ele chama essas pedras iniciais de sementes. Uma vez colocadas as sementes, as demais células do tabuleiro serão preenchidas com uma pedra branca ou preta.<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/3946faed-bc0e-4cc5-9d25-290c1298a5b6)

<br>

Considere a célula na posição (i,j), para i > 0 e j > 0. Para saber a cor da pedra nessa célula, Flavinho precisa saber a cor das pedras nas três células {(i,j-1), (i-1,j-1), (i-1,j)}. A figura também ilustra quais células são usadas para determinar a cor da pedra na célula (i,j). Se houver mais pedras brancas do que pretas nessas três células, a cor da pedra na célula (i,j) será preta. Se houver mais pedras pretas do que brancas, a cor será branca. <br>
Note que, por essa definição, a primeira célula a ser preenchida será a (1,1), pois será a única vazia para a qual já saberemos a cor das três pedras necessárias. No exemplo da figura, a pedra na célula (1,1) será da cor preta, pois há duas brancas e uma preta entre as células {(1,0),(0,0),(0,1)}. <br>

Neste problema, dado N e as cores das sementes, seu programa deve preencher o restante do tabuleiro. Para simplificar o código, as entradas serão digitadas diretamente no código-fonte. Use a macro N para determinar o tamanho do tabuleiro. Já o campo pode ser informado diretamente como uma matriz. Na representação interna, o valor 0 será usado para identificar uma pedra preta, 1 para uma pedra branca, e 9 para uma posição cujo conteúdo é desconhecido.<br>
<br>
Exemplos (pode copiar as entradas para o seu código!):<br>
<br>

```C
#define N 2
int tabuleiro [N][N] = {{0,1},
                        {1,9}};
```

<br>
Saída esperada:<br>
01<br>
10<br>
<br>

```C
#define N 6
int tabuleiro [N][N] = {{0,0,1,0,0,0},
                        {1,9,9,9,9,9},
                        {0,9,9,9,9,9},
                        {0,9,9,9,9,9},
                        {1,9,9,9,9,9},
                        {1,9,9,9,9,9}};
```

<br>
Saída esperada:<br>
001000<br>
110111<br>
001000<br>
010111<br>
101000<br>
101011<br>
<br>

7. Escreva um programa que gera duas matrizes A e B, respectivamente com MxN e NxM posições, e ambas contendo valores aleatórios. O programa deve mostrar o resultado da multiplicação A·B. Lembre-se que a multiplicação de matrizes não é simplesmente a multiplicação elemento a elemento das matrizes. Por exemplo, suponha que M=2 e N=3. As matrizes ficam sendo:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/95339eca-dccb-427e-81f1-47ba48b7ca02)

<br>