#include <stdio.h>

int main(void) {
    int x,y;
    char c;
    printf("\n"); // print No.32 ~ 127 ASCII code char.

    for (x = 2; x < 8; x++) { // 2 to 7
        printf("16: 10:c | ");
    }
    printf("\n");
    for (x = 2; x < 8; x++) {
        printf("---------+-");
    }
    printf("\n");

    // --- main code -----

    for (y = 0; y < 16; y++) {
        for (x = 2; x < 8; x++) {
            c = x * 16 + y;
            printf("%2X:%3d:%c | ",c,c,c);//  Hex(2dig),dcm(3dig)char.
        }
        printf("\n");
    }
}