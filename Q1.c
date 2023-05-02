#include<stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c,d;
    int diferenca;
    printf("\nDigite o valor de a:");
    scanf("%d",&a);
    printf("\nDigite o valor de b:");
    scanf("%d",&b);
    printf("\nDigite o valor de c:");
    scanf("%d",&c);
    printf("\nDigite o valor de d:");
    scanf("%d",&d);

    diferenca = ((a*b)-(c*d));

    printf("%d * %d - %d * %d",a,b,c,d);
    printf(" = %d",diferenca);
}