#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero, expoente, resposta;

    printf ("Digite um numero inteiro \n");
    scanf ("%i", &numero);
    printf ("Digite outro numero inteiro\n");
    scanf ("%i", &expoente);

        for (resposta = 1; expoente >0; expoente --)
        {
            resposta = resposta*numero;
        }

printf ("O resultado  = %i \n", resposta);

return 0;
}