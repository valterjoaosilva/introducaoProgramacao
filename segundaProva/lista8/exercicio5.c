#include <stdio.h>
/* 5. Faça um algoritmo que leia 20 números inteiros e escreva, para cada número lido, se é par ou ímpar.  */
int main(void){
    int num = 0;
    int i = 0;
    printf("Digite um número: ");
    while (i <= 20){
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d é par\n", num);

    }else{
        printf("%d é impar\n", num);
    }
    i = i + 1;
    }


    return 0;
}