#include <stdio.h>
int main(void){
int aliquota, qtd;
float precoUnitario, subtotal, imposto, total;
printf("Insira o preço do produto:");
scanf("%f", &precoUnitario);
printf("Insira a quantidade de produtos:");
scanf("%d", &qtd);
printf("Informe a aliquota sobre o produto:");
scanf("%d", &aliquota);
subtotal=precoUnitario*qtd;
imposto=subtotal*(aliquota/100.0);
total=subtotal+imposto;
printf("Subtotal:%f \nImposto:%f \nValor a pagar:%f", subtotal, imposto, total);
   return 0;
}
