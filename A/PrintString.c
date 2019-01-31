#include <stdio.h>
#include <string.h>

int main() {
    // Not Include Null char.
    char NoNullS[5] = "Hello";
    printf("No null char: %s \n",NoNullS);
    
    char string[6] = "Hello";
    printf("Adds Null char: %s \n",string);
    
    char string2[9] = "Good Bye"; // [7] rslt error
    printf("char: %s \n",string2);
    
    
}