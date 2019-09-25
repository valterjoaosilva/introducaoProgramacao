#include <stdio.h>
/*3. Faça um algoritmo que calcule e escreva a soma da seguinte série de 100 termos com do while:*/
int main(void){
    int i = 1;
    int soma = 0;

    do{
        soma = soma + i;
        i = i + 1;
    }(i <= 100)
    printf("%d\n", soma);
    return 0;
};
