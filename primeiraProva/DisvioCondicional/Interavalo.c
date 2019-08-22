#include <stdio.h>
/*
 * Elaborar um programa que informe se o n´umero
inteiro digitado pelo usu´ario est´a no intervalo fechado
entre 10 e 100. Se o valor estiver no intervalo escreva
”NO INTERVALO”, caso contr´ario, escreva ”FORA DO
INTERVALO”.
 */

int main(void){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num >= 10 && num <= 100){
        printf("NO INTERVALO\n");
    }else{
        printf("FORA DO INTERVALO\n");
    }

    return 0;
}