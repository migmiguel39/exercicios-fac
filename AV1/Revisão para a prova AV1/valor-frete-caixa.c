#include <stdio.h>
float considerapeso (float vol){
    float valor, peso;
    printf("Qual o peso do produto?");
    scanf("%f", &peso);
     if (vol<=64000){
        if (peso>20){
            valor=80.00;
        } else
        valor=65.00;
    } else
    if (vol<=216000 && 30>=peso<=50){
        valor=100.00;
    } else
    valor=0;
       return valor;
}

int main(void){
    float comprimento, largura, altura, volume, peso, valor;
    printf("Insira o comprimento da caixa (em cm):");
    scanf("%f", &comprimento);
    printf("Insira a altura da caixa (em cm):");
    scanf("%f", &altura);
    printf("Insira a largura da caixa (em cm):");
    scanf("%f", &largura);
    volume=comprimento*largura*altura;
    if (volume<=8000){
        valor=30.00;
    } else
   valor=considerapeso(volume);
     if (valor>0){
       printf("Valor a se pagar: %.2f", valor);
   } else
   printf("Caixa fora das especificacoes.");
    return 0;
}
