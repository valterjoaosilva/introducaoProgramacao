#include <stdio.h>
/*
 * 9. Faça um algoritmo que leia 3 valores x, y, z, e verifique se podem ser os comprimentos dos lados de um
triângulo. Em caso negativo, escreva uma mensagem ‘os valores lidos não formam um triângulo’. Em caso
afirmativo, verifique se é ‘triângulo retângulo’ (h2 = a2 + b2 ).
 */
int main(void) {
    int x, y, z;

    printf("\t Digite os lados do Triangulo x, y, z\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (x + y > z && z + y > x && z + x > y) {
        printf("É um triangulo\n");
        if ((x * x == (y * y) + (z * z)) || (y * y == (x * x) + (z * z)) || (z * z == (x * x) + (y * y)))  {
            printf("É um triangulo retangulo.\n");
        } else {
            printf("Não é um triangulo retangulo\n ");
        }
    } else {
        printf("Não é um triangulo\n");
    }

    return 0;
}