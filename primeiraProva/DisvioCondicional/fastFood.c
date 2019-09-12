#include <stdio.h>
/*
 * 5. Uma lanchonete fast food apresenta a seguinte relação de produtos:
 * Cada cliente sempre deve pedir um item de alimentação (01 a 04), uma bebida (05 ou 06) e uma sobremesa (07 a
09). Escreva um algoritmo que leia os 3 códigos do pedido do cliente e informe a descrição/preço de cada item e o
preço final a pagar. Caso ocorra algum problema (código inválido ou repetição de algum item), exibir apenas uma
mensagem de erro.
 */
int main(void){
    float pAlm, pBeb, pSob, pTot;
    int codPeA, codPeB, codPeS;

    printf("Informe o código do item Alimentação: ");
    scanf("%d", &codPeA);
    printf("Informe o código do item Bebida: ");
    scanf("%d", &codPeB);
    printf("Informe o código do item Sobremesa: ");
    scanf("%d", &codPeS);
    /* Desvio condicional alimentação*/
    if(codPeA >= 1 && codPeA <= 4){
        if(codPeA == 1){
            pAlm = 4.50;
            printf("%d - hamburger, 4.50\n", codPeA);
        } else if(codPeA == 2){
            pAlm = 5.50;
            printf("%d - cheesburger, 5.50\n", codPeA);
        } else if(codPeA == 3){
            pAlm = 4.00;
            printf("%d - cachorro quente, 4.00\n", codPeA);
        } else{
            pAlm = 3.50;
            printf("%d - sanduíche, 3.50\n", codPeA);
        }

    } else{
        printf("Código invláido ou repetição de algum item\n");
    }

    if(codPeB >= 5 && codPeB <= 6){
        if(codPeB == 5){
            pBeb = 1.00;
            printf("%d - refrigerante, 1.00\n", codPeB);
        } else{
            pBeb = 2.00;
            printf("%d - suco de laranja, 2.00\n", codPeB);
        }

    } else{
        printf("Código invláido ou repetição de algum item\n");
    }

    if(codPeS >= 7 && codPeS <= 9){
        if(codPeS == 7){
            pSob = 1.50;
            printf("%d - milk Shake, 1.50\n", codPeS);
        } else if(codPeS == 8){
            pSob = 3.00;
            printf("%d - sudae, 3.00\n", codPeS);
        } else{
            pSob = 1.00;
            printf("%d - casquinha, 1.00\n", codPeS);
        }

    } else{
        printf("Código invláido ou repetição de algum item\n");
    }
    pTot = pAlm + pBeb + pSob;
    printf("Total ===> %.2f\n", pTot);
        return 0;
}
