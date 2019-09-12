#include <stdio.h>
/*
 *7. Escreva um algoritmo que leia 4 valores (opção, a, b, c), onde opção é um valor inteiro e positivo e a, b, c são
quaisquer valores reais. Escreva os valores lidos da seguinte maneira:
se opção = 1 ⇒ escreva os 3 valores a, b, c em ordem crescente
se opção = 2 ⇒ escreva os 3 valores a, b, c em ordem decrescente
se opção = 3 ⇒ escreva os 3 valores de forma que o maior valor entre a, b, c fica entre os outros 2.
 */
int main(void){
    int a, b, c, opcao;

    printf("Informe a, b e c\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("\tESCOLHA SUA OPÇÃO\n");
    printf("\t=================\n");
    printf("Opção 1 = Escreva os três valores a, b, c, em ordem crescente.\n");
    printf("Opção 2 = Escreva os três valores a, b, c, em ordem decrescente.\n");
    printf("Opção 3 = Escreva os três valores de forma que o maior valor entre a, b, c fica entre os outros dois.\n");
    scanf("%d", &opcao);

    if(opcao == 1){

       if(a < b && b < c){
           printf("%d %d %d\n",a,b,c);

       }else if(a < c && c < b){
           printf("%d %d %d\n",a,c,b);
       }else if(b < a && a < c){
           printf("%d %d %d\n",b,a,c);
       }else if(b < c && c < a ){
           printf("%d %d %d\n",b,c,a);
       }else if(c < a && a < b){
           printf("%d %d %d\n",c,a,b);
       }else{
           printf("%d %d %d\n",c,b,a);
       }


    } else if(opcao == 2){


            if(a > b && b > c){
                printf("%d %d %d\n",a,b,c);

            }else if(a > c && c > b){
                printf("%d %d %d\n",a,c,b);
            }else if(b > a && a > c){
                printf("%d %d %d\n",b,a,c);
            }else if(b > c && c > a ){
                printf("%d %d %d\n",b,c,a);
            }else if(c > a && a > b){
                printf("%d %d %d\n",c,a,b);
            }else{
                printf("%d %d %d\n",c,b,a);
            }
    }
    else if(opcao == 3){


        if((a > b && b > c) || (a > b && c > b)){
            printf("%d %d %d\n",b,a,c);

        }else if((b > a && a > c) || (b > a && c > a)){
            printf("%d %d %d\n",a,b,c);
        }else{
            printf("%d %d %d\n",b,c,a);
        }
    }


    return 0;
}