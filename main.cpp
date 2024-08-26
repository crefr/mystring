#include <stdio.h>

#include "mystring.h"

const int MAXLINE = 100;

int main()
{
    char s1[] = "Hello ";
    char s2[] = "World\n";
    printf("%s%s", strcat(s1,s2), s1);
    return 0;
}
