#include <stdio.h>
int main() {
    char x = 4,y;
    char *p = &x; // refer x's adress.
    y = *p; // y is x's adress...x...4
    printf("var x's value is: %d\n",y);
}