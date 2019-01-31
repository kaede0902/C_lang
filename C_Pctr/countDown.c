#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i=10; 0<=i; i--){
        printf("Count down: %d\n",i);
    }
    return 0;
}