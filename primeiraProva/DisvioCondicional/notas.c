#include <stdio.h>
int main(void){
    int nota1, nota2, nota3;
    float media;

    printf("nota1: ");
    scanf("%d", &nota1);

    printf("nota2: ");
    scanf("%d", &nota2);

    printf("nota3: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 6){
        printf("Aluno Aprovado\n");
    }else{
        printf("Aluno Reprovado\n");
    }


    return 0;
}