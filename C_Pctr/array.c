#include <stdio.h>

int main() {
    int a[5];
    int i;
    for (i = 0; i<5; i++) {
        printf("(%d)Type Number:",i+1);
        //scan a[0]~a[4]
        scanf("%d",&a[i]); 
    }
    printf("Print Typed Number Reversed.\n");
    for (i = 4; 0 <= i; i--) // a[4]~a[1]
        printf("(%d).%d\n",i,a[i]);
    return 0;
}


