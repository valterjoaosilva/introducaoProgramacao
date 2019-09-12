#include <stdio.h>
/*3. Faça um algoritmo que calcule e escreva a soma da seguinte série de 100 termos:*/
int main(void){
    int i = 1;
    int soma = 0;

    while(i <= 5){
        soma = soma + i;
        i = i + 1;
    }
printf("%d\n", soma);
    return 0;
};
