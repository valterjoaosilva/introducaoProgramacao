#include <stdio.h>

/*  11. Faça um algoritmo que leia a largura, a altura e o comprimento de um pacote e calcule a quantidade de
barbante necessária para amarrá-lo. Para que o pacote fique firme são necessárias 4 amarras.  */

int main(void){
    int largpct, altpct, compct, lateral, altura, qtdebarbte;

    printf("Informe Largura do pacote: ", );
    scanf("%d", &largpct);
    printf("informe Altura do pacote: ");
    scanf("%d", &altpct);
    printf("informe comprimento do pacote: ");
    scanf("%d", &compct);

    lateral = ((largpct * 2) + (compct * 2)) * 4;
    altura = ((altpct * 2) + (compct * 2)) * 4;
    qtdebarbte = lateral + altura;

    printf("A quantidade de Barbante é: %d cm /n", qtdebarbte);


    return 0;
}

