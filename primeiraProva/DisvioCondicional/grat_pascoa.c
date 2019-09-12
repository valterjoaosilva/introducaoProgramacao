#include <stdio.h>
/*
 * 1. A 3NET decidiu dar a seus funcionários uma gratificação de Páscoa. Para cada empregado da empresa tem-se
nome, número de horas extras trabalhadas e número de faltas. Para calcular o prêmio, subtrai-se dois terços das
horas que o empregado não trabalhou de suas horas extras e atribui-se a gratificação segundo a tabela abaixo.
ht = horas extras - 2/3 * faltas gratificação
ht > 40 horas
1000,00
800,00
30 < ht ≤ 40
600,00
20 < ht ≤ 30
400,00
10 < ht ≤ 20
200,00
ht ≤ 10
Faça um algoritmo que leia as informações de um funcionário e calcule a sua gratificação.
 */
int main(void){
    float h_extras, n_faltas, h_faltas, ht, grat;
    char nome[20];

    printf("Informe o nome do funcionário: ");
    fgets(nome,20,stdin);

    printf("Informe a quantidade de horas extras: ");
    scanf("%f", &h_extras);

    printf("Informe a quantidade de faltas: ");
    scanf("%f", &n_faltas);

    h_faltas = n_faltas * 8;
    ht = h_extras -(2 * h_faltas) / 3;

    if(ht > 40){
        grat = 1000.00;
    } else if(ht > 30 && ht <= 40){
        grat = 800.00;
    }else if(ht > 20 && ht <= 30){
        grat = 600.00;
    }else if(ht > 10 && ht <= 20){
        grat = 400.00;
    }else{
        grat = 200.00;
    }
    printf("O funcionário %s, suas horas trabalhadas são %.2f, e sua gratificação é:R$ %.2f\n", nome, ht, grat);



    return 0;
}
