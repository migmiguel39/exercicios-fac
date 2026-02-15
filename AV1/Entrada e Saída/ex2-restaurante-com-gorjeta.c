#include <stdio.h>
int main(void){
   int percentGorjeta;
   float contaBruto, gorjeta, total;
   printf("Valor do prato:");
   scanf("%f", &contaBruto);
   printf("Insira o percentual de gorjeta:");
   scanf("%d", &percentGorjeta);
   gorjeta=contaBruto*(percentGorjeta/100.0);
   total=contaBruto+gorjeta;
   printf("Valor a pagar: %.2f\n Valor em gorgeta: %.2f", total, gorjeta);
   return 0;
}
