#include <stdio.h>
/*
 * 6. Escreva um algoritmo que leia 4 números inteiros (opção, n 1 , n 2 , n 3 ) e escreve-os da seguinte maneira:
se opção = 1 escreva o número n 1
se opção = 2 escreva o número n 2
se opção = 3 escreva o número n 3
se opção for outro valor qualquer escreva opção inválida
 */
int main(void){
    int n1, n2, n3, opcao;

    printf("Informe n1, n2 e n3\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    printf("\tESCOLHA SUA OPÇÃO\n");
    printf("\t=================\n");
    printf("Opção 1 = Escreva o número n1\n");
    printf("Opção 2 = Escreva o número n2\n");
    printf("Opção 3 = Escreva o número n3\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("\t   ********\n");
        printf("\t      *%d*\n", n1);
        printf("\t   ********\n");

    } else if(opcao == 2){
        printf("\t   ********\n");
        printf("\t      *%d*\n", n2);
        printf("\t   ********\n");
    }else if (opcao == 3){
        printf("\t   ********\n");
        printf("\t      *%d*\n", n3);
        printf("\t   ********\n");
    } else{
        printf("\t   Opção Inválida\n");
    }


    return 0;
}