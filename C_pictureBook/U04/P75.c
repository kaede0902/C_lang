#include <stdio.h>
int main() {
    int a[4] = {10,20,30,40};
    // gets refer of a[0]
    printf("Array a[0]'s value is: %d \n", *(a+0)); 
    // pointer's val + int's 2
    printf("Adds array a[0]'s val + 2 is: %d \n", *a+2);
    

}