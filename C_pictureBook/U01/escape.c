#include <stdio.h>

int main() {
    printf("    %8s  %8s\n", "Item A", "Item B");
    printf("Amount: %08d %08d\n", 16, 246);
    printf("Weight: %8.4f %8.4f\n", 76.3, 556.1);
// seqence '10' is return key.
    printf("%d%c",20,10);
// '/b' is backspace. del '0' and A.
    printf("%d\bA\n",20);
    printf("%d\t%d\n",20,30);
    printf("%d      %d\n",20,30);
    printf("tryT:\ttabSq \n");
    // tabSq is 3 space?
    printf("tryN:   3space \n");
    
    return 0;
}