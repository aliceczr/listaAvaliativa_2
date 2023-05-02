#include <stdio.h>
#include <stdlib.h>

int main(){
    float a[10], r = 0, media;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o valor: ");
        scanf("%f", &a[i]);

        
        r = r + a[i];
    }
    media = (r)/10;

    printf("\nMedia = %.2f", media);

    return 0;
    
}