#include <stdio.h>

int main() {
    char x = 4;
    char y;
    char* ptr;

    printf("y,ptr*: %d,%d \n",y,*ptr);
    printf("ptr,&x: %s,%s\n",ptr,&x);

    ptr = &x;
    printf("ptr: %d \n",*ptr);
    
    y = *ptr;
    printf("y: %d \n",y);
}