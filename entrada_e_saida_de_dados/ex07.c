#include <stdio.h>
int main ()
{
    int idade, matricula, cod ;
    float peso ;

    scanf ("%d ", cod) ;// correto: scanf ("% d ", &cod );
    scanf ("%d % f ", &peso, &idade) ;// correto: scanf ( "% f % d ", & peso, & idade );
    scanf ("%d ", &Matricula) ;// correto: scanf ( "% d ", &matricula );
    printf ("%d ", &cod) ;//correto: printf ( "% d ", cod );

    return 0;
}
