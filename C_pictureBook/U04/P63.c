#include <stdio.h>
int main() {
    int i = 0;
    char a[] = "ABC";
    char b[4];

    while(a[i] != '\0'){ // until a is not null char,
        b[i] = a[2-i]; // 2-0, 2-1, 2-2... a[2],a[1],a[0]?
        i++;            // to b[0],b[1],b[2]
    }
    b[3] = '\0';
    printf("%s's reversed : %s\n",a,b);
}