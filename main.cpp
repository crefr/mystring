#include <stdio.h>

#include "mystring.h"

const int MAXLINE = 5;

int main()
{
    char s[MAXLINE] = "";
    printf("HI\n");
    myfgets(s, MAXLINE, stdin);
    printf("%s", s);
    printf("%s", myfgets(s, MAXLINE, stdin));
    return 0;
}
