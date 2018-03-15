#include <stdio.h>
#include <stdlib.h>

int main(){

    double A,B,C,D;
    scanf ("%lf %lf %lf", &A, &B, &C);

    if ((abs(B - C) < A && A < (B+C)) || (abs(A - C) < B && B < (A+C)) || (abs(A - B) < C && C < (A+B))) {
        double P;
        P = A + B + C;
        printf("Perimetro = %.1lf\n", P);
    } else {
        double AT;
        AT = ((A+B)*C)/2;
        printf("Area = %.1lf\n", AT);
    }

    return 0;
}
