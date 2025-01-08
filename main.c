#include "./src/utils.c"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char *buf = concatStrings("Hello", "World!");


    char *buf2 = "valid buffer!";
    searchNullTerminator(buf2);

    free(buf);
    return 0;
}