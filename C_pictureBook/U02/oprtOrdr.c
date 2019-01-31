#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("2x8-6/2 = %d\n", 2*8-6/2);
    printf("2x(8-6)/2 = %d\n", 2*(8-6)/2);
    printf("1-2+3 = %d\n",1-2 + 3);
    // Meaning changed.
    printf("1-(2+3) = %d\n",1-(2+3));
    
    return 0;
}

