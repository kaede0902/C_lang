#include <stdio.h>
int main() {
    char a;
    short b;

    // %x makes error.
    printf("a's adress: %p, b'adress: %p \n", &a, &b);
    
}