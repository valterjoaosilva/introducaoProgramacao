#include <stdio.h>
/*
 * 8. Faça um algoritmo que leia 3 valores x, y, z, e verifique se podem ser os comprimentos dos lados de um
triângulo. Em caso afirmativo, verifique se é ‘triângulo eqüilátero’, ‘triângulo isósceles’ ou ‘triângulo escaleno’. Em
caso negativo, escreva uma mensagem: ‘os valores lidos não formam um triângulo’. Considere que:
• o comprimento de cada lado de um triângulo é menor que a soma dos comprimentos dos outros lados
• um triângulo eqüilátero tem três lados iguais
• um triângulo isósceles tem dois lados iguais e um diferente
• um triângulo escaleno tem três lados diferentes.
 */
int main(void){
    int x, y, z;

    printf("\t Digite os lados do Triangulo x, y, z\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x + y >z && z + y > x && z + x > y){
        printf("É um triangulo\n");
        if(x == y && y == z){
            printf("Os lados são de um triangulo Equilátero.\n");
        }else if((x == y && x != z) || (y == z && y != x) || (x == z && y != z) ){
            printf("Os lados são de um triangulo Isosseles.\n");
        }else{
            printf("Os lados são de um tringaulo Escaleno.\n");
        }


    }else{
        printf("Não é um Triangulo\n");
    }


    return 0;
}