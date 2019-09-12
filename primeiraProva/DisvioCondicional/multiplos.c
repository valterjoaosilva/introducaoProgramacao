#include <stdio.h>
/*
 * 5. Escreva um algoritmo que leia 2 valores inteiros, a e b, e escreve-os juntamente com a mensagem ‘são
múltiplos’ ou ‘não são múltiplos’, conforme o caso.
 */
int main(void){
    int A, B;

    printf("Digite um número inteiro para A: ");
    scanf("%d", &A);

    printf("Digite um número inteiro para B: ");
    scanf("%d", &B);

    if(A % B == 0 || B % A == 0){
        printf("São Multiplos\n");
    } else{
        printf("Não São Multiplos\n");
    }

    return 0;
}