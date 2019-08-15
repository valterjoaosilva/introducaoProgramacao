#include <stdio.h>

/*2. Faça um algoritmo que calcule o volume de uma lata de óleo.
FÓRMULA: volume = π * raio2 * altura*/

int main(){
    float raio, altura, volume;

    printf("Informe o raio: ");
    scanf("%f", &raio);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    volume = 3.1416 * raio *raio * altura;

    printf("O volume da lata de óleo é %f\n", volume);

    return 0;
}