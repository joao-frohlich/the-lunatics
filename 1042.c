#include <stdio.h>

int main(){

    int A,B,C;
    scanf("%i %i %i", &A, &B, &C);

    if (A <= B && A <= C){
        printf("%i\n", A);
        if (B <= C){
            printf("%i\n", B);
            printf("%i\n", C);
        } else {
            printf("%i\n", C);
            printf("%i\n", B);
        }
    } else if (B <= A && B <= C) {
        printf("%i\n", B);
        if (A <= C){
            printf("%i\n", A);
            printf("%i\n", C);
        } else {
            printf("%i\n", C);
            printf("%i\n", A);
        }
    } else {
        printf("%i\n", C);
        if (A <= B){
            printf("%i\n", A);
            printf("%i\n", B);
        } else {
            printf("%i\n", B);
            printf("%i\n", A);
        }
    }
    printf ("\n");
    printf ("%i\n%i\n%i\n", A, B, C);

    return 0;
}
