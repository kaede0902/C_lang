#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    char inputChar = '\0';
    char prvLttr;
    int wordNum;
    int wordEnded;

    while(1){
        wordNum = 0;
        wordEnded = true; // As 1st, in end point.
        prvLttr = '\0';
        printf("Type sentence: ");

        while(1){
            inputChar = getchar();

            // 改行されてword count表示に飛ぶ処理
            if (inputChar == '\n'){ // rtn pressed
                if (wordEnded) // Before rtn, space or period Not pressed
                    wordNum++;

                break;
            } 
            prvLttr = inputChar;
            
            if (inputChar == ' ' || inputChar == '.') { // space, period pressd -------
                if (wordEnded) {// Before this, space or period Not pressed.
                    wordNum++;
                    wordEnded = false; // Out side of the word?
                }
            } else { // No rtn, space, period, 
                wordEnded = true;
            }
            if (prvLttr == '\0')
                break;
            printf("Word counts: %d \n", wordNum);
        }
    }
    return 0;
}

