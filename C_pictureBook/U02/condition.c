#include <stdio.h>

int main() {
    int a = 30, x; // x is unsigned.
    // T: a, F: 0
    // (True) ? TrueInput: FalseInput.
    x = (0 <= a && a <= 100) ? a : 0;
    printf("%d\n",x);
}