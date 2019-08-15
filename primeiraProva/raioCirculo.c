#include <stdio.h>
/* Faça um algoritmo que leia o raio de uma circunferência e calcule o comprimento e a área da
circunferência.
FÓRMULAS: área = π * raio2  comprimento = 2 * π * raio */
int main(){

 float area, comprimento, raio;

 printf("Informe o valor do raio: ");
 scanf("%f", &raio);

 area = 3.1416 * raio * raio;

 comprimento = 2 * 3.1416 * raio;

 printf("A área do circulo é %f e o comprimento do círculo é %f \n ", area, comprimento);


    return 0;
}