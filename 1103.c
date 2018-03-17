#include <stdio.h>

int main(){

    int H1, M1, H2, M2, T1, T2, TD, M;

    do {
        scanf("%i %i %i %i", &H1, &M1, &H2, &M2);
        T1 = 60*H1 + M1;
        T2 = 60*H2 + M2;
        M = T1 + T2;
        if (M != 0){
            if (T1 > T2) {
                TD = 1440-(T1-T2);
            } else {
                TD = T2-T1;
            }
            printf("%i\n", TD);
        }

    } while (M != 0);

    return 0;
}
