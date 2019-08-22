#include <stdio.h>
#include <math.h>
/*4. Faça um algoritmo que leia o comprimento dos catetos de um triângulo retângulo e calcule o comprimento
        da hipotenusa.
FÓRMULA: h2 = a2 + b2*/
int main(){
    float a, b, h;

    printf("informe a: ");
    scanf("%f", &a);

    printf("informe b: ");
    scanf("%f", &b);

    h = sqrt(a * a + b * b);

    printf("O comprimento da hipotenusa é: %.2f\n", h);


    return  0;
}