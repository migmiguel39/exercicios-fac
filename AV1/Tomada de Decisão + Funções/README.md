# Tomada de Decisão + Funções

## Arquivo: calculo-de-descontos-em-passagens.c

### Descrição
Programa em C que calcula o valor de passagens aéreas baseado em diferentes regras de desconto para clientes com ou sem cartão fidelidade.

## Funções
- Desconto padrão: Calcula desconto percentual com base no número de passagens inteiras compradas, sendo 10% de desconto até 2 passagens, 15% de 3 a 5 passagens e 20% a partir de 5.
- Desconto fidelidade: Recebe como parâmetros a quantidade de passagens do tipo meia e inteiras e retorna o valor total do desconto fidelidade, sendo 50 reais de desconto se o número de inteiras for menor que o de meias; 100 reais se for maior ou igual; e 200 reais se for pelo menos o dobro.
- Main: Coleta os dados do usuário, calcula o valor das passagens sem desconto, aplica as regras de desconto conforme o tipo de cliente e exibe o total a pagar.
