#include <stdio.h>
/*
9. Faça um algoritmo que leia as coordenadas de dois pontos, P1 (x1, y1) e P2 (x2, y2) respectivamente, e
        calcule a distância entre eles.
FÓRMULA: d = √ (x2 - x1)2+ (y2 - y1)2
 */


int main(void){
    int x1, x2, y1, y2;
    double d;

    printf("Informe o P1");
    printf("X1 = ");
    scanf("%d", &x1);
    printf("Y1 = ");
    scanf("%d", &y1);

    printf("Informe o P2");
    printf("X2 = ");
    scanf("%d", &x2);
    printf("Y2 = ");
    scanf("%d", &y2);

    d = (((x2 - x1) * (x2 -x1)) + ((y2 - y1)*(y2 -y1)))^0.5;

    printf("A distância entre P1 e P2 é: %lf\n", d);

    return 0;
}