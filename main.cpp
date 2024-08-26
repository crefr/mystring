#include <stdio.h>

#include "mystring.h"

const int MAXLINE = 100;

int main()
{
    const char *str = "I love cats :D\n";
    const char *str2 = ":D";
    printf("%s", strstr(str, str2));
    return 0;
}
