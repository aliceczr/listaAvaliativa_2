#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,p1,p2,p3,soma=0,i;

    printf("Escolha a fruta desejada 1- Maca \n 2- Abacaxi \n 3-Pera \nPara sair digite 0:");
    scanf("%d",&num);
   


do
{
   

    
  
    printf("Escolha a fruta desejada 1- Maca \n 2- Abacaxi \n 3-Pera \nPara sair digite 0:");
    scanf("%d",&num);   
        
    switch (num)
    {
    case 1:
        printf("Maca:R$1,00");
        p1 = 1;
         soma=soma+p1;
        break;
    case 2:
        printf("Abaxi:R$5,00");
        p2 = 5;
        soma=soma+p2;

        break;
    case 3:
        printf("Pera:R$4,00");
        p3 = 4;
        soma=soma+p3;
    default :
        printf("Voce saiu do menu!");
        break;
    
     

   }  
} while (num != 0);
     

     printf("\nValor total = %d",soma);
}