#include <stdio.h>
/* 7. Faça um algoritmo que:
• leia, para n pessoas, a altura e o sexo (sexo = 'M' ou sexo = 'm' para masculino e sexo = 'F' e sexo =
'f' para feminino);
• escreva a média da altura das mulheres;
• escreva a média da altura da turma.*/
int main(){
    char nome[15], sexo;
    float altura, mediaAltFem, contaAltFem = 0, contaAltGel = 0, mediaAltGeral;
    int contador = 0, contadorfem = 0, i = 1, repetir;
    printf("digite o número de repetições: ");
    scanf("%d", &repetir);
    do{


      printf("Digite o nome: ");
      //fgets(nome, 15, stdin);
      scanf("%s", nome);


      printf(" digite o sexo da pessoa: ");
      scanf("%c", &sexo);
      scanf("%c", &sexo);

      printf("digite a altura: ");
      scanf("%f",&altura);

      contaAltGel = contaAltGel + altura;
      contador = contador + 1;

      if(sexo == 'f' || 'F')

     i = i + 1;
    }while(i <= repetir);
  {
    contaAltFem = contaAltFem + altura;
    contadorfem = contadorfem + 1;
  }

    mediaAltGeral =  contaAltGel / contador;
    mediaAltFem = contaAltFem / contadorfem;

    printf("Média altura feminina é: %.2f\n", mediaAltFem);
    printf("Média altura do grupo é: %.2f\n", mediaAltGeral);
    return 0;
}

