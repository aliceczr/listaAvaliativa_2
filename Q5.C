#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,i,resto;

    printf("Digite um numero:");
    scanf("%d",&num);
    for ( i = 1; i < num; i++)
    {
        resto = num % i;
        if(resto == 0){
        
        printf("%d ,",i);
        }
        
    }
    

}