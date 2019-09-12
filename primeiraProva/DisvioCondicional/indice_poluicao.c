#include <stdio.h>
/*
 * 4. O departamento do meio ambiente mantém 3 listas (lista A, lista B e lista C) de indústrias conhecidas por serem
altamente poluentes da atmosfera. Os resultados de várias medidas são combinados para formar o que é
chamado de “índice de poluição”. Isso é controlado regularmente. Normalmente os valores variam entre 0.05 e
0.25. Se o valor atingir 0.30, as indústrias da lista A serão chamadas a suspender as operações até que os valores
retornem ao intervalo normal. Se o índice atingir 0.40, as indústrias da lista B serão notificadas também. Se o
índice exceder 0.50, indústrias de todas as 3 listas serão avisadas para suspenderem as atividades. Faça um
algoritmo para ler o índice de poluição e indicar as notificações apropriadas.
 */
int main(void){
    float IP;

    printf("Informe o índice de poluição: ");
    scanf("%f", &IP);

    if(IP >= 0.30 && IP < 0.40){
        printf("Empresas da lista A suspendam suas operações\n");
    } else if(IP >= 0.40 && IP < 0.50){
        printf("Empresas da lista A e B suspendam suas operações\n");
    }else if(IP >= 0.50){
        printf("Empresas da lista A, B e C suspendam suas operações\n");
    } else{
        printf("Índice de poluição normal.\n");
    }

    return 0;
}