#include <stdio.h>
int descontoPadrao (float tarifa, int passagemInt){
    int valorDesconto;
    if(passagemInt<=2){
        valorDesconto=(passagemInt*tarifa)*0.10;
    } else
    if(passagemInt>5){
        valorDesconto=(passagemInt*tarifa)*0.20;
    }  else
    valorDesconto=(passagemInt*tarifa)*0.15;
    return valorDesconto;
}

int descontoFidelidade (int passagensMeia, int passagensInt){
    float desconto;
    if(passagensInt<passagensMeia){
        desconto=50.00;
    } else
    if (passagensInt>=(2*passagensMeia)){
        desconto=200.00;
    } else
    desconto=100;
    return desconto;
}

int main (void){
    int qtdPassagensInt, qtdPassagensMeia;
    float tarifaNormalInt, valorSemDesconto, tarifaMeia, valorFinal, descontoN, descontoF;
    char tipoCliente;
    printf("Qual o valor da tarifa normal inteira?:");
    scanf("%f", &tarifaNormalInt);
    printf("Qual o tipo do cliente?\nf-Possui cartao fidelidade\nn-Nao possui\n");
    scanf(" %c", &tipoCliente);
    printf("Quantidade de passagens inteiras:");
    scanf("%d", &qtdPassagensInt);
    printf("Quantidade de passagens meia:");
    scanf("%d", &qtdPassagensMeia);
    valorSemDesconto=(qtdPassagensInt*tarifaNormalInt)+(qtdPassagensMeia*(tarifaNormalInt*(0.5)));
    printf("Total sem desconto: %.2fR$", valorSemDesconto);
    descontoN=descontoPadrao(tarifaNormalInt, qtdPassagensInt);
    if (tipoCliente=='n'){
        valorFinal=valorSemDesconto-descontoN;
        printf("\nValor do desconto:%.2fR$", descontoN);
        printf("\nTotal a pagar:%.2fR$", valorFinal);
    } else{
    if (tipoCliente=='f'){
        descontoF=descontoFidelidade(qtdPassagensMeia, qtdPassagensInt);
        printf("\nValor do desconto: %.2fR$ (%.2f+%.2f)", descontoF+descontoN, descontoN, descontoF);
        valorFinal=valorSemDesconto-(descontoF+descontoN);
        printf("\nValor a pagar:%.2fR$", valorFinal);
    } }
    return 0;
}
