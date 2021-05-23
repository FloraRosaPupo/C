#include<stdio.h>
#include<stdlib.h>
int somatorio(int a, int b){
    if(b==0){
        return b;
    }else{
        return a+somatorio(a, b-1);
    }
}
int main(){
    int a, b;

    printf("Digite dois valores: ");
    scanf("%i %i", &a, &b);

    printf("Somatorio de %i ate %i: %i\n",a, b, somatorio(a,b));

    return 0;
}
