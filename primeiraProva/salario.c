#include <stdio.h>
/*7. Escreva um algoritmo que leia o número de horas trabalhadas mensais de um funcionário, o valor que
recebe por hora e o número de dependentes. Calcule o salário bruto deste funcionário, sabendo que cada
dependente acrescenta 10% ao salário.  */

int main(void){
    int nDependentes, numeroHoras, valorHora, salario, salarioBruto;

    printf("Informe o valor hora: ");
    scanf("%d", &valorHora);

    printf("Informe o número de horas: ");
    scanf("%d", &numeroHoras);

    printf("informe o número de dependentes: ");
    scanf("%d", &nDependentes);

    salario = numeroHoras * valorHora;
    salarioBruto = ((salario / 10)* nDependentes )+ salario;

    printf("O salário bruto é: %d\n", salarioBruto);s

    return  0;
}


