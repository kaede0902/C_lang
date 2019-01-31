#include <stdio.h>
#include <string.h>

int main() {
    char s[10] = "Hello";
    printf("%s\n",s);
    // string copy. assign str to array.
    strcpy(s, "Good bye");
    printf("%s\n",s);
}