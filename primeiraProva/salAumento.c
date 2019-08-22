#include <stdio.h>
/*
 * Considere que o aumento de um funcionário é de 80% do INPC e mais um percentual de produtividade
calculado sobre o salário atual do funcionário. Escreva um algoritmo que leia número do funcionário, salário
atual, valor do INPC e percentual de produtividade conquistado e escreva número do funcionário, o
aumento e o valor do novo salário.
 */
int main(void){
    float inpc, pp, salAtual, aumento, novoSal;
    int nf;

    printf("informe o número do funcionário: ");
    scanf("%d", &nf);

    printf("Informe o INPC: ");
    scanf("%f", &inpc);

    printf("Informe o Percentual de Produtividade: ");
    scanf("%f", &pp);

    printf("informe o Salário Atual: ");
    scanf("%f", &salAtual);

    novoSal = (salAtual * (((inpc * 0.80) / 100) +1)) + (salAtual * (pp / 100));

    aumento = novoSal - salAtual;

    printf("O Funcionário %d, recebeu aumento de %.2f, seu novo salário é: %.2f.", nf, aumento, novoSal);
    return 0;
}