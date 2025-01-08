#include <stdio.h>
#include "./src/utils.c"
int main(void)
{
    char *buf = concatStrings("hello","world!");   
    searchNullTerminator(buf);
    return 0;
}