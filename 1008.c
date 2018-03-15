#include <stdio.h>

int main(void){

    int NF, HT;
    double VH, SALARIO;

    scanf("%i %i %lf", &NF, &HT, &VH);
    SALARIO = HT * VH;

    printf("NUMBER = %i\n", NF);
    printf("SALARY = U$ %.2lf\n", SALARIO);

    return 0;
}
