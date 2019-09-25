#include <stdio.h>
/* 6. Uma turma tem 50 alunos. Faça um algoritmo que:
• leia para cada aluno o seu nome e idade;
• escreva os nomes dos alunos que tem 18 anos;
• escreva a quantidade de alunos que tem idade acima de 20 anos.  */

int main(){
    char nome[30];
    int idade, quantidade = 0, i = 0;


    do{
        printf("Digite o nome do Aluno:\n ");
        fgets(nome, 30, stdin);

        printf("Digite a idade do Aluno: ");
        scanf("%d", &idade);

        if(idade == 18){
            printf("Nome do Aluno: %s, idade: %d\n", nome, idade);
        }
        if(idade > 20){
            quantidade = quantidade +1;



        }
        setbuf(stdin, NULL);

        i = i + 1;


    }while(i < 5);
    printf("O número de alunos maiores de 20 anos são: %d\n ", quantidade);













    return 0;
}