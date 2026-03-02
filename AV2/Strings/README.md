# AV2 - Strings

## Descrição
Pasta contendo meu primeiro exercício de strings.

## Arquivo **informa-paiscapital.c**
### Objetivo
Introdução ao uso de strings a partir de um código que pede a entrada de um nome de país e devolve a sua capital ou vice-versa.

### Estrutura do código
- função “buscarPais”: Recebe como parâmetro a capital que o usuário inseriu, a lista de capitais e a lista de países. A função compara as duas listas para encontrar de qual país é a capital inserida e então exibe a resposta ao usuário.
- função “buscarCapital”: Recebe como parâmetro o país que o usuário inseriu, a lista de capitais e a lista de países. A função compara as duas listas para encontrar qual é a capital do país inserido e então exibe a resposta ao usuário.
- função “main”: O programa pergunta ao usuário se ele quer buscar por país (P), capital (C) ou se quer finalizar o programa (F). Enquanto o programa não for finalizado, ele continua rodando.
    - Se o usuário digitar qualquer coisa além de P, C ou F, o programa repete a primeira pergunta.
    - Se digitar F, o programa termina.
    - Se digitar P, o programa pede o nome de um país e aciona a função buscarPais, que mostra a capital correspondente.
    - Se digitar C, o programa pede o nome de uma capital e aciona a função buscarCapital, que mostra o país correspondente.
