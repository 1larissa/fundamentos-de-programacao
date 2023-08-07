# Lista de exercícios (Vetores - Parte 3)

1. Escreva um programa que aloque memória para um vetor de 10 posições do tipo float e preencha-o com valores lidos do teclado. Depois de gerado o vetor, o programa deve mostrar o conteúdo de todas as posições. O espaço deve então ser desalocado.<br>

2. Escreva um programa que aloque memória para dois vetores, com tamanhos diferentes, dados pelo usuário. Os vetores devem ser preenchidos com valores aleatórios no intervalo [0, 10]. O programa deve então criar um terceiro vetor, capaz de conter todos os elementos Vi*Vj, onde Vi é um elemento do primeiro vetor e Vj é um elemento do segundo vetor. A multiplicação elemento-a-elemento dos dois vetores deve ser calculada, e os valores obtidos devem ser apresentados. Dica: você pode usar uma ou mais funções para organizar o seu código.<br>

3. O programa abaixo deveria gerar uma cópia de um vetor contendo 10 elementos dados pelo usuário. Ele não funciona. Onde está o problema? Explique o que o programa está fazendo de errado.<br>
Dica: use testes de mesa e/ou o debugger. Depois, responda: como o programa poderia ser corrigido?<br>
<br>

```C
#include<stdio.h>
#define TAM 10

void copiaVetor (int *vetor, int *vetor2)
{
    int vetor_aux [TAM], i;
    for (i = 0; i < TAM; i++)
        vetor_aux [i] = vetor [i];
    vetor2 = vetor_aux;
}
void imprimeVetor (int *vetor)
{
    int i;
    for (i = 0; i < TAM; i++)
        printf("%d ", vetor [i]);
    printf("\n");
}
int main ()
{
    int vet [TAM], vet2 [TAM];
    int i;
    for (i = 0; i < TAM; i++)
        scanf ("%d", &vet [i]);
    copiaVetor (vet, vet2);
    printf("Vetor:\n");
    imprimeVetor (vet);
    printf("Copia:\n");
    imprimeVetor (vet2);
    return (0);
}
```

4.  Em programas que manipulam strings, a leitura de cada string é feita em um buffer com o tamanho máximo para as strings lidas. Por exemplo, o código abaixo lê uma string de até 1024 caracteres (contando o '\0' final): <br>
<br>

``` C
#define BUFLEN 1024
(...)
char buffer [BUFLEN];
fgets (buffer, BUFLEN, stdin);
```

<br>
Neste código, o buffer que contém a string possui tamanho 1024, mesmo que a string digitada seja simplesmente “oi”. A maior parte do espaço não é usada. Além disso, se for necessário ler outra string usando o mesmo buffer, o conteúdo da primeira string digitada será substituído. Nestas situações, uma forma de economizar memória é usar o buffer maior apenas para ler as strings, mas alocar cada nova string em outro espaço, que tem apenas o tamanho necessário.
Com base nisso, escreva uma função 'char* empacotaString (char* string)', que recebe como parâmetro um buffer contendo uma string e retorna uma cópia da string, mas em um espaço que tem apenas o tamanho necessário. A nova string deve ser alocada dentro da função, mas a responsabilidade de desalocá-la é do chamador.<br>

5. Escreva uma função char* concatenaStrings (char* s1, char* s2), que recebe duas strings como parâmetros e cria uma nova string que é uma concatenação das duas. Por exemplo, se s1 for “foo” e s2 for “bar”, a função retorna uma string contendo os caracteres “foobar”. A string retornada deve ser alocada dentro da função, e ter apenas o tamanho necessário para conter as duas strings (além do '\0' final!). A responsabilidade de desalocar esta string é do chamador.<br>
