#include <stdio.h>

int main() {
    int a = 10, b = 20;
    // True or False outputs 1 or 2.

    printf("a = %d, b = %d \n",a,b);
    printf("a <  b: %d \n",a < b);
    printf("a >  b: %d \n",a > b);
    printf("a == b: %d \n",a == b);
    // This does not compare. assgin.
    printf("a =  b: %d \n",a = b); // outputs b's val.
    
}