#include <stdio.h>
int main (void){
   int cr, carga;
   float renda;
   printf("Insira a renda per capta da sua familia:");
   scanf("%f", &renda);
   if (renda<=2000){
       printf("Qual o seu CR?:");
       scanf("%d", &cr);
       if (cr>=8){
           printf("Qual a sua carga horaria?:");
           scanf("%d", &carga);
           if (carga>=20){
               printf("Tens direito a bolsa integral.");
           } else
           printf("Tens direito a bolsa parcial.");
       } else
       printf("Tens direito a bolsa parcial.");
   } else
   printf("Bolsa negada.");
   return 0;
}
