#include <stdio.h>
/*
 * Fa¸ca um programa que o usu´ario digite dois valores e se
o segundo valor for maior que o primeiro, mostre a
mensagem “ACERTOU”. Caso contr´ario, mostre a
mensagem ”ERROU”.
 */
int main(void){
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if(num1 < num2){
        printf("Acertou\n");
    } else{
        printf("Errou\n");
    }
    return 0;
}


