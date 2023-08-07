#include <stdio.h>
#define TAM 7

// Funçao auxiliar para descobrir se é letra
int ehLetra (char c)
{
  return(c >= 'A' && c <= 'z');
}

int contaPalavras(char *string)
{
  int i, palavras = 0;

  // Percorre a string
  for(i = 0; string[i] != '\0'; i++)
    // Se tiver uma letra antes, cada dividisor de palavra contabiliza uma palavra
    if(ehLetra(string[i]) && !ehLetra(string[i+1]))
        palavras++;

  return(palavras);
}

/*---MAIN PARA TESTES---
int main(void) {

  char frase[TAM];
  fgets(frase, TAM, stdin);
  printf("Total de palavras: %d", contaPalavras(frase));
  return 0;
}
*/