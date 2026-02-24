# AV1 - Repetições

## Arquivo - notas-da-turma.c
### Descrição
O programa, desenvolvido entre 22 a 25 de setembro, lê dados de vários alunos e calcula a média final de cada aluno. Ele continua processando até que seja digitada a matrícula 0 para encerrar.

### Objetivo
Calcular a média individual do aluno, contar quantos alunos tiraram nota maior que 7 ou menor que 3, a média geral da turma e identificar a maior e a menor nota da turma.

### Estrutura do código
- Entrada de dados: matrícula, nota da prova e média dos trabalhos.
- Laço while: repete a coleta e cálculo enquanto a matrícula for maior que 0.
- Cálculo da média do aluno: mediaAluno=(0.85 x notaProva)+(0.15 x mediaTrabalhos)
- Acúmulo de estatísticas:
  - Soma das médias para calcular a média da turma.
  - Contagem de alunos com média > 7 e < 3.
  - Atualização da maior e menor nota encontrada..
- Saída final: imprime estatísticas da turma.
