#include <stdio.h>
/*
 * O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos impostos (45% do
preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica). Escreva um algoritmo que leia
o nome do automóvel, o preço de fábrica, e imprima o nome do automóvel e o preço final.
 */
int main(void){
    float precoFabr, precoFim;
    char automovel[20];

    printf("Informe o Automóvel: ");
    fgets(automovel,20,stdin);

    printf("Informe preço de fabrica: ");
    scanf("%f", &precoFabr);

    precoFim = (precoFabr * 1.45) + (precoFabr * 1.28);

    printf("O automóvel %s, o preço é: %.2f.\n", automovel, precoFim);

    return 0;

}