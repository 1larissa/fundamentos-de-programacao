# Lista de exercícios (Estrutura de repeticao).

1. Escreva um programa que mostra todos os números no intervalo [0, N), onde N é uma constante definida com o uso da diretiva de pré-processamento #define. Faça a sequência ser mostrada duas vezes, uma usando a estrutura de repetição while, a outra o for.

2. O que o programa abaixo produz como saída? Responda somente analisando o código, só execute-o para confirmar a sua resposta.
```C
#include <stdio.h>
#define N 10
#define X 3
int main ()
{
    int i;
    for (i = 0; i < N*X; i += X)
        printf ("%d\n", i);
    return 0;
}
```

3. Escreva um programa que imprima a tabuada de um número n dado (1 x n até 10 x n). Faça duas versões do programa, uma usando while e a outra for.

4. Escreva um programa que imprima os 10 primeiros números inteiros maiores que um n dado. Faça duas versões do programa, uma usando while e a outra for.

5. Escreva um programa que leia 10 números inteiros e imprima a média dos números dados, mas somente daqueles cujo valor for menor que 20. Faça duas versões do programa, uma usando while e a outra for.

6. O número 3025 possui a seguinte caracterı́stica: 30 + 25 = 55 → 55 55 = 3025. Escreva um ∗ programa que mostre todos os números de 4 algarismos com a mesma característica do número 3025.

7. Em uma competição de saltos ornamentais, 6 juízes dão suas notas, que podem variar entre 0 e 10 (incluindo valores “quebrados”). A nota final do atleta deve excluir a maior e a menor nota dos juízes e é composta pela média das quatro notas restantes - esta é uma variação simples de um
conceito conhecido como “média truncada”. Faça um programa que lê do usuário as seis notas dos juízes e informa a nota final do atleta.

8. Construa um programa que informa se um número inteiro n dado é perfeito ou não. Um número n é perfeito se a soma de todos os divisores positivos próprios - excluindo ele mesmo - é igual a n. <br>
Exemplo: 28 é perfeito, pois 1 + 2 + 4 + 7 + 14 = 28.

9. Escreva um programa que lê duas entradas no formato “hora:minuto:segundo” e as soma. O número de segundos e minutos deve ficar sempre entre 0 e 59. O programa deve testar as entradas, para conferir se elas não são inválidas.

10. Escreva um programa que lê números inteiros e mostra a mensagem ECO x, onde x é o último número lido. O programa deve permanecer em  execução somente enquanto os valores informados estiverem no intervalo [10, 20], e não deve mostrar a mensagem quando o valor estiver fora do
intervalo, mesmo se for o primeiro valor.

11. Foolano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Barano tem 1,10 metro e cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários para que Barano seja mais alto que Foolano, além da altura que ambos terão neste momento. Para este programa, faça uma solução “força bruta” - ignore que se tratam de duas progressões aritméticas. Também ignore o fato de que este exemplo abstrato é absurdo.<br>
Dica: caso não consiga enxergar rapidamente a estrutura do programa, monte uma tabela, colocando nas colunas os valores relevantes e em cada linha os valores para um ano. Preencha então algumas linhas, simulado a passagem de alguns anos. Isso pode lhe ajudar a enxergar a estrutura do
programa.

12. Escreva um programa que receba como entradas os limites inferior e superior de uma faixa de valores, respectivamente min e max. Tanto min quanto max devem ser inteiros positivos. O programa então deve passar a ler valores inteiros, até que seja fornecido um número negativo. No final, o programa deve mostrar quantos dos valores informados estavam na faixa [min, max], assim como o maior e o menor número lidos, considerando somente os valores dentro da faixa. Se não tiverem sido dados valores dentro da faixa, o programa não deve mostrar o menor e o maior valor, e sim uma mensagem de erro.

13. Escreva um programa que calcule o fatorial de um número dado.

14. Escreva um programa que leia n números (com n informado pelo usuário) e diga se eles formam uma sequência crescente, decrescente, ou nenhum dos casos.

15. Escreva um programa que calcule o quociente e o resto da divisão de dois números inteiros positivos dados, usando apenas as operações de soma e/ou subtração.

16. Escreva um programa que lê um inteiro positivo e um dígito. O programa deve verificar se o número dado contém o dígito em qualquer posição. Não é preciso dizer qual a posição, apenas indicar se o dígito está ou não presente.

17. Escreva um programa no qual o usuário digita uma quantia arbitrária de números inteiros positivos. Quando o usuário digitar um número menor ou igual a 0, o programa deve indicar o tamanho da maior sequência crescente observada. Por exemplo, se os números digitados forem 5, 10, 3, 2, 4,
7, 9, 8, 5, a maior sequência crescente é 2, 4, 7, 9, então o programa deve mostrar na tela que a maior sequência crescente tem 4 números. Já a sequência 10, 8, 7, 5, 2 está em ordem decrescente, portanto a maior sequência crescente observada tem tamanho 1.

18. (DESAFIO)<br>
O seu objetivo  ́e escrever um programa que adivinha um número no intervalo [0, N], onde N ́é uma constante definida por uma macro. O  procedimento é o seguinte:<br>
a. O usuário pensa em um número e o anota em algum lugar (papel, editor de texto, etc.).<br>
b. O programa deve dar um palpite sobre qual ́e o número.<br>
c. O usuário deve informar ao programa se o número  ́e menor (1), igual (2), ou maior (3) que o palpite.<br>
d. Os passos 2 e 3 devem ser repetidos até que o programa consiga adivinhar o número anotado.<br>

O programa deve supor que o usuário não mente e nem se engana ao interagir com o programa. Ao final, o programa deve mostrar quantos palpites precisou fazer para adivinhar o número, incluindo o palpite correto (ou seja, o n ́umero de palpites n ̃ao pode ser menor que 1).<br>
Você deve buscar uma solução que minimiza o número de palpites dados pelo programa - a sua nota depende disso! Por exemplo, uma solução possível (mas que não ́e o que se espera como resposta) ́e fazer um programa que “chuta” valores aleatoriamente até eventualmente acertar! Observe que a quantidade máxima de palpites neste caso ́e indeterminada. Por outro lado, para um programa que chuta valores subsequentes entre 1 e N é possível estimar a quantidade máxima de palpites. Entretanto, esta também  ́e uma solução 'naive' demais. O desafio aqui é você pensar em uma solução que realize os “chutes” de forma mais efetiva. Mas lembre-se que ́e essencial ter uma solução que funciona, portanto se você conseguir chegar a uma solução que  ́e correta mas pouco eficiente, e não conseguir implementar outra ideia melhor, entregue a sua solução, e mantenha as ideias que não funcionarem comentadas no seu código. Sua nota sofrerá descontos, mas não tanto quanto se você entregar um programa que não funciona!




