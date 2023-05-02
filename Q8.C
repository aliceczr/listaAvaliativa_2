#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,numMaior,numMenor;
    
      printf("Digite um numero: ");
    scanf("%d", &a);

    numMenor = numMaior = a; 
    while (a >= 0)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &a);
        if ((a < numMenor) && (a >= 0))
            numMenor = a;
        if (a > numMaior)
            numMaior = a;        
    }
    
        
     printf("Numero Maior:%d \n Numero Menor:%d",numMaior,numMenor);
}