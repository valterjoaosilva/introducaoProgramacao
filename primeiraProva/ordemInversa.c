#include <stdio.h>
/*5. Faça um algoritmo que leia os nomes de 4 pessoas e escreva-os em ordem inversa à ordem de leitura.*/
int main(void){
    char nome1[20], nome2[20], nome3[20], nome4[20];

    printf("Digite primeiro nome: ");
    scanf("%s", nome1); 

    printf("Digite segundo nome: ");
    scanf("%s", nome2);

    printf("Digite terceiro nome: ");
    scanf("%s", nome3);

    printf("Digite quarto nome ");
    scanf("%s", nome4);

    printf("Os nomes na ordem inversa são: %s %s %s %s\n", nome4, nome3, nome2, nome1);

   
   return 0;
}