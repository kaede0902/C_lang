#include <stdio.h>
int main() {
    char c = '\0';
    char prevLetter;
    int wordNum;
    int wordIsIn;

    while(1){ // infinite loop!
        wordNum = 0;
        wordIsIn = 1;
        prevLetter = '\0';
        printf("Print Character String: ");
        
        while(1) {
            c = getchar();
            if (c == '\n') { // Enter key.
                if(wordIsIn) 
                    // return key pressed. word plus 1 !
                    wordNum++;
                break; // get out and print word count.
            }
            prevLetter = c;

            if (c == ' '|| c == '.'){ // End the word
                if(wordIsIn) {
                    // Space key pressed. word +1 
                    // or period pressed. word +1
                    wordNum++;
                    // Reset for the next word.
                    // Player Input continues.
                    wordIsIn = 0; // word is end.
                }
            } else {
                wordIsIn = 1;
            }

        }
        if (prevLetter == '\0')
            break;
        printf("Words conunt: %d \n",wordNum);
    }
}
// '.'で終わるときにプログラムが終了しない。