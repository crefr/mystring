#include <stddef.h>
#include "mystring.h"

// puts, strlen, fgets, strdup, getline
char *strcpy( char *destptr, const char *srcptr )
{
    int index = 0;
    while ((destptr[index] = srcptr[index]) != '\0') index++;
    return destptr;
}

char * strncpy( char * destptr, const char * srcptr, size_t num )
{
    int index = 0;
    while ((destptr[index] = srcptr[index]) != '\0' && --num != 0) index++;
    if (num == 0)
        destptr[index+1] = '\0';
    return destptr;
}

char * strcat( char * destptr, const char * srcptr )
{
    int destindex = 0;
    while (destptr[destindex] != '\0') destindex++;
    int srcindex = 0;
    while((destptr[destindex+srcindex] = srcptr[srcindex]) != '\0') srcindex++;
    return destptr;
}

char * strncat( char * destptr, char * srcptr, size_t num )
{
    int destindex = 0;
    while (destptr[destindex] != '\0') destindex++;
    int srcindex = 0;
    while((destptr[destindex+srcindex] = srcptr[srcindex]) != '\0' && --num != 0) srcindex++;
    if (num == 0)
        destptr[destindex + srcindex + 1] = '\0';
    return destptr;
}


const char * strchr( const char * string, int symbol )
{
    int ch = 0;
    while((ch = *string) != '\0')
    {
        if (ch == symbol)
            return string;
        string++;
    }
    return NULL;
}

