#include <stdio.h>
int main() {
    int a;
    int *p;
    a = *p;
    printf("%d",a); // => 0.
    // Downs.


    // int *np = NULL;
    // int b = *np;
    // printf("%d",b); // => Segmentation fault: 11

}