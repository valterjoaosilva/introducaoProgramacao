#include <stdio.h>
/*
 * 2. Escreva um algoritmo que leia a hora de início de um jogo e a hora final do jogo (considerando apenas horas
inteiras) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é de 24
horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.
 */
int main(void){
    int hora_in, hora_sai, hora_tot;

    printf("Informe a hora de início do jogo: ");
    scanf("%d", &hora_in);

    printf("Informe a hora de Saída do jogo: ");
    scanf("%d", &hora_sai);

    if(hora_in >= hora_sai){
        hora_tot = (24 - hora_in) + hora_sai;
    }else{
        hora_tot = hora_sai - hora_in;
    }
    printf("O total de horas do jogo é: %d\n", hora_tot);

    return 0;
}