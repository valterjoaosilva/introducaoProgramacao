#include <stdio.h>
/* 6. Faça um algoritmo que leia nome e sobrenome de uma pessoa e escreva sobrenome seguido do nome.
int main(void){
    char nome1[20], nome2[20], nome3[20], nome4[20];

EXEMPLO: ‘João Carlos’, ‘Martins’ ⇒ ‘Martins’ ‘João Carlos’ */

 int main(void){

    char nome[20], sobrenome[20];


    printf("informe o nome: ");
    fgets(nome,20,stdin);

    printf("informe o sobrenome: ");
    fgets(sobrenome,20,stdin);

    printf("sobrenome e nome é: %s %s\n", sobrenome, nome);

    return  0;
}