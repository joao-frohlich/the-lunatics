#include <stdio.h>

int main(void){

    int A,B,C, MAIOR1, MAIOR2, MAIOR;

    scanf("%i %i %i", &A, &B, &C);
    MAIOR1 = (A+B+abs(A-B))/2;
    MAIOR2 = (B+C+abs(B-C))/2;
    MAIOR = (MAIOR1+MAIOR2+abs(MAIOR1-MAIOR2))/2;

    printf("%i eh o maior\n", MAIOR);

    return 0;
}
