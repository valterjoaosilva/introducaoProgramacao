#include <stdio.h>

/*
 * 5. O cardápio de uma lanchonete é dado pela tabela abaixo
código      produtos                        preço unitário (R$)
 100     cachorro quente + refrigerante     3.00
101     misto quente + refrigerante         2.50
102     misto frio + refrigerante           2.00
103     queijo quente + refrigerante        2.25
Durante essa semana, a lanchonete está em promoção: para qualquer lanche de um mesmo tipo adquirido, leve 5
e pague 4. Faça um algoritmo que leia o código do pedido e o número de itens de um mesmo tipo a ser adquirido
por um consumidor e escreva o valor a pagar. Caso o código do pedido não seja válido, escreva apenas uma
mensagem de erro. O consumidor só pode pedir itens de um mesmo tipo.
 */
int main(void){
    int codigo, qtde;
    float total;

    printf("Informe o código do alimento: ");
    scanf("%d", &codigo);
    printf("Informe a quatidade do lanche: ");
    scanf("%d", &qtde);

    if(codigo >= 100 && codigo <= 103){
        if(codigo == 100){
            if(qtde < 5 ){
                total = qtde * 3.00;
            } else if(qtde % 5 == 0){
                total = (qtde - (qtde / 5)) * 3.00;
            } else if(qtde > 5){
                total = (qtde - qtde / 5 ) * 3.00;
            }
        }

        if(codigo == 101){
            if(qtde < 5 ){
                total = qtde * 2.50;
            } else if(qtde % 5 == 0){
                total = (qtde - (qtde / 5)) * 2.50;
            } else if(qtde > 5){
                total = (qtde - qtde / 5 ) * 2.50;
            }
        }

        if(codigo == 102){
            if(qtde < 5 ){
                total = qtde * 2.00;
            } else if(qtde % 5 == 0){
                total = (qtde - (qtde / 5)) * 2.00;
            } else if(qtde > 5){
                total = (qtde - qtde / 5 ) * 2.00;
            }
        }

        if(codigo == 103){
            if(qtde < 5 ){
                total = qtde * 2.25;
            } else if(qtde % 5 == 0){
                total = (qtde - (qtde / 5)) * 2.25;
            } else if(qtde > 5){
                total = (qtde - qtde / 5 ) * 2.25;
            }
        }


        printf("Código - Quantidade - Total\n");
        printf("   %d  -     %d     -  %.2f\n", codigo, qtde, total);
    }else{
        printf("código errado\n");
    }

    return 0;
}
