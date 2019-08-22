#include <stdio.h>
int main(void){
    float valorh, horatrab, salbruto, dep;
    int ndep;
    printf("informe valor hora: ");
    scanf("%f", &valorh);
    printf("informe horas trabalhadas: ");
    scanf("%f", &horatrab);
    printf("numero de dependentes: ");
    scanf("%d", &ndep);

    dep = (ndep * (10.0 / 100 )) + 1;
    salbruto = (valorh * horatrab) * dep;

    printf("Salario Bruto é: %.2f \n", salbruto);

    return 0;


}