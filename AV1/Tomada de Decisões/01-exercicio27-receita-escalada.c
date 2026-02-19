#include <stdio.h>
int main(void){
   int porcoesBase, porcoesDesejadas,farinhaNecessidade, qtSacos;
   float farinhaPorPorção, farinhaBase ;
   printf("Quantas porcoes sao pedidas na receita base?");
   scanf("%d", &porcoesBase);
   printf("Quantas porcoes serao feitas?");
   scanf("%d", &porcoesDesejadas);
   printf("Uma porcao tem quantos gramas de farinha?");
   scanf("%f", &farinhaPorPorção);
   farinhaBase=porcoesBase*farinhaPorPorção;
   farinhaNecessidade=porcoesDesejadas*farinhaBase;
   qtSacos=farinhaNecessidade/1000;
   if (farinhaNecessidade%1000!=0){
       qtSacos=qtSacos+1;
   }
   printf("Farinha base:%.2f g", farinhaBase);
   printf("Farinha necessaria:%d g", farinhaNecessidade);
   printf("Serao necessarios %d sacos de farinha", qtSacos);
   return 0;
}
