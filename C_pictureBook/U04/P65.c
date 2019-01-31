#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "cat", s2[] = "dog";
    char s[20];
    sprintf(s,"I love %s and %s.",s1,s2);
    printf("[%s]'s char number is: %d \n", s, (int)strlen(s));
}