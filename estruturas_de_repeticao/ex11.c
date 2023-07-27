#include <stdio.h>

int main () 
{
    float foolano = 1.5, barano = 1.10; // Tamanho inicial
    int anos = 0; // Contador para os anos

    while(barano <= foolano) // Enquanto Barano for menor
    {
        anos++;
        barano += 0.03;
        foolano += 0.02;
    }

    printf("Demorou %d anos para Barano ser mais alto que Foolano.\n", anos);
    return 0;
}