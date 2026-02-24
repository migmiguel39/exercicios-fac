# AV2 - Ponteiros

## Descrição
Pasta contendo exercício realizado no dia 31 de outubro de 2025 voltado ao uso de ponteiros.

## Arquivo - verifica-periodos.c

### Objetivo
O programa deve mostrar para o usuário, um estudante do ensino superior, o número mínimo e máximo de disciplinas que ele pode cursar.

### Estrutura do código
função “verificador”: recebe o período do aluno e o endereço de duas variáveis (*min e *max). 
Se o aluno estiver cursando o terceiro período ou inferior, *min é preenchido com 2 e *max com 6;
Se o aluno estiver cursando entre o quarto e o sexto período, *min é preenchido com 3 e *max com 5;
Acima do sexto periodo, o *min é preenchido com 1 e *max é preenchido com 4.
função “main”: pergunta a matrícula do aluno e o seu período, então usa a função “verificador” e os dados retornados por ela para mostrar ao aluno o número máximo e mínimo de disciplinas que o aluno pode cursar. O programa então torna a perguntar a matrícula do aluno e só termina quando o usuário inserir 0 como matrícula.
