#include <stdio.h>
/*
 * 3. Escreva um algoritmo que leia três valores a, b e c, e calcule e escreva a média ponderada com pesos de 5
para o maior dos 3 valores e 2.5 para os outros 2 valores.
 */

int main(void){
    float a, b, c, MP;

    printf("digite a: ");
    scanf("%f", &a);

    printf("digite b: ");
    scanf("%f", &b);

    printf("digite c: ");
    scanf("%f", &c);

    if(a > b && a > c){
        MP = (a * 5.0 + b * 2.5 + c * 2.5) / 10;
    }else if(b > a && b > c){
        MP = (a * 2.5 + b * 5.0 + c * 2.5) / 10;
    } else{
        MP = (a * 2.5 + b * 2.5 + c * 5.0) / 10;
    }

    printf("A media do aluno é: %.2f.\n", MP);


    return 0;
}