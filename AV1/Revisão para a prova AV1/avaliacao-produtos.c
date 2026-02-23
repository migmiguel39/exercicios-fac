#include <stdio.h>
int validador (int nota){
    while (nota<0 || nota>5){
        printf("Insira uma nota valida (entre 0 e 5):");
        scanf("%d", &nota);
    }
    return nota;
}

int main(void){
    int nota, notaA, notaB, avaliadores, jaFiz=0, menorB=6, maiorB=-1, ambos=0;
    float mediaA, Atotal=0, percentAmbos;
    printf("Insira a quantidade de avaliadores:");
    scanf("%d", &avaliadores);
    while(avaliadores>jaFiz){
        jaFiz++;
        printf("Insira uma nota entre 0 e 5 para o produto A:");
        scanf("%d", &nota);
        notaA=validador(nota);
        printf("Insira uma nota entre 0 e 5 para o produto B:");
        scanf("%d", &nota);
        notaB=validador(nota);
        Atotal+=notaA;
        if (notaB>maiorB){
            maiorB=notaB;
        }
        if (notaB<menorB){
            menorB=notaB;
        }
        if (notaA==5 && notaB==5){
            ambos++;
        }
    }
    mediaA=Atotal/avaliadores;
    percentAmbos=((float)ambos/avaliadores)*100;
    printf("Media das avaliações A: %.2f", mediaA);
    printf("\nMenor nota de B: %d", menorB);
    printf("\nMaior nota de B: %d", maiorB);
    printf("\nPercentual de consumidores que deram nota 5 para os dois produtos: %.2f", percentAmbos);
    return 0;
}
