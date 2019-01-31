#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b = 1;
    for (a = 1; a < 11; a++) {
        if ((a + b)%2 == 1){
            puts("-- odd --");
            continue;
        }
        printf("%d+%d=%d\n",a,b,a+b);
    }
    return 0;
}
