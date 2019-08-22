#include <stdio.h>
int main(void){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 0){
        printf("Muito Bem\n");
    }

    return 0;
}