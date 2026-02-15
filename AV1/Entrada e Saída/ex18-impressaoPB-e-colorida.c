#include <stdio.h>
int main(void){
   int paginasPB, paginasColor;
   float custoPB, custoColor, custoTotalPB, custoTotalColor;
   printf("Qual o valor das impressoes em preto e branco?:");
   scanf("%f", &custoPB);
   printf("Insira a quantidade de folhas em preto e branco");
   scanf("%d", &paginasPB);
   printf("Qual o valor das impressoes coloridas?");
   scanf("%f",&custoColor);
   printf("Quantas paginas coloridas serao impressas?");
   scanf("%d", &paginasColor);
   custoTotalPB=paginasPB*custoPB;
   custoTotalColor=paginasColor*custoColor;
   printf("Custo total em preto e branco:%.2f\nCusto total em colorida:%.2f", custoTotalPB, custoTotalPB);
   return 0;
}
