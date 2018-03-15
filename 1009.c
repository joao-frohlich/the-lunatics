#include <stdio.h>

int main(void){

    char NF;
    double SF,TV,SALARIO;

    scanf("%s %lf %lf", &NF, &SF, &TV);
    SALARIO = SF + (TV*0.15);

    printf("TOTAL = R$ %.2lf\n", SALARIO);

    return 0;
}
