#include <stdio.h>

int main(){
    float kmrodado, valorCorrida, troco, valorpago;

    printf("Quantos Km rodados: ");
    scanf("%f", &kmrodado);

    valorCorrida = 4 + 1.8 * kmrodado;

    printf("valor da corrida %f: ", valorCorrida);

    printf("Informe o valor pago: ");
    scanf("%f", &valorpago);

    troco = valorpago - valorCorrida;

    printf("troco é %f: ", troco);


    return 0;
}