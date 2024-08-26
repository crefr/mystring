#include "mystring.h"

// puts, strchr, strlen, strcpy, strncpy, strcat, strncat, fgets, strdup, getline
char *strcpy( char *destptr, const char *srcptr )
{
    int i = 0;
    while ((destptr[i] = srcptr[i]) != '\0') i++;
    return destptr;
}

char * strncpy( char * destptr, const char * srcptr, size_t num )
{
    int i = 0;
    while ((destptr[i] = srcptr[i]) != '\0' && --num != 0) i++;
    if (num == 0)
        destptr[i+1] = '\0';
    return destptr;
}

char * strcat( char * destptr, const char * srcptr )
{
    int i = 0;
    while (destptr[i] != '\0') i++;
    int j = 0;
    while((destptr[i+j] = srcptr[j]) != '\0') j++;
    return destptr;
}
