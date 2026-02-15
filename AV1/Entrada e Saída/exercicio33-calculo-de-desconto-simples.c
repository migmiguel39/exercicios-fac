#include <stdio.h>
int main(void){
   float valBruto, valDescontado;
   int percentualDesconto;
   printf("Insira o valor a ser descontado:");
   scanf("%f", &valBruto);
   printf("Insira o percentual de desconto:");
   scanf("%d", &percentualDesconto);
   valDescontado = valBruto*(1-(percentualDesconto/100.0));
   printf("Valor com desconto: %f", valDescontado);
   return 0;
}
