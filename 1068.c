#include <stdio.h>
#include <string.h>

int main(){

    int N, i, j, tl;
    char V[100];

    scanf("%d", &N);
    for (j = 0; j < N; j++){
        scanf("%s", &V);
        tl = 0;
        for (i = 0; i < strlen(V); i++){
            if (V[i] == '1') {
                tl += 2;
            } else if (V[i] == '7') {
                tl += 3;
            } else if (V[i] == '4') {
                tl += 4;
            } else if (V[i] == '8') {
                tl += 7;
            } else if (V[i] == '2' || V[i] == '3' || V[i] == '5') {
                tl += 5;
            } else {
                tl += 6;
            }
        }
        printf("%d leds\n", tl);
    }

    return 0;
}
