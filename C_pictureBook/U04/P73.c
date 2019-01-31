#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "I love a cat.";
    char c = 'l';
    char *p = NULL;

    printf("Inside of sentence [%s], char[%c]:",s,c);
    p = strchr(s,c); // returns pointer of c.
    
    if (!p)
        printf("Not exists.\n");
    else
        printf("Exists!!!\n"); 
        // pointer of c equals to p(inside of s[])
}