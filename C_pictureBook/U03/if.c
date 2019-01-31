#include <stdio.h>
int main(int argc, char const *argv[])
{
    int score = 69;
    printf("Your point is :%d\n",score);

    if(score < 70)
        printf("To Av: %d point! \n",70-score);
    else 
        printf("Well Done!!\n");
    return 0;

}
