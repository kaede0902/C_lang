# include <stdio.h>
# include <string.h>

int main(int argc, char const *argv[])
{
    int i;

    if (argc <= 1)
        return 1;
    if (strcmp(argv[1], "enum")==0 )
        for (i = 0; i < argc; i++)
            printf("argv[%d]: %s\n", i, argv[i]);
    else if (strcmp(argv[1],"count")== 0)
        printf("Arguments of command line: %d \n", argc -1);
    return 0;
}