int main (void){
    int matricula, alunota7=0, alunota3=0, alunos;
    float notaProva, mediaTrabalhos, mediaAluno, notaTotalTurma=0, mediaTurma, menorNota=10, maiorNota=0;
    printf("Digite a matricula do aluno (ou digite 0 para encerrar o programa):");
    scanf("%d", &matricula);
    while (matricula>0){
        alunos++;
        printf("Qual foi a nota da prova desse aluno? (de 1 a 10)");
        scanf("%f", &notaProva);
        printf("Qual foi a media das notas desse aluno nos trabalhos?(de 1 a 10)");
        scanf("%f", &mediaTrabalhos);
        mediaAluno=(0.85*notaProva)+(0.15*mediaTrabalhos);
        notaTotalTurma+=mediaAluno;
        mediaTurma=notaTotalTurma/alunos;
        if (mediaAluno>7){
            alunota7++;
        } else if (mediaAluno<3){
            alunota3++;
        }
        printf("Media final do aluno:%.2f\n", mediaAluno);
        if (maiorNota<mediaAluno){
            maiorNota=mediaAluno;
        }
        if (menorNota>mediaAluno){
            menorNota=mediaAluno;
        }
        printf("Digite a matricula do proximo aluno (ou digite 0 para encerrar o programa):");
        scanf("%d", &matricula);
    }
    printf("Alunos com nota maior que 7: %d\n", alunota7);
    printf("Alunos com nota menor que 3: %d\n", alunota3);
    printf("Media da turma:%.2f\n", mediaTurma);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);
    return 0;
}
