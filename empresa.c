#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct sDados{
    char nome[30];
    char sexo[2];
    int idade;
    char  renda[10];
    char fumante[2];
    char esportes[2];
    char atividade[2];
}pessoa;

int main (){
    pessoa p[4];
    int i;//contador

    FILE *arquivo;

    arquivo= fopen("resposta.text", "w");

    system ("cls||clear");

    if (arquivo==NULL){
        printf ("Erro\n");
    }

    fprintf (arquivo,"Empresa ALCANTRA\n\n");

    for (i=0;i<4; i++){
        printf ("Nome: ");
        gets (p[i].nome);
        fprintf(arquivo,"Nome:");
        fprintf(arquivo,"%s\n", p[i].nome);

        printf ("\nSexo:  F-Feminino  M-Masculino  O-Outros\n");
        gets(p[i].sexo);
        fprintf(arquivo,"Sexo:");
        if (p[i].sexo=='F'||p[i].sexo=='f')
        {
            fprintf(arquivo," Femino\n");

        } else 
            if (p[i].sexo=='M'||p[i].sexo=='m')
            {
                fprintf(arquivo," Masculino\n");
            }else 
                if (p[i].sexo =='O'||p[i].sexo=='o')
                {
                    fprintf(arquivo," Outro\n");
                }else {
                    fprintf(arquivo," ERRO\n");
                }

        printf("\nIdade: ");
        scanf ("%i", &p[i].idade);
        getchar();
        fprintf (arquivo,"Idade:");
        fprintf(arquivo, " %i anos\n", p[i].idade);

        printf ("\nRenda Mensal: ");
        gets(p[i].renda);
        fprintf(arquivo,"Renda Mensal?");
        fprintf(arquivo, " %s Reais\n",p[i].renda);

        printf ("\nFumante? S-Sim  N-Nao\n");
        gets(p[i].fumante);
        fprintf(arquivo,"Fumante?");
        if (p[i].fumante=='s'||p[i].fumante=='S')
        {
            fprintf(arquivo," Sim\n");
        }else 
            if (p[i].fumante=='n'||p[i].fumante=='n') {
                fprintf(arquivo," Nao\n");
            }else{
                fprintf(arquivo,"ERRO\n");
            }

        printf ("\nGosta de esportes? S-Sim  N-Nao\n");
        gets(p[i].esportes);
        fprintf(arquivo,"Pratica Esportes?"); 
        if (p[i].esportes=='S'||p[i].esportes=='s')
        {
            fprintf(arquivo," Sim\n");
            } else 
                if (p[i].esportes=='n'||p[i].esportes=='n') {
                    fprintf(arquivo," Nao\n");
                } else{
                    fprintf(arquivo, "ERRO\n");
                }

        printf("\nFaz atividade fisicas? S-Sim  N-Nao\n");
        gets(p[i].atividade);
        fprintf(arquivo,"Atvidades Fisicas?");
        if (p[i].atividade=='S'||p[i].atividade=='s')
        {
            fprintf (arquivo," Sim\n\n");
        } else 
            if (p[i].atividade=='n'||p[i].atividade=='n') {
                fprintf(arquivo," Nao\n\n");
            }else {
                fprintf(arquivo," ERRO\n");
            }

        fprintf (arquivo,"--------------------------------------------------------------------------------------------\n");
        system ("cls||clear");
    }

    fclose(arquivo);

    printf ("\nDados gravados\n");

    return 0;
}