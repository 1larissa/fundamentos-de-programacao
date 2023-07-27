#include <stdio.h>

int main ()
{   
    int num, total_elem;
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Calcula a sequencia de Collatz
    total_elem = 1; // Ja leu o primeiro
    while(num != 1)
    {
        if(num % 2 == 0) // Se for par
            num /= 2;
        else // Se for impar
            num = (num*3)+1;

        printf("%d ", num);
        total_elem++;
    }
    printf("\n");
    printf("Total de %d elementos\n", total_elem);
    return (0);
}