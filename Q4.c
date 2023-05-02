#include <stdio.h>
#include <stdlib.h>

int main(){
    int x1,y1,x2,y2;
    printf("\nDigite o primeiro valor do ponto 1:");
    scanf("%d",&x1);
    printf("\nDigite o segundo valor do ponto 1:");
    scanf("%d",&y1);
    printf("\nDigite o primeiro valor do ponto 2:");
    scanf("%d",&x2);
    printf("\nDigite o segundo valor do ponto 2:");
    scanf("%d",&y2);

    
    //Primeiro ponto
    if ((x1>0) && (y1>0))
    {
        printf("\nP1:Primeiro Quadrante");
    }else if ((x1<0) && (y1>0))
    {
        printf("\nP1:Segundo Quadrante");
    }else if ((x1<0) && (y1<0))
    {
        printf("\nP1:Terceiro Quandrante");
    }else if ((x1>0) && (y1<0))
    {
        printf("\nP1:Quarto Quadrante");
    }else if ((y1==0) && ((x1<0) || (x1>0)))
    {
        printf("\nP1:Eixo X");
    }else if ((x1==0) && ((y1<0) || (y1>0)))
    {
        printf("\nP1:Eixo Y");
    }
    else if ((y1==0) && (x1==0))
    {
        printf("Origem");
    }
    
    //Segundo ponto
    if ((x2>0) && (y2>0))
    {
        printf("\nP2:Primeiro Quadrante");
    }else if ((x2<0) && (y2>0))
    {
        printf("\nP2:Segundo Quadrante");
    }else if ((x2<0) && (y2<0))
    {
        printf("\nP2:Terceiro Quandrante");
    }else if ((x2>0) && (y2<0))
    {
        printf("\nP2:Quarto Quadrante");
    }else if ((y2==0) && ((x2<0) || (x2>0)))
    {
        printf("\nP2:Eixo X");
    }else if ((x2==0) &&((y2<0) || (y2>0)))
    {
        printf("\nP2:Eixo Y");
    }else if ((y2==0) && (x2==0))
    {
        printf("\nP2:Origem");
    }
    
    
    
    
    
    



}