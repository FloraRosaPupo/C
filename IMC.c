#include<stdio.h>
#include<stdlib.h>

typedef struct sPessoa{
    char nome[100];
    float altura;
    float peso;


}pessoa;

void massa(int i, pessoa p[2])
{
    
    float IMC;
    float alt;

    system("cls||clear");

    for(i=0; i<2; i++)
    { 
        alt= p[i].altura*p[i].altura;
        IMC= (p[i].peso)/alt;

        printf ("A pessoa %s possui IMC igual %.2f\n", p[i].nome, IMC);
    }


}
int main (){
    pessoa p[2];
    int i;

    system("cls||clear");
    
    for (i=0; i<2; i++)
    {
        system ("cls||clear");
    
        printf ("Digite seu Nome completo:\n");
        gets (p[i].nome);
        printf ("Digite sua altura (em m):\n");
        scanf("%f", &p[i].altura);
        getchar();
        printf ("Digite seu peso (em Kg):\n");
        scanf ("%f", &p[i].peso);
        getchar();
    
    }

     massa(i,p);


}