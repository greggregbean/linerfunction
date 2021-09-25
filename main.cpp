#include <stdio.h>
#include "linerfunction.cpp"

int main()
{
    char str[MAXLEN] = {'\0'};
    char* index[MAXLEN] = {'\0'};

    FILE *fp;
    fp = fopen("mytext.txt", "r");
    liner(str, index, fp);
    fclose(fp);
}
