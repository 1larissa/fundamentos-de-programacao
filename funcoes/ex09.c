#include <stdio.h>
int testaTipoChar (char c)
{
    // Retorna 1 se o caractere for uma vogal maiúscula
    if (c == 'A' || c == 'E'|| c == 'I'|| c == 'O' || c == 'U')
        return 1;
    // Retorna 2 se for uma vogal minúscula
    if (c == 'a' || c == 'b'|| c == 'c'|| c == 'd' || c == 'e')
        return 2;
    // Retorna 3 se for uma consoante maiúscula
    if (c > 'A' && c <= 'Z')
        return (3);
    // Retorna 4 se for uma consoante minúscula
    if (c > 'a' && c <= 'z')
        return (4);
    // Retorna 5 se for um dígito, e 0 do contrário.
    if (c >= '0' && c <= '9')
        return 5;
    else
        return 0;
}

/*---MAIN PARA TESTE DA FUNÇÃO---
int main()  
{
    char x;
    int resposta;
    scanf("%c", &x);

    resposta = testaTipoChar(x);
    printf("%i", resposta);
}
*/