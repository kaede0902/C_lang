#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str3[] = "hello";
    int i;
    printf("The word I learned 1st is: %s \n",str3);
    for (i = 0; i < 5; i++) { // str[0] to str[4]
        printf("No.%d is: %c\n",i,str3[i]);
        }
    return 0;
}
