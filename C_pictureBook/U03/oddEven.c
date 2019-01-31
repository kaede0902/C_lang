#include <stdio.h>
int main() {
    int ans;
    printf("Type Num:");
    scanf("%d",&ans);

    if (ans %2 == 0)
        printf("%d is even.\n",ans);
    else
        printf("%d is odd.\n",ans);

    return 0;
}
