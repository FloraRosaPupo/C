#include<stdio.h>
#include<stdlib.h>

void menu(float a, float b, float r, int i){
    switch (i)
    {
        case 1:
            r = (a)+(b);
            

            break;
        case 2:
            r = (a)-(b);
            

            break;
        case 3:
            r = (a)*(b);
            

            break;
        case 4:
            if (b<=0){
                printf ("Divisao invalida\n");
            } else {
                r=(a)/(b);
            
            }

            break;

        default:
            printf ("Opcao invalida\n");
    }

    printf ("(1)Soma.\n(2)Subtracao.\n(3)Multiplicacao.\n(4)Divisao.\n");
    printf ("\nOpcao (%i) -> %.2f\n",i,r);
}

int main (){
    float a;
    float b;
    float r;//resultado
    int i;

    system ("cls||clear");

    printf ("         Calculadora:\n\n");
    printf ("Escolha uma das Operacoes abaixo:\n");
    printf ("(1)Soma.\n(2)Subtracao.\n(3)Multiplicacao.\n(4)Divisao.\n");
    scanf("%i", &i);

    system ("cls||clear");

    printf ("Agora digite dois valores como entrada para realizar a operacao escolhida:\n");
    scanf("%f", &a);
    scanf("%f", &b);

    system ("cls||clear");

    menu (a,b,r,i);

    return 0;

}