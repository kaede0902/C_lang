#include <stdio.h>

int main(void)
{
    int x,y,z;
    printf("Type 3 number with a space. \n");
    scanf("%d %d %d",&x,&y,&z);
    printf("The val you input: ");
    printf("One is %d, 2nd is %d, 3rd is %d.\n",x,y,z);
    printf("Total is: %d.\n",x+y+z);
    
    return 0;
}