#include <stdio.h>

#include "mystring.h"

const int MAXLINE = 100;

int main()
{
    const char *str = "nnabcabcbabcdabc\n";
    const char *str2 = "abcabc";
    printf("%s", strstr_kmp(str, str2));
    return 0;
}
