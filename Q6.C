#include <stdio.h>
#include <stdlib.h>

int main(){
     int i, somax = 0,r1,somay=0,r2,soma;

   

     for ( i = 0; i < 1000; i++)
     { 
        r1 = i*3;
        somax=somax+r1;
        }
        
     
      for ( i = 0; i < 1000; i++)
     { 
         r2 = i*5;
        somay=somay+r2;
     }
     soma = somax+somay;

     printf("\nSoma dos divisores de 3:%d",somax);
    printf("\nSoma dos divisores de 5 :%d",somay);
   printf("\nSoma dos divisores de 5 e 3:%d",soma);
}