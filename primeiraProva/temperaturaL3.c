#include <stdio.h>
/*
 * Faça um algoritmo que leia uma temperatura em °F e escreva o seu valor em °F e seu valor em °C da
seguinte forma:temperatura em graus Farenheit = valor lido
temperatura em graus Celsius = valor calculado
FÓRMULA: °F = 9 °C + 32
                 5 */

int main(void){
float F, C;

    printf("Digite a Temperatura em Farenheit: ");
    scanf("%f", &F);

    C = 5 * ((F - 32)/9);

    printf("Temperatura em Graus Farenheit = %.2f.\n", F);
    printf("Temperatura em Graus Celsius = %.2f.\n", C);


    return  0;
}