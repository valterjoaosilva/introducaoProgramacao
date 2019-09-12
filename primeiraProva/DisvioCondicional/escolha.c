#include <stdio.h>
/*
 * 1. Faça um algoritmo leia um caracter indicando uma opção
se opção = ‘T’ ou opção = ‘t’ ⇒ calcular a área de um triângulo de base b e altura h
se opção = ‘Q’ ou opção = ‘q’ ⇒
calcular a área de um quadrado de lado l
se opção = ‘R’ ou opção = ‘r’ ⇒ calcular a área de um retângulo de base b e altura h
 */

int main(void){
    float triangulo, quadrado, retangulo, b, h, l;
    char opcao;

    printf("Informe a letra de sua opção: T, Q ou R\n");
    scanf("%c", &opcao);

    if((opcao == 'T') || (opcao == 't')){
        printf("Calcular a área de um triangulo\n");
        printf("Informe a base e altura\n");
        scanf("%f", &b);
        scanf("%f", &h);
        triangulo = (b * h) / 2;
        printf("%.2f\n", triangulo);
    } else if((opcao == 'Q') || (opcao == 'q')){
        printf("Calcular a área de um quadrado\n");
        printf("Informe o lado\n");
        scanf("%f", &l);
        quadrado = l * l;
        printf("%.2f\n", quadrado);
    }else if((opcao == 'R') || (opcao == 'r')){
        printf("Calcular a área de um retangulo\n");
        printf("Informe a base e altura\n");
        scanf("%f", &b);
        scanf("%f", &h);
        retangulo = (b * h);
        printf("%.2f\n", retangulo);
    }else{
        printf("Opção incorreta\n");
    }


    return 0;
}