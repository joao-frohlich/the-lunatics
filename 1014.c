#include <stdio.h>

int main(void) {

    int X;
    double Y, CONSUMO;

    scanf ("%i %lf", &X, &Y);
    CONSUMO = X/Y;

    printf("%.3lf km/l\n", CONSUMO);

    return 0;
}
