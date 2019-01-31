#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[] = "I love cats and dogs.";
    char inputChar = 's';
    char *ptr = string;
    int counter = 0;
// error
    printf("Find [%c] in [%s].\n",inputChar,string);

    while(1){
        ptr = strchr(ptr,inputChar);
        if (!ptr)
            break;
        printf("Found at %d [%c]. \n", (int)(ptr - string + 1), inputChar);
        counter++;
        ptr++;
    }
    

    if( counter == 0)
        printf("No results.\n");
    else
        printf("I found %d [%c].\n",counter,inputChar);
    return 0;
}// understand what pointer results.
