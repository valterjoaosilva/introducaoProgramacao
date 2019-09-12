#include <stdio.h>

/*
 *4. Faça um algoritmo que leia 2 números, o primeiro é o código da moeda de um país e o segundo é um valor
naquela moeda. Escreva o valor seguido do nome da moeda. As moedas foram codificadas da seguinte forma
 */

int main(void){

    int cod, valor;

    printf("informe o código da moeda: ");
    scanf("%d", &cod);

    printf("informe o valor: ");
    scanf("%d", &valor);

    if(cod == 1){
        printf("%d - %d - libra esterlina\n", cod, valor );
    } else if(cod == 2){
        printf("%d - %d - franco suiço\n", cod, valor );
    } else if(cod == 3){
        printf("%d - %d - dólar americano\n", cod, valor );
    } else if(cod == 4){
        printf("%d - %d - marco alemão\n", cod, valor );
    }else if(cod == 5 ){
        printf("%d - %d - real\n", cod, valor );
    }else{
        printf("Código incorreto\n");
    }
}