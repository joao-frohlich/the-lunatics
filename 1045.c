#include <stdio.h>

int main(){

    double A,B,C,aux;
    scanf("%lf %lf %lf", &A,&B,&C);

    if (A <= B || A <= C){
        double aux = A;
        if (B >= C){
            A = B;
            B = aux;
        } else {
            A = C;
            C = aux;
        }
    }

    if (A >= (B+C)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if ((A*A) == (B*B + C*C)){
            printf("TRIANGULO RETANGULO\n");
        } else if ((A*A) > (B*B + C*C)) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && A == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || A == C || B == C){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
