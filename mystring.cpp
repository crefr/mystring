#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include "mystring.h"


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

size_t strlen( const char * string )
{
    size_t len = 0;
    while (*(string++) != '\0') len++;
    return len;
}

char* strdup (const char *src)
{
    char *pointer = (char *) calloc(sizeof(char), strlen(src) + 1);
    int index = 0;
    while((pointer[index] = src[index]) != '\0')
        index++;
    return pointer;
}

int myputs(const char *str)
{
    char ch = *str;
    while(ch != '\0')
        putchar(ch);
    putchar('\n');
    return '\n';
}

char *myfgets(char *str, int num, FILE *stream)
{
    int ch = 0;
    char * startptr = str;
    while(--num != 0 && (ch = getc(stream)) != EOF && ch != '\n')
        *(str++) = (char) ch;
    if (ch == '\n')
        *(str++) = '\n';
    *str = '\0';

    if (ch == EOF)
        return NULL;
    return startptr;
}

int getline(char str[], int lim)
{
    int ch;
    int index;
    for(index = 0; index < lim-1 && (ch = getchar()) != EOF && ch != '\n'; index++)
        str[index] = (char) ch;
    if (ch == '\n')
        str[index++] = (char) ch;
    str[index] = '\0';
    return index;
}

const char * strstr( const char * string1, const char * string2 )
{
        // индекс текущего символа поиска в string1
    size_t index1 = 0;
        // индекс текущего символа в string2
    size_t index2 = 0;
    while (string1[index1] != '\0')
    {
        index2 = 0;
        while (string1[index1 + index2] == string2[index2])
        {
            if (string2[index2 + 1] == '\0')
                return string1 + index1;
            index2++;
        }
        index1++;
    }
    return NULL;
}

unsigned int * prefixFunction(const char * str, size_t len)
{
    unsigned int *pref = (unsigned int *) calloc(len, sizeof(unsigned int));
    pref[0] = 0;
    for (size_t index = 1; index < len; index++)
    {
        unsigned int j = pref[index - 1];
        while (j > 0 && str[index] != str[j])
            j = pref[j - 1];
        if (str[index] == str[j])
            j++;
        pref[index] = j;
    }
    return pref;
}

/**
 * @brief алгоритм Кнута-Морриса-Пратта
 *
 * @param text [IN]  строка, в которой ищут
 * @param sample [IN]  подстрока, которую ищут
 * @return const char* указатель на найденную подстроку, NULL, если не найдена
 */
const char * strstr_kmp( const char * text, const char * sample )
{
    size_t samplelen = strlen(sample);
    size_t textlen = strlen(text);
    unsigned int * prefix = prefixFunction(sample, samplelen);
    size_t j = 0;
    for (size_t index = 0; index < textlen; index++)
    {
        while (sample[j] != text[index] && j > 0)
            j = prefix[j];
        if (sample[j] == text[index])
            j++;
        if (j == samplelen)
            return text + (index - samplelen + 1);
    }
    return NULL;
}
