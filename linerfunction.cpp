//! @file linerfunction.cpp

#include <string.h>
#include "doc.h"

void liner(char* str, char** index, FILE *fp)
{
    int i = 0;
    int n = 0;
    int len = 0;

    while((str[i] = getc(fp)) != EOF)
    {

        if(str[i] == '\n')
        {
            printf("Str: \n");
            puts(str);

            index[n] = &(str[i - len]);
            printf("Addres: %p \n\n", index[n]);

            n++;
            len = 0;
            i++;

            continue;
        }

        i++;
        len++;
    }

}
