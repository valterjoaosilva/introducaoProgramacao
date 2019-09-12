#include <stdio.h>

/*
 * 3. Faça um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias
pré-mirim 5 - 7 anos   -   mirim 8 - 10 anos   -  infantil 11 - 13 anos  -  infanto-juvenil 14 - 17 anos
juvenil 18 - 20 anos  -  adulto maiores de 21 anos
 */

int main(void){
    int idade;

    printf("informe a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 21 ){
        printf("Nadador categoria adulto\n");
    } else if(idade < 21 && idade >= 18 ){
        printf("Nadador categoria Juvenil\n");
    } else if(idade < 18 && idade >= 14){
        printf("Nadador categoria infanto juvenil\n");
    }else if(idade < 14 && idade >= 11){
        printf("Nadador categoria infantil\n ");
    } else if(idade < 11 && idade >= 8){
        printf("Nadador categoria mirim\n");
    } else{
        printf("Nadador categoria pré mirim\n");
    }

    return 0;
}