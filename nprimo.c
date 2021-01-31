// numeros primos
// numero maiores que que sao divisiveis por 1 e ele mesmo

#include<stdio.h>
#include<stdlib.h>

void main (){

    int i;//contador
    int x;
    int a;//auxiliar
    a=0;

    system("cls||clear");

    printf ("Digite um valor inteiro:\n");
    scanf ("%i", &x);

    // pro numero ser primo ele sera apenas divido por 1 e por ele mesmo
    // ou seja para um numero se primo ele possue apenas dois divisores 

    for (i=1;i<=x; i++){

        if (x%i==0)
        {
          a++;//conta quantas vezes foi divivel 
        }
    }
    printf ("\n");

    if (a==2){
        printf ("Numero %i primo\n",x);
    } else {
        printf ("Numero %i nao primo, pois eles tem %i divisores\n",x,a);
    }

    printf ("\n");

}