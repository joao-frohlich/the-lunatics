#include <stdio.h>

int main(){

    double n1, n2, n3, n4, n5, n6;
    int np = 0;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);
    scanf("%lf", &n5);
    scanf("%lf", &n6);
    if (n1 > 0){
        np++;
    }
    if (n2 > 0){
        np++;
    }
    if (n3 > 0){
        np++;
    }
    if (n4 > 0){
        np++;
    }
    if (n5 > 0){
        np++;
    }
    if (n6 > 0){
        np++;
    }
    printf("%d valores positivos\n", np);

    return 0;
}
