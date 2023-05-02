#include <stdio.h>
#include <stdlib.h>

int main() {
   int n, f1 = 0, f2 = 1, nproximo, i, id;

    
   printf("Quantos termos da sequencia sera exibido? ");
   scanf("%d", &n);

   printf("Sequencia de Fibonacci: ");

   for (i = 1; i <= n; ++i) {
      printf("%d, ", f1);
      nproximo = f1 + f2;
      f1 = f2;
      f2 = nproximo;
   }

   printf("\nDigite um termo para ser exibido: ");
   scanf("%d", &id);

   f1 = 0;
   f2 = 1;

   for (i = 1; i <= id; ++i) {
      nproximo= f1 + f2;
      f1 = f2;
      f2 = nproximo;
   }

   printf("O valor do termo escolhido %d e: %d", id, f1);

   return 0;
}