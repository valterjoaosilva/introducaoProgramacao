#include <stdio.h>
#include <stdlib.h>

/*
 * 3. Escreva um algoritmo que leia a matrícula, as 3 notas obtidas por um aluno nas 3 verificações parciais e a
média dos exercícios (ME) que fazem parte da avaliação. Calcule a média de aproveitamento, usando a fórmula:
média de aproveitamento = VP1A + VP1B * 2 + VP2 * 3 + ME
                                        7
 */

int main(void){
    float vp1a, vp1b, vp2, me, map;
    int matricula;


    printf("Informe a matrícula: ");
    scanf("%d", &matricula);
    printf("Informe Vp1A: ");
    scanf("%f", &vp1a);
    printf("Informe Vp1B: ");
    scanf("%f", &vp1b);
    printf("Informe Vp2 ");
    scanf("%f", &vp2);
    printf("Informe ME: ");
    scanf("%f", &me);

    map = (vp1a + vp1b * 2 + vp2 *3 + me) / 7;

    if( map >= 9.0){
        printf("O aluno matrícula %d, \n", matricula);
        printf("Suas notas de verificação são: %.2f, %.2f, %.2f\n", vp1a, vp1b, vp2);
        printf("Sua média nos exercícios é: %.2f\n", me);
        printf("Sua média de aproveitamento é: %.2f\n", map);
        printf("aluno Conceito A e foi Aprovado\n");
    } else if(map < 9.0 && map >= 7.5){
        printf("O aluno matrícula %d, \n", matricula);
        printf("Suas notas de verificação são: %.2f, %.2f, %.2f\n", vp1a, vp1b, vp2);
        printf("Sua média nos exercícios é: %.2f\n", me);
        printf("Sua média de aproveitamento é: %.2f\n", map);
        printf("aluno Conceito B e foi Aprovado\n");

    } else if(map < 7.5 && map >= 6.0){
        printf("O aluno matrícula %d, \n", matricula);
        printf("Suas notas de verificação são: %.2f, %.2f, %.2f\n", vp1a, vp1b, vp2);
        printf("Sua média nos exercícios é: %.2f\n", me);
        printf("Sua média de aproveitamento é: %.2f\n", map);
        printf("aluno Conteito C e foi Aprovado\n");
    } else if(map < 6.0 && map >= 4.0){
        printf("O aluno matrícula %d, \n", matricula);
        printf("Suas notas de verificação são: %.2f, %.2f, %.2f\n", vp1a, vp1b, vp2);
        printf("Sua média nos exercícios é: %.2f\n", me);
        printf("Sua média de aproveitamento é: %.2f\n", map);
        printf("aluno Conceito D e foi Reprovado\n");
    } else{
        printf("O aluno matrícula %d, \n", matricula);
        printf("Suas notas de verificação são: %.2f, %.2f, %.2f\n", vp1a, vp1b, vp2);
        printf("Sua média nos exercícios é: %.2f\n", me);
        printf("Sua média de aproveitamento é: %.2f\n", map);
        printf("aluno Conceito E e foi Reprovado\n");
    }




    return 0;
}