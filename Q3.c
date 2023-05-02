#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define volume(a) ((4/3.0) * 3.14 * pow(a,3))
#define area(b) ((4/3.0) * 3.14 * pow(b,2))

int main(){
    float r, resultado,resultado2;

    printf("Digite o raio da esfera:");
    scanf("%f",&r);
   

    resultado = volume(r);
    resultado2 = area(r);

    printf("Volume da esfera:%.2f\nArea da esfera:%.2f",resultado,resultado2);

}