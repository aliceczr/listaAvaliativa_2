#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define eixoX(x1,x2) (x2-x1)
#define eixoY(y1,y2) (y2-y1)

int main(){
    int a,b,c,d;
    float diferenca;

    printf("\nDigite o primeiro valor do ponto 1:");
    scanf("%d",&a);
    printf("\nDigite o segundo valor do ponto 1:");
    scanf("%d",&b);
    printf("\nDigite o primeiro valor do ponto 2:");
    scanf("%d",&c);
    printf("\nDigite o segundo valor do ponto 2:");
    scanf("%d",&d);

    diferenca = sqrt(pow(eixoX(c,a),2 )+ pow(eixoY(d,b),2));

    printf("Distancia = %.4f",diferenca);
}