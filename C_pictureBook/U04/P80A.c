#include <stdio.h>
int main(int argc, char const *argv[])
{
    char string[] = "I love cats and dogs.";
    char inputChar = 'o';
    char *ptr = string;
    int counter = 0;
// error
    printf("Find [%c] in [%s].\n",inputChar,string);
    while(*ptr != '\0'){
        if (*ptr == inputChar) {
        printf("I found it at %d char.\n",(int)(ptr-string+1));
        counter++;
        }
        ptr++; // ptr + 1は二文字目なのか？
    }
    if( counter == 0)
        printf("No results.\n");
    else
        printf("I found %d %c.\n",counter,inputChar);
    return 0;
}// understand what pointer results.
