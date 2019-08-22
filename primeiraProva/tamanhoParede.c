#include <stdio.h>
/*
 * São dados de entrada o comprimento e a altura de um tijolo, o comprimento e altura de uma parede e o
custo do milheiro de tijolos. Supondo que 10% da área da parede seja de argamassa, faça um algoritmo
que escreva:
• o número de tijolos necessários para construir a parede;
• o custo de construção da parede, referente aos tijolos gastos.
 */
int main(void){
    float tijComp, tijAlt, paredeCom, paredeAlt, milheroTijolo, tamanhoParede, tamanhoTijolo, numTijolo, custoParede;

    printf("Informe o comprimento do tijolo: ");
    scanf("%f", &tijComp);

    printf("Informe a altura do tijolo: ");
    scanf("%f", &tijAlt);

    printf("Informe o comprimento da parede: ");
    scanf("%f", &paredeCom);

    printf("Informe o altura da parede: ");
    scanf("%f", &paredeAlt);

    printf("Informe valor do milheiro tijolo: ");
    scanf("%f", &milheroTijolo );


    tamanhoTijolo = tijComp * tijAlt;
    tamanhoParede = paredeAlt * paredeCom;
    numTijolo = (tamanhoParede * 0.10) + tamanhoParede;
    custoParede = (milheroTijolo / 1000) * numTijolo;

    printf("A quantidade de tijolos na obra foi %f, o custo da obra foi %.2f", numTijolo, custoParede);

    return 0;
}
