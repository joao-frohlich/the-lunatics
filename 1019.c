#include <stdio.h>

int main(){

    int valor, v, h, m, s;

    scanf("%i", &v);
    h = v / 3600;
    v %= 3600;
    m = v / 60;
    v %= 60;
    s = v;

    printf("%i:%i:%i\n", h, m, s);

    return 0;
}
