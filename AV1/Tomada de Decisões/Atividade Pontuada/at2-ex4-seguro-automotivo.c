#include <stdio.h>
int main(void){
    int idade, sinistros, tempoCNH;
    float valPremio;
    printf("Insira a idade do condutor:");
    scanf("%d", &idade);
    if (idade<25){
        printf("Quanto anos de CNH tem o condutor?:");
        scanf("%d", &tempoCNH);
        if(tempoCNH<2){
            valPremio=1200;
        } else {
        printf("Quantos sinistros o condutor já teve?:");
        scanf("%d", &sinistros);
        if (sinistros==0) {
            valPremio=1200-(1200*0.10);
        } else
        valPremio=1200+(1200*0.20);}
    } else {
    if (idade>=25){
        printf("Quantos sinistros teve o condutor?");
        scanf("%d", &sinistros);
        if (sinistros==0){
            valPremio=1200-(1200*0.10);
        } else {
        printf("Quanto anos de CNH tem o condutor?:");
        scanf("%d", &tempoCNH);
        if (tempoCNH>=2){
            valPremio=800;
        } else
        valPremio=800-(800*0.25);
        }
    }
    }
