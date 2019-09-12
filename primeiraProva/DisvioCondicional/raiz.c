#include <stdio.h>
#include <math.h>
/*
 * 10. Faça um algoritmo para calcular as raízes reais de uma equação quadrática: ax2 + bx + c = 0. Uma equação
quadrática só tem raiz reais se (b - 4ac) for maior ou igual a zero. O algoritmo deve ser capaz de tratar os casos
em que há duas raízes distintas, duas raízes reais iguais ou duas raízes complexas.
 */
int main(void){
    int a, b, c, delta;
    float x1, x2;


    printf("Informe a, b, c\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    delta = (b * b) -4 * a * c;
    if(delta >= 0){

        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("x1 = %.2f e x2 = %.2f.", x1, x2);
    }

    return 0;
}
