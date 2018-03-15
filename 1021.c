#include <stdio.h>

int main(){

    int n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m5;
    double v,m01;


    scanf("%lf", &v);
    n100 = v / 100;
    v -= n100*100;
    n50 = v / 50;
    v -= n50*50;
    n20 = v / 20;
    v -= n20*20;
    n10 = v / 10;
    v -= n10*10;
    n5 = v / 5;
    v -= n5*5;
    n2 = v / 2;
    v -= n2*2;
    m100 = v / 1;
    v -= m100*1;
    m50 = v/0.50;
    v -= m50*0.50;
    m25 = v / 0.25;
    v -= m25*0.25;
    m10 = v / 0.10;
    v -= m10*0.10;
    m5 = v / 0.05;
    v -= m5*0.05;
    m01 = v / 0.01;

    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", n100);
    printf("%i nota(s) de R$ 50.00\n", n50);
    printf("%i nota(s) de R$ 20.00\n", n20);
    printf("%i nota(s) de R$ 10.00\n", n10);
    printf("%i nota(s) de R$ 5.00\n", n5);
    printf("%i nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", m100);
    printf("%i moeda(s) de R$ 0.50\n", m50);
    printf("%i moeda(s) de R$ 0.25\n", m25);
    printf("%i moeda(s) de R$ 0.10\n", m10);
    printf("%i moeda(s) de R$ 0.05\n", m5);
    printf("%.0lf moeda(s) de R$ 0.01\n", m01);

    return 0;
}
