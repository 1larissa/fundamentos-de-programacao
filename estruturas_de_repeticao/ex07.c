#include <stdio.h>
#define JUIZES 6

int main () 
{
    float nota_atual, i;
    float maior_nota, nota_total, menor_nota;
    printf ("Digite as 6 notas: ");
    scanf ("%f", &nota_atual);
    maior_nota = nota_atual;
    menor_nota = nota_atual;
    nota_total = nota_atual;

    for(i = 1; i <= JUIZES - 1; i++)
    {  
        scanf ("%f", &nota_atual);
        // verifico se eh a maior ou menor nota e soma no total
        if (nota_atual > maior_nota)
            maior_nota = nota_atual;
        else if (nota_atual < menor_nota)
            menor_nota = nota_atual;
        
        nota_total += nota_atual;
    }
    printf ("Maior nota: %.2f\nMenor nota: %.2f \nNota total: %.2f\n", maior_nota, menor_nota, nota_total);
    // desconta a maior e menor nota
    nota_total -= maior_nota;
    nota_total -= menor_nota;
    // calcula a media 
    nota_total /= 4;

    printf ("A nota final eh : %.2f\n", nota_total);
    return 0;
}
