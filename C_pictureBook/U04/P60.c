#include <stdio.h>
int main() {
    int i;
    int a[] = {1,2,3,4};

    for (i = 3; 0 <= i; i--) // 3 to 0
        printf("a[i]: %d ",a[i]); // a[3] to a[0]
}