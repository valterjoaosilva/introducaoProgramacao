#include <stdio.h>
#include <math.h>
/*
3. Faça um algoritmo que leia os lados de um triângulo e calcule a área de acordo com a fórmula:
área = √ P (P - a) (P - b) (P - c) onde P = a + b + c
                                                2
                                                */
int main(){
    float a, b, c, P, area1, area;

    printf("informe a: ");
    scanf("%f", &a);
    printf("informe b: ");
    scanf("%f", &b);
    printf("informe c: ");
    scanf("%f", &c);

    P = (a + b + c) / 2;

    area1 = P*(P-a)*(P-b)*(P-c);
    area = area1 ^ 0.5;

    printf("A área é: %f\n", area);

    return 0;
}