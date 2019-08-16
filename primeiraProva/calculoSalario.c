#include <stdio.h>
/*8. Uma empresa tem para um funcionário os seguintes dados: o nome do funcionário, o número de horas
trabalhadas mensais e o número de dependentes. A empresa paga R$ 10,00 por hora (valor para cálculo do
salário trabalho) e R$ 60,00 por dependente (valor para cálculo do salário família) e são feitos descontos de
8,5% sobre o salário trabalho para o INSS e de 5% sobre o salário trabalho para o imposto de renda. Faça
        um algoritmo que escreva o nome, o salário bruto e o salário líqüido do funcionário. */

int main(void){
    float salarioBruto, saliquido, nHorasmes, inss, irpf;
    char nomeFunc[30];
    int nDependentes;

    printf("Informe o nome do Funcionário: ");
    fgets(nomeFunc,30, stdin);

    printf("Informe as horas trabalhadas no mês: ");
    scanf("%f", &nHorasmes);

    printf("Informe o número dependentes: ");
    scanf("%d", &nDependentes);

    salarioBruto = ((nHorasmes * 10) + (nDependentes * 60));
    inss = salarioBruto * 0.085;
    irpf = salarioBruto * 0.05;
    saliquido = salarioBruto - inss - irpf;
    printf("Funcionario %s Salario Bruto %f Salário Liquido %f\n ", nomeFunc, salarioBruto, saliquido);

    return 0;
}