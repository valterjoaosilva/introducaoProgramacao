#include <stdio.h>
/*
12. Considere que o salário líquido de um funcionário é calculado através de um desconto de 10% do seu
        salário bruto como contribuição para a previdência social. E, feito esse desconto, são descontados 30%
sobre o valor restante para vale alimentação. Faça um algoritmo que determine qual é o salário líqüido de
        um funcionário.*/
int main(void){
    float salario, salprev, salarioliq;
    printf("Informe o salário: ");
    scanf("%f", &salario);
    salprev = salario - (salario * 0.10);
    salarioliq = salprev - (salprev * 0.30);

    printf("O salario é %.2f, com desconto do inss fica %.2f, com o desconto de alimentação o salario liquido será %.2f.", salario, salprev, salarioliq );
    return 0;
}