#include <stdio.h>
int main(void){
   int media, desvio, refugo;
   printf("Insira a qualidade media do lote:");
   scanf("%d", &media);
   if (media>=70){
       printf("Insira o desvio:");
       scanf("%d", &desvio);
       if (desvio<=15){
           printf("Insira o porcento do refugo (apenas os numeros):");
           scanf("%d", &refugo);
           if (refugo>5){
               printf("Aceito de forma condicional.");
           } else
           printf("Aceito de forma plena.");
       } else
       printf("Lote irregular.");
   } else
   printf("Reprovado.");
   return 0;
}
