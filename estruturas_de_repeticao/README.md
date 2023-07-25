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