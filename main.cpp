#include <stdio.h>

#include "mystring.h"

const int MAXLINE = 100;

int main()
{
    char s[MAXLINE] = "";
    printf("%d %s\n", getline(s, MAXLINE), s);
    return 0;
}
