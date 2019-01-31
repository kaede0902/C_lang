#include <stdio.h>

int main() {
    char c = 1;
    // Is this array? string?
    char s[10] = "Hello";
    // long is 'long int'. very big int!
    printf("char型 = %dバイト\n", (int)sizeof(c));
    printf("shrt型 = %dバイト\n", (int)sizeof(short));
    printf("int 型 = %dバイト\n", (int)sizeof(int));
    

    printf("long型 = %dバイト\n", (int)sizeof(long));
    printf("strg型 = %dバイト\n", (int)sizeof(s));
   
}