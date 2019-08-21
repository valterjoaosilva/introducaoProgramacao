#include <stdio.h>
#include <math.h>

int main(void){
int m1, m2, m3, r12, r13, r23;
double G, E;

    printf("Informe m1, m2, m3\n");
    scanf("%d", &m1);
    scanf("%d", &m2);
    scanf("%d", &m3);

    printf("Informe r12, r13, r23\n");
    scanf("%d", &r12);
    scanf("%d", &r13);
    scanf("%d", &r23);

    E = (-6.67 *(pow(10,-11))) * (((m1 * m2)/r12) + ((m1 * m3)/r13) + ((m2 * m3)/r23));

    printf("E = %lf", E);

    return 0;
}