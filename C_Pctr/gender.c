# include <stdio.h>

int main() {
    int gender;
    printf("Are you Male? or Female?\n0: Male 1: Female\n");
    scanf("%d",&gender);

    if (gender ==0) {
        printf("You are a man!\n");
    } else {
        printf("You are a woman!\n");
    }
    return 0;
}