#include <stdio.h>

int main(void) {

    int R;
    double pi, VOLUME;

    scanf("%i", &R);
    pi = 3.14159;
    VOLUME = (4.0/3)*pi*R*R*R;

    printf ("VOLUME = %.3lf\n", VOLUME);

    return 0;
}
