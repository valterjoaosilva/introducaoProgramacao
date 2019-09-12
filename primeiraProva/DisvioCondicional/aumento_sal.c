#include <stdio.h>
/*
 * 11. Uma empresa decidiu conceder um aumento de salário a seus funcionários de acordo com a tabela:
em R$ índice de aumento
15% salário ≤ 400.00
12% 400.00 < salário ≤ 700.00
10% 700.00 < salário ≤ 1000.00
7% 1000.00 < salário ≤ 1500.00
4% 1500.00 < salário ≤ 2000.00
salário > 2000.00 sem aumento
Faça um algoritmo que leia o salário atual de um funcionário e escreva o índice de aumento e o valor do salário
corrigido.
 */
int main(void){
    float sal_atual, indice_aum, sal_cor;

    printf("Informe o salário atual: ");
    scanf("%f", &sal_atual);

    if(sal_atual <= 400.0){
        indice_aum = 15;
        sal_cor = sal_atual * 1.15;
    } else if(sal_atual > 400.0 && sal_atual <= 700.0){
        indice_aum = 12;
        sal_cor = sal_atual * 1.12;
    } else if(sal_atual > 700.0 && sal_atual <= 1000.0){
        indice_aum = 10;
        sal_cor = sal_atual * 1.10;
    } else if(sal_atual > 1000.0 && sal_atual <= 1500.0){
        indice_aum = 7;
        sal_cor = sal_atual * 1.07;
    } else if(sal_atual > 1500.0 && sal_atual <= 2000.0){
        indice_aum = 4;
        sal_cor = sal_atual * 1.04;
    }else{
        indice_aum = 0.0;
        sal_cor = sal_atual * 1.00;
    }
    printf("O indice de aumento foi de: %.2f e o salário corrigido é: %.2f\n", indice_aum, sal_cor);


    return 0;
}
