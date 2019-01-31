# include <stdio.h>
int main(int argc, char const *argv[])
{
    int row, colum;
    
    for (row = 1; row < 10; row++)
        for (colum = 1; colum < 10; colum++) {
            int result = row * colum;
            printf("%d x %d = %d\n",row,colum,result);
        }
    return 0;
}
