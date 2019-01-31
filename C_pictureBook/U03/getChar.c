#include <stdio.h>
int main() {
    char a;
    puts("repeat your words untill type 'e'.");
    do {
        // Each loop, a get 1 char and print.
        a = getchar(); // get 1 char inputted
        printf("%c",a);
    } while(a!= 'e'); // if a get 'e', loop stop.
}