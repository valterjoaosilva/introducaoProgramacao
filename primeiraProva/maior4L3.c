#include <stdio.h>
#include <stdlib.h>
int main(void){
int a, b, ABS, maior;

    printf("informe o valor de a: ");
    scanf("%d", &a);

    printf("informe o valor de b: ");
    scanf("%d", &b);


    maior = (a + b + (abs(a - b)))/2;
    printf("O maior é: %d", maior);

    return  0;
}