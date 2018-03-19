#include <stdio.h>

int main(){

    double n1, n2, n3, n4, n5, n6, mp = 0.0;
    int np = 0;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);
    scanf("%lf", &n5);
    scanf("%lf", &n6);
    if (n1 > 0){
        np++;
        mp += n1;
    }
    if (n2 > 0){
        np++;
        mp += n2;
    }
    if (n3 > 0){
        np++;
        mp += n3;
    }
    if (n4 > 0){
        np++;
        mp += n4;
    }
    if (n5 > 0){
        np++;
        mp += n5;
    }
    if (n6 > 0){
        np++;
        mp += n6;
    }
    mp /= np;
    printf("%d valores positivos\n", np);
    printf("%.1lf\n", mp);

    return 0;
}

