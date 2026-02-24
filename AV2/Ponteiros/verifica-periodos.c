#include <stdio.h>
int verificador (int periodo, int *min, int *max){
    if (periodo<=3){
        *min=2;
        *max=6;
    }else
    if (periodo>6){
        *min=1;
        *max=4;
    } else{
        *min=3;
        *max=5;
    }
    return 0;
}
int main(void){
    int matricula, periodo, minimo, maximo; 
    int *min=&minimo, *max=&maximo;
    printf("Insira a matricula do aluno (ou 0 para encerrar o programa):");
    scanf("%d", &matricula);
    while(matricula>0){
    printf("Insira o periodo do aluno:");
    scanf("%d", &periodo);
    verificador(periodo, min, max);
    printf("Minimo de disciplinas que o aluno pode cursar:%d\n", *min);
    printf("Maximo de disciplinas que o aluno pode cursar%d\n:", *max);
    printf("Insira a matricula do aluno (ou 0 para encerrar o programa):");
    scanf("%d", &matricula);
    }
    return 0;
}
