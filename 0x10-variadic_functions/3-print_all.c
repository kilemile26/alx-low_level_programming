#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

#include <stdio.h>
#include <stdarg.h>

#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format)
    {
        switch (*format)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                {
                    char *str = va_arg(args, char *);
                    printf("%s", str ? str : "(nil)");
                }
                break;
        }

        format++;

        if (*format && (*format == 'c' || *format == 'i' || *format == 'f' || *format == 's'))
            printf(", ");
    }

    printf("\n");
    va_end(args);
}
