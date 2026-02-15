#include <stdio.h>
int main(void){
   int nPessoas, percentGorjeta;
   float totalConta, totalComGorjeta, valorPorPessoa;
   printf("Qual o valor da conta:");
   scanf("%f", &totalConta);
   printf("Insira o percentual de gorjeta:");
   scanf("%d", &percentGorjeta);
   printf("Para quantas pessoas?:");
   scanf("%i", &nPessoas);
   totalComGorjeta=totalConta*(1+(percentGorjeta/100.00));
   valorPorPessoa=totalComGorjeta/nPessoas;
printf("Valor a pagar:%.2f\nValor por pessoa:%.2f", totalComGorjeta, valorPorPessoa);
   return 0;
}
