#include <stdio.h>

void swapVal(int, int);
void swapByRef(int * , int *);

int main() {
    int a = 2;
    int b = 7;
    printf("Dflt: a = %d, b = %d \n", a, b);

    swapVal(a,b);
    printf("Val swapped: a = %d, b = %d \n", a, b);

    swapByRef(&a,&b);
    printf("By Ref swapped: a = %d, b = %d \n", a, b);

}
void swapVal(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
void swapByRef(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}