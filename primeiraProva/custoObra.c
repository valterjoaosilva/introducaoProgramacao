#include <stdio.h>
/*
 * 9. Faça um algoritmo que leia uma quantidade de chuva em polegadas e escreva o equivalente em
milímetros.
FÓRMULA:
25,4 mm = 1 polegada
 */
int main(void){
    float pol, mm;

    printf("Informe a quantidade de chuvas em polegadas: ");
    scanf("%f", &pol);

    mm = pol * 25,4;
    printf("A quantidade de chuvas em polegadas é: %.2f, e em milimetros é: %.2f mm\n", pol, mm);

    return  0;
}