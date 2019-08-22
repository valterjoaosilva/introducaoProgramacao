#include <stdio.h>
/*
 * Considere duas variáveis inteiras A e B. Faça um algoritmo que leia dois valores inteiros para A e B e
efetue a troca dos valores de A e B de maneira que A fique com o valor de B e B com o valor de A.
 */

int main(void){
    int A, B, aux;

    printf("Informe A: ");
    scanf("%d", &A);

    printf("Informe B: ");
    scanf("%d", &B);

    aux = A;
    A = B;
    B = aux;

    printf("A = %d, B = %d.\n", A, B);

    return 0;
}