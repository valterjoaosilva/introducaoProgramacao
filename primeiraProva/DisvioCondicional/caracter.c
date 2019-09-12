#include <stdio.h>
#include <ctype.h>

/*
 * 4. Faça um algoritmo que leia 1 caracter e escreva a mensagem ‘caracter lido é vogal’ ou ‘caracter lido não é
vogal”, conforme o caso.
 */
int main(void){
    char C;
    printf("Digite uma letra: ");
    scanf("%c", &C);

    if(C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u'){
            printf("Carácter lido é uma vogal\n");
    }else{
            printf("Carácter lido não é uma vogal\n");
        }


    return 0;
}