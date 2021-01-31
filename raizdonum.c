/*codifica o programa pra calcular a raiz */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  numero, raiz, i;

    do 
    {
        system ("cls || clear");
        printf ("digite um  numero inteiro \n");
        scanf ("%i", &numero);
    } while (numero < 0);

    for (i = 0; i*i < numero; i++);
    
    raiz = i;

    if (i*i == numero) 
    {

        printf ("%i\n", raiz);
    }
    else 
    {
        printf  (" nao existe raiz inteira de %i \n", numero);
    }
    
    

    return 0;
}