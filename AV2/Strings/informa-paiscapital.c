#include <stdio.h>
#include <string.h>
void buscarPais(char vPaises[5][16], char vCapitais[5][15], char vInput[15]){
    int i, encontrado=0;
       for(i=0;i<5;i++){
           if(strcmp(vInput, vPaises[i])==0){
               printf("%s é a capital de %s.\n", vCapitais[i], vPaises[i]);
               encontrado=1;
           }
       }
       if(encontrado!=1){
           printf("País não encontrada.\n");
       }
}

void buscarCapital(char vPaises[5][16], char vCapitais[5][15], char vInput[15]){
    int i, encontrado=0;
       for(i=0;i<5;i++){
           if(strcmp(vInput, vCapitais[i])==0){
               printf("%s é capital de %s.\n", vCapitais[i], vPaises[i]);
               encontrado=1;
           }
       }
       if(encontrado!=1){
           printf("Capital não encontrada.\n");
       }
}

int main(void){
    int i;
    char escolha;
    char vInput[15];
   char vPaises[5][16]={"Canada", "Inglaterra", "France", "El Salvador", "Estados Unidos"};
   char vCapitais[5][15]={"Ottawa", "Londres", "Paris", "San Salvador", "Washington"};
   printf("Escolha o que voce deseja ver:\nP-Países\nC-Capitais\nF-Fim\n");
   scanf("%c", &escolha);
   while(escolha!='F'){
   if(escolha=='P'|| escolha=='p'){
       printf("De qual país é a capital que você quer ver?\n");
       scanf(" %[^\n]", vInput);
       buscarPais(vPaises, vCapitais, vInput);
   } else
   if(escolha=='C'|| escolha=='c'){
       printf("Qual a capital do país que você quer ver?\n");
       scanf(" %[^\n]", vInput);
       buscarCapital(vPaises, vCapitais, vInput);
   } else
   printf("Escolha o que voce deseja ver:\nP-Países\nC-Capitais\nF-Fim\n");
   scanf("%c", &escolha);
   }
   return 0;
}
