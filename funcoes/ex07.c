#include <stdio.h>

unsigned long long potencia (unsigned int base, unsigned int expoente)
{
    unsigned long long total_pot = 1 ,i;
    // Calcula a potencia
    for(i = 0; i < expoente; i++)
        total_pot *= base;
    
    return (total_pot);
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    unsigned long long num, exp, resposta;
    scanf("%llu %llu", &num, &exp);

    resposta = potencia(num, exp);
    printf("%llu", resposta);
}
*/
