#include <stdio.h>

#include "mystring.h"

const int MAXLINE = 100;

int main()
{
    char s1[] = "Hello";
    //char s2[] = "World";

    printf("%p %p\n", strdup(s1), s1);
    return 0;
}
