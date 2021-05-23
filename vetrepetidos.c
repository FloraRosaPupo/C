/*Faça um programa que leia um vetor de 20
posições, mostre a quantidade de valores repetidos
e quais são os valores*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int v[20], i, r[20], j, a=0, m, n;

    printf("Preencha o vetor: ");

    //lendo o vetor
    for(i=0; i<20; i++){
        
        scanf("%i", &v[i]);
    }

    //percorrer o v
    for(i=0; i<20; i++)
    {
        /*j=i+1 => pq se a posicao for igual a a i sempre vai dar elemento repetido entao eu
        preciso fazer a analise do valor superior*/
        for(j=i+1; j<20; j++)//vertificar cada posicao 
        {
            if(v[i]==v[j])//se tem alguma repeticao
            {
                n=0;//o valor ja esta la ou n

                for(m=0; m<a; m++)//verificar se o vetor na posicao j ja ta dentro de r
                {
                    if(r[m]==v[j])//verificar se o valor r ja ta em v na posicao j 
                    {
                        n++;
                    }
                }
               
               //verificando se o valor repetido ja esta em r
               if(n<1){
                   r[a]=v[j];
                   a++;//quantidade de numeros repetidos
               }

            }
        
        }
    }

    printf("Os valores repetidos sao: ");

    for(i=0; i<a; i++){
        printf("%i ", r[i]);
    }

    printf("\nA quantidade de valores repetidos sao: %i\n", a);
    
    return 0;
}