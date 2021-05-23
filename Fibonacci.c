#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n){
    if(n<=1){
        return n;
    }else{
        return (fibonacci(n-2)+fibonacci(n-1));
    }
}
int main(){
    int n, i;

    do{
        printf("Digite um valor: ");
        scanf("%i", &n);
    }while(n<=1);

    
    for (i=1; i<=n; i++){
        printf("%i ", fibonacci(i));
    }

    return 0;
}
