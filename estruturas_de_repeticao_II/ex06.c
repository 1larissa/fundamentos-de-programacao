#include <stdio.h>
#define META 1000000

int main ()
{  
    int dias, total_acessos, acessos_dia, dia_premio, i, atingiu_meta;

    printf("Digite o numero de dias que a lista contem: ");
    scanf("%d", &dias);

    // Le os acessos em cada dia
    total_acessos = 0;
    atingiu_meta = 0; // Flag
    for(i = 1; i <= dias; i++)
    {
        scanf("%d", &acessos_dia);
        total_acessos += acessos_dia;
        if(total_acessos >= META && !atingiu_meta) // Só entra se for a primeira vez q atingiu a meta
        {
            dia_premio = i; // Salva a data que tingiu a meta
            atingiu_meta = 1;
        }
    }
    if(atingiu_meta)
        printf("%d", dia_premio);
    else // Caso nao tenha atingido a meta
        printf("-1");
    return (0);
}