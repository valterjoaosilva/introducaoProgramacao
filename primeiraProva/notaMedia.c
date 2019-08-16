#include <stdio.h>

/* 10. Faça um algoritmo que leia o nome de um aluno, as três notas obtidas no decorrer do semestre (n1, n2,
n3) e os respectivos pesos (p1, p2, p3). Escreva o nome e a média final ponderada do aluno. */


int main(void){
    float n1, n2, n3, mediaF;
    int p1, p2, p3;
    char nomeAluno[20];

    printf("Sistema de Notas de Alunos\n================================\n");
    printf("Informe nome do Aluno: ");
    fgets(nomeAluno,20,stdin);

    printf("Informe as notas\n=========================\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    printf("Informe os pesos de cada nota\n================================\n");
    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);

    mediaF = ((n1 * p1 + n2 * p2 + n3 * p3)/(p1 + p2 + p3));

    printf("Aluno %s Tem média é %2f\n", nomeAluno, mediaF);

    return 0;
}