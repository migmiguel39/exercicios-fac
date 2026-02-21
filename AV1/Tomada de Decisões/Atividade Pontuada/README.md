# Tomada de Decisões - Atividade Pontuada

Esta subpasta contém os códigos feitos para uma atividade avaliada, todos relacionados ao uso de estruturas de tomada de decisão e desenvolvidos no dia 2 de setembro de 2025. Cada exercício está descrito de forma resumida abaixo:

---

## Exercício 1 – at2-ex4-seguro-automotivo.c
- **Objetivo**: Calcular prêmio com base em idade, anos de CNH e sinistros.
- **Lógica**: O programa recebe a idade do condutor e, se ele tiver idade menor que 25:
  - com menos de 2 anos de CNH e ao menos um sinistro, seu prêmio será 1200 com 10% de acréscimo;
  - se tiver menos de 2 anos de CNH sem sinistro, seu prêmio será de exatamente 1200;
  - se tiver 2 ou mais anos de CNH, seu prêmio de 1200 será descontado em 10%. 
Agora, se o condutor tiver idade maior ou igual a 25:
  - com sinistros, o prêmio será de 800;
  - sem sinistro, o prêmio de 800 terá 25% de desconto.
- **Estruturas**: Condicionais aninhadas.

---

## Exercício 2 – at2-ex5-bolsa-de-estudos.c
- **Objetivo**: Verificar elegibilidade para bolsa de estudos com base em renda, CR e carga horária.
- **Lógica**: O programa recebe a renda per capta da família e:
  - se ela for maior que 2000, a bolsa é negada;
  - se a renda for menor ou igual a 2000, é perguntado o CR do aluno;
    - se o CR do aluno for menor que 8, ele tem acesso a bolsa parcial;
    - senão, é perguntada a carga horária;
      - se a carga horária for menor que 20, o aluno tem acesso a bolsa parcial
      - senão, o aluno tem acesso a bolsa integral
- **Estruturas**: Condicionais aninhadas.

---

## Exercício 3 – at2-ex8-qualidade-de-lote.c
- **Objetivo**: Classificar lotes considerando média, desvio e refugo.
- **Lógica**: O programa recebe a qualidade média do lote e:
  - se a média for menor que 70, o lote é reprovado;
  - se a média for maior ou igual a 70, o programa pergunta de quanto é o desvio;
    - se o desvio for maior que 15, o lote é considerado irregular;
    - senão, é perguntado o refugo;
      - se o refugo é maior que 5%, o lote tem aceitação condicional;
      - senão, o lote tem aceitação plena.
- **Estruturas**: Condicionais aninhadas.

---

## Exercício 4 – at2-ex9-ajuste-salarial.c
- **Objetivo**: Conceder aumento diferente considerando faixa salarial, avaliação e faltas.
- **Lógica**: O programa pergunta o quanto o funcionário recebe em salários mínimos, e:
  - se o funcionário recebe mais de 3 salários mínimos, ele recebe 2% de aumento;
  - senão, o programa pergunta qual a avaliação do funcionário;
    - se a avaliação for menor que 6, ele também recebe 2% de aumento;
    - se a avaliação for maior ou igual a 6 e menor que 8, ele recebe 8% de aumento;
    - se a avaliação for maior que 8, o programa pergunta quantas faltas tem o funcionário;
      - se o funcionário tiver faltas, ele recebe 10% de aumento;
      - senão, ele recebe 12% de aumento;
- **Estruturas**: Condicionais aninhadas.
