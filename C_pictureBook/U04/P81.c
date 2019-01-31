#include <stdio.h>

int main() {
    int sheet[3][4] = {
        {20,42,70,34},
        {67,98,37,41},
        {76,99,43,65},
    };
    int clm, row, rowSum;
    int clmSum[4] = {0,0,0,0};// sheets culc array
    int total = 0;

    // culc sum of row data.
    for (clm = 0; clm < 3; clm++) {
        rowSum = 0; // sheet[0][0] (20) ~ sheet[2][0] (76)
        for (row = 0; row < 4; row++) {
            printf("%4d ", sheet[clm][row]);
            rowSum += sheet[clm][row]; // 20+42+70...
            clmSum[row] += sheet[clm][row]; // 
        }
        printf("| %4d\n", rowSum);
    }
    // culc sum of column data. and total.
    printf("------------------- + ----- \n");
    for (row = 0; row < 4; row++) {
        printf("%4d ",clmSum[row]);
        total += clmSum[row];
    }
    printf("| %4d \n", total);
}
// %4dにするから揃う