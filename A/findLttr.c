#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Input your sentence \n");
    char sntnc[100]; // declare as string
    scanf("%100s",sntnc);
    // printf("What letter do you want to find? \n");
    // char inputLetter;
    // scanf("%c",&inputLetter);

    printf("Your sentence: %100s",sntnc);
    return 0;
}
