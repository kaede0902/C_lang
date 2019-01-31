#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // print how to use.
    char usage[] = "usage: trash <-d> fileName \n";
    int rtn = 0;
    char newFileName[256] = "";

    if (argc <= 1) {
        printf(usage);
        return 1;
    }
    else if (strcmp(argv[1], "-d")== 0) {
        if (argc <= 2) {
            printf("usage");
            return 2;
        }
        rtn = remove(argv[2]);
        if (rtn == 0)
            printf("File Deleted. \n");
        else
            printf("File Cannot Deleted. \n");
    }
    else {
        sprintf(newFileName, "%s.bak", argv[1]);
        rtn = rename(argv[1],newFileName);
        if (rtn == 0)
            printf("Add .bak ");
    }
    
}
