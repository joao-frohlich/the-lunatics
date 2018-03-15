#include <stdio.h>

int main(void){

    int CP1, NP1, CP2, NP2;
    double VP1, VP2, TOTAL;

    scanf("%i %i %lf", &CP1, &NP1, &VP1);
    scanf("%i %i %lf", &CP2, &NP2, &VP2);
    TOTAL = (NP1 * VP1) + (NP2 * VP2);

    printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);

    return 0;
}
