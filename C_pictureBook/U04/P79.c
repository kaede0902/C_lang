#include <stdio.h>
#include <stdlib.h>
// #include <malloc.h>
#include <memory.h>

int main(void) {
    char *b;
    char a[4] = {20,40,30,10};
    b = (char *)malloc(sizeof(char)*200);
    if (!b)
        return 0;
    memcpy(b,a,sizeof(char)*4);
    printf("%d %d %d %d \n", b[0],b[1],b[2],b[3]);
        free(b);
}