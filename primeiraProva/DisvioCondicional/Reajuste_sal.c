#include <stdio.h>
int main(void){
    float sal_atual, sal_novo;
    char nome[30], categoria;

    printf("Informe o nome: ");
    fgets(nome,30,stdin);
    printf("Informe a categoria: ");
    scanf("%c", &categoria);
    printf("Informe o Salário Atual: ");
    scanf("%f", &sal_atual);

    if(categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H'){
        sal_novo = sal_atual * 1.10;
    } else if(categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'G'){
        sal_novo = sal_atual * 1.15;
    }else if(categoria == 'I' || categoria == 'K' || categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O'
            || categoria == 'P' || categoria == 'Q' || categoria == 'R'){
        sal_novo = sal_atual * 1.20;
    }else if(categoria == 'J' || categoria == 'S' || categoria == 'T' || categoria == 'U' || categoria == 'V' || categoria == 'X'
            || categoria == 'Z'){
        sal_novo = sal_atual * 1.25;
    }
    printf("O Funcionário %s seu salario reajustado é %.2f\n", nome, sal_novo);

    return 0;
}