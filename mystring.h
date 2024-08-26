#ifndef MYSTRING_INCLUDED
#define MYSTRING_INCLUDED

#ifndef size_t
    typedef unsigned long long int size_t;
#endif

char *strcpy( char *destptr, const char *srcptr );
char * strncpy( char * destptr, const char * srcptr, size_t num );
char * strcat( char * destptr, const char * srcptr );

#endif
