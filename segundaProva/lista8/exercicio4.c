#include <stdio.h>
/*3. Faça um algoritmo que calcule e escreva a soma da seguinte série de 100 termos:
 * ça um algoritmo que calcule e escreva a soma da seguinte série de 100 termos:
 1 + 1 + 1 + 1 + . . . + 1 .
     1 2 3 4 100 */
int main(void){
    float i = 1;
    float soma = 0;

    while(i <= 4){
        soma = soma + (1/i);
        i = i + 1;
    }
    printf("%.2f\n", soma);
    return 0;
};
