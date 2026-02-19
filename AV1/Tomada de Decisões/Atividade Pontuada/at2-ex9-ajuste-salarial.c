#include <stdio.h>
int main (void){
    int salarios, avaliacao, faltas, aumento;
    printf("O funcionario recebe o equivalente a quantos salarios minimos?");
    scanf("%d", &salarios);
    if (salarios<3){
        printf("Qual a avaliacao do funcionario?:");
        scanf("%d", &avaliacao);
        if (avaliacao>8){
            printf("Quantas faltas tem o funcionario?:");
            scanf("%d", &faltas);
            if (faltas==0){
                aumento=12;
            } else
            aumento=10;
        } else if (avaliacao<6){
            aumento=2;
        } else
        aumento=8;
    } else
    aumento=2;
    printf("O aumento salarial deve ser de %d%%", aumento);
    return 0;
}
