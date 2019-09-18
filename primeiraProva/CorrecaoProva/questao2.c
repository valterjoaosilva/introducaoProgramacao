#include <stdio.h>
int main(){
    int numero, unidade, dezena, centena, aux;

    printf("digite o número: ");
    scanf("%d", &numero);
    unidade = numero % 10;
    aux = numero / 10;
    dezena = aux % 10;
    aux = numero / 10;
    centena =  numero % 10;

    printf("unidade: %d  , dezena: %d  centena: %d \n", unidade, dezena, centena);




    return 0;
}