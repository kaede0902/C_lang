#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 10;
    int *p;
    p = &x; // p refers x? adress?
    *p = 5; // 5 is assigned p? reverse refer?
    printf("Inside of x is: %d\n", x);
    return 0;
}
