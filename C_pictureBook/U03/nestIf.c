#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 101;

    if (80 < a ) {
        if (a == 100) {
            printf("Full point!\n");
        } else {
            printf("Close!\n");
        }
    } else {
        printf("Study harder!\n");
    }
    return 0;
}
