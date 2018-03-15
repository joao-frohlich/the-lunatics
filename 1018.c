#include <stdio.h>

int main(){

    int valor, v, n100, n50, n20, n10, n5, n2, n1;

    scanf("%i", &valor);
    v = valor;
    n100 = v / 100;
    v %= 100;
    n50 = v / 50;
    v %= 50;
    n20 = v / 20;
    v %= 20;
    n10 = v / 10;
    v %= 10;
    n5 = v / 5;
    v %= 5;
    n2 = v / 2;
    v %= 2;
    n1 = v / 1;

    printf("%i\n", valor);
    printf("%i nota(s) de R$ 100,00\n", n100);
    printf("%i nota(s) de R$ 50,00\n", n50);
    printf("%i nota(s) de R$ 20,00\n", n20);
    printf("%i nota(s) de R$ 10,00\n", n10);
    printf("%i nota(s) de R$ 5,00\n", n5);
    printf("%i nota(s) de R$ 2,00\n", n2);
    printf("%i nota(s) de R$ 1,00\n", n1);

    return 0;
}
