#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c = 'A';
    printf("Type 1 character:");
    // 何かわからないものはScanできない。
    scanf("%c",&c);
    printf("%c is: ",c);

    if('0' <= c && c <= '9')
        puts("Number.");
    else if ('a' <= c && c <= 'z')
        puts("Small letter.");
    else if ('A' <= c && c <= 'Z')
        puts("Capital.");
    else
        puts("Symble.");
    
    return 0;
}
