#include <stdio.h>

int main(){

    int v, a, m, d;

    scanf("%i", &v);
    a = v / 365;
    v %= 365;
    m = v / 30;
    v %= 30;
    d = v;

    printf("%i ano(s)\n", a);
    printf("%i mes(es)\n", m);
    printf("%i dia(s)\n", d);

    return 0;
}
