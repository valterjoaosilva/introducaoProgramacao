#include <stdio.h>
int main(){
    char tipoInstalacao;
    int  kwh;
    float valor;

    printf("Digite o consumo: ");
    scanf("%d", &kwh);
    printf("Digite o tipo de instalação: ");
    scanf("%c", &tipoInstalacao);

    if(tipoInstalacao == 'R'){
        if(kwh <= 500){
            valor = 0.4 * kwh;
        } else{
            valor = 0.6 * kwh;
        }
    } else{
       if(tipoInstalacao == 'C'){
           if(kwh <= 1000){
               valor = 0.55 * kwh;
           }else{
               valor = 0.6 * kwh;
           }
       } else{
                if(tipoInstalacao == 'I'){
                if(kwh <= 5000){
                   valor = 0.6 * kwh;

                } else{
                   valor = 0.65 * kwh;
                }
                } else{
                     printf("tipo inesistente\n");
                 }
       }
    }

printf("tipo de instalação:  %c valor: %f", tipoInstalacao, valor);
    return 0;
}