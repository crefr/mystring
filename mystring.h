#ifndef MYSTRING_INCLUDED
#define MYSTRING_INCLUDED

#ifndef size_t
    typedef unsigned long long int size_t;
#endif

/**
 * @brief Функция копирует Си-строку srcptr, включая завершающий нулевой символ в строку назначения, на которую ссылается указатель destptr
 *
 * @param destptr   [OUT]   Указатель на строку назначения, куда будет скопирована строка-источник
 * @param srcptr    [IN]    Указатель на копируемую строку
 * @return char*    Указатель на строку назначения
 */
char *strcpy( char *destptr, const char *srcptr );

/**
 * @brief Функция копирует первые num символов из строки srcptr в строку destptr. Если конец строки srcptr (символ конца строки ) достигнут прежде, чем были скопированы num символов, к скопированным символам в конец строки destptr добавляется нуль-символ, после чего, строка считается скопированной.
 *
 * @param   destptr     [OUT]   Указатель на строку назначения (куда будут копироваться символы).
 * @param   srcptr      [IN]    Копируемая строка — строка из которой будут копироваться символы.
 * @param   num         [IN]    Максимальное количество копируемых символов строки srcptr.
 * @return char*    Указатель на строку назначения.
 */
char * strncpy( char * destptr, const char * srcptr, size_t num );
char * strcat( char * destptr, const char * srcptr );
const char * strchr( const char * string, int symbol );

#endif
