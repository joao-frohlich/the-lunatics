#include <stdio.h>

int main(void) {

    int t, vm;
    double l;

    scanf ("%i %i", &t, &vm);
    l = (t*vm)/12.0;

    printf("%.3lf\n", l);

    return 0;
}
