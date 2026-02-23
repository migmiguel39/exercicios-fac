#include <stdio.h>
int calculaSomaDe2Valores (int a, int b){
   return a+b;
}


int calculaSomaDe3Valores (int prim, int seg, int ter){
   int soma;
   soma=calculaSomaDe2Valores(prim, seg);
   return calculaSomaDe2Valores(soma, ter);
}


int main (void){
   int valor1, valor2, valor3;
   printf("Insira os três valores inteiros a serem somados:");
   scanf("%d %d %d", &valor1, &valor2, &valor3);
   printf ("o resultado é: %d", calculaSomaDe3Valores(valor1, valor2, valor3));
   return 0;
}
