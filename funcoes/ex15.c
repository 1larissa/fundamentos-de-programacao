#include <stdio.h>

int main ()
{   
    int i, ant, atual, prox;

    scanf("%d", &ant); //leProximoDado();
    scanf("%d", &atual); //leProximoDado();

    for(i = 1; atual != -1; i++)
    {
        leProximoDado();
        // scanf("%d", &prox); 
        if(ant < atual && atual > prox)
            registraPadrao (i, tipo);
            // printf("PICO");
        else if(ant > atual && atual < prox)
            registraPadrao (i, tipo);
            // printf("VALE");
        else if(ant < atual && atual < prox)
            registraPadrao (i, tipo);
            // printf("SUBIDA");
        else if(ant > atual && atual > prox)
            registraPadrao (i, tipo);
            // printf("DESCIDA");
        ant = atual;
        atual = prox;
    }
}