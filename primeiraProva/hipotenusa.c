#include <stdio.h>
/*4. Faça um algoritmo que leia o comprimento dos catetos de um triângulo retângulo e calcule o comprimento
        da hipotenusa.
FÓRMULA: h2 = a2 + b2*/
int main(){
    int a, b, h;

    printf("informe a: ");
    scanf("%d", &a);

    printf("informe b: ");
    scanf("%d", &b);

    h = ((a * a) + (b * b)) * ((a * a) + (b * b));

    printf("O comprimento da hipotenusa é: %d\n", h);


    return  0;
}