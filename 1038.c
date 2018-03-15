#include <stdio.h>

int main(){

    int cp, qtdp;
    double vt;

    scanf ("%i %i", &cp, &qtdp);
    switch (cp){
        case 1:
            vt = 4.00 * qtdp;
            break;
        case 2:
            vt = 4.50 * qtdp;
            break;
        case 3:
            vt = 5.00 * qtdp;
            break;
        case 4:
            vt = 2.00 * qtdp;
            break;
        case 5:
            vt = 1.50 * qtdp;
            break;
    }
    printf("Total: R$ %.2lf\n", vt);

    return 0;
}
