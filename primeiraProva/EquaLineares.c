#include <stdio.h>
/*
 * Um sistema de equações lineares da forma:ax + by = c
                                            dx + ey = f
pode ser resolvido utilizando-se as seguintes fórmulas:x = ce - bf   y = af - cd
                                                           ae - bd       ae - bd
Faça um algoritmo que leia os valores a, b, c, d, e, f, calcule x e y.
 */

int main(void){
int a, b, c, d, e, f;
float X, Y;

    printf("Digite a, b, c, d, e, f,\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);

    X = (c * e - b * f) / (a * e - b * d);
    Y = (a * f - c * d) / (a * e - b * d);

    printf("X = %.2f e Y = %.2f", X, Y);



    return 0;

}