#include <stdio.h>
#include <math.h>
/*
9. Faça um algoritmo que leia as coordenadas de dois pontos, P1 (x1, y1) e P2 (x2, y2) respectivamente, e
        calcule a distância entre eles.
FÓRMULA: d = √ (x2 - x1)2+ (y2 - y1)2
 */


int main(void){
    float x1, x2, y1, y2, d, d1;


    printf("Informe P1\n");
    printf("X1 = ");
    scanf("%f", &x1);
    printf("Y1 = ");
    scanf("%f", &y1);

    printf("Informe o P2\n");
    printf("X2 = ");
    scanf("%f", &x2);
    printf("Y2 = ");
    scanf("%f", &y2);

    d1 = ((x2 - x1) * (x2 -x1)) + ((y2 - y1)*(y2 -y1));
    d = sqrt(d1);

    printf("A distância entre P1 e P2 é: %f\n", d);

    return 0;
}