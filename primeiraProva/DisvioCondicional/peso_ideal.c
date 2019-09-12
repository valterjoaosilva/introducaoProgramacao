#include <stdio.h>

int main(void){
    char sexo;
    float altura, peso_ideal;

    printf("Informe o sexo da pessoa M ou F: ");
    scanf("%c", &sexo);
    printf("Informe a altura da pessoa: ");
    scanf("%f", &altura);

    if(sexo == 'M'){
        peso_ideal = (72.7 * altura) - 58;

    }else if(sexo == 'F' ){
        peso_ideal = (62.1 * altura) - 44.7;
    }else{
        printf("Erro na opção\n");
    }
    printf("%.2f\n", peso_ideal);

    return 0;
}




