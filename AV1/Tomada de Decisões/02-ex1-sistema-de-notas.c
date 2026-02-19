#include <stdio.h>
int main(void){
   float nt1,nt2,media;
   int faltas;
   printf(" Digite as duas notas:");
   scanf("%f %f",&nt1,&nt2);
   printf("Digite a qtdade de faltas");
   scanf("%d",&faltas);
   if(faltas>20){
       printf("Você está reprovado");
       return 0;
   }
   media = (nt1+nt2)/2;
   printf("Media = %.1f",media);
   if(media>=6){
       printf("\n Parabéns!! Vc está aprovado.");
       if(media>=9){
           printf("\nVoce pode ser monitor!");
       }
   }
   else{
       printf("\nNão aprovado");
       if(media<4){
           printf("e Reprovado.");
       }
       else{
           printf("\nVoce devera fazer a avaliacao final.");
       }
   }
   return 0;
}
