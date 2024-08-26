#include <stdio.h>

#include "mystring.h"

const int MAXLINE = 100;

int main()
{
    char s1[] = "Hello";
    char s2[] = "World";

    printf("%s", strncat(s1, s2, 3));
    return 0;
}
