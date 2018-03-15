#include <stdio.h>

int main(){

    int Hi, Hf, T;
    scanf ("%d %d", &Hi, &Hf);

    if (Hf > Hi) {
        T = Hf - Hi;
    } else {
        T = 24 + (Hf - Hi);
    }
    printf("O JOGO DUROU %d HORA(S)\n", T);

    return 0;
}
