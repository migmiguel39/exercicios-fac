# Revisão para a prova AV1

## Descrição
Compilado de códigos desenvolvidos em aula para revisão de conteúdo para a primeira avaliação do semestre.

##Arquivos
- **soma-de-tres-valores.c**
    - Objetivo: O programa deve receber 3 números inteiros e devolver a soma dos 3 números.
    - Estrutura do código:
      - função “calculaSomaDe2Valores”: recebe dois valores e devolve a soma dos dois números.
      - função “calculaSomaDe3Valores”: recebe três valores e devolve a soma dos 3 sob a restrição de não poder usar o operador “+”, usando assim a função anterior.
      - função “main”: pergunta ao usuário os 3 números a serem somados e devolve a soma dos números usando a função “calculaSomaDe3Valores”.
    - Criação: 1 de outubro de 2025.

- **valor-frete-caixa.c**
    - Objetivo: O programa deve receber as medidas das três dimensões da caixa e o seu peso e definir o valor a ser pago ou a mensagem de que a caixa está fora das especificações da empresa fictícia.
    - Estrutura do código:
      - função “considerapeso”: recebe o volume da caixa e pergunta o seu peso. Se a caixa tiver volume menor ou igual a 64000cm³ e mais de 20kg, o valor a se pagar é 80 reais; se a caixa tiver menos de 20kg, o valor é 65 reais. Se a caixa tiver mais de 64000cm³ e volume menor ou igual a 216000cm³ e peso entre 30 a 50 quilos, o valor é 100 reais. Se não seguir nenhuma dessas especificações, o valor é tido como 0 (inválido).
        - função “main”: pergunta ao usuário o comprimento, a altura e a largura da caixa, e então usa esses valores para calcular o volume. Se o volume da caixa for menor ou igual a 8000cm³, o valor a se pagar é 30; senão, a função “considerapeso” é acionada para calcular o valor. Se o valor final for igual a 0, o programa mostra a mensagem de que a caixa está fora das especificações; se for maior, o programa mostra o valor a se pagar.
    - Criação: 8 de outubro de 2025.

- **avaliacao-produtos.c**
    - Objetivo: O programa recebe o número de consumidores que fizeram a avaliação de dois produtos (A e B), com duas notas de 0 a 5 por consumidor, e depois mostra a média de avaliações do produto A, a maior e a menor nota do produto B e o percentual de consumidores que deram nota 5 aos dois produtos.
    - Estrutura do código:
      - função “validador”: verifica se o número inserido pelo usuário é válido, isso é, se está no intervalo entre 0 a 5, e solicita uma nova resposta até que o número inserido seja válido.
      - função “main”: recebe o número de consumidores que avaliaram o produto e pergunta as notas do produto A e B uma vez para cada consumidor informado, com a função “validador” verificando a validade de cada avaliação dos produtos. Por fim, o programa calcula e exibe a média de avaliações do produto A, a maior e a menor nota do produto B e o percentual de consumidores que deram nota 5 para os dois produtos.
    - Criação: entre 14 e 19 de outubro de 2025. 
